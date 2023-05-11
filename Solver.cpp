#include "Solver.hpp"

void Solver::init(Problem value1, float value2, Method value3, Result value4, float value5){
    prob = value1;    
    delta_t = value2;
    meth = value3;
    res = value4;
    t_f = value5;
}

void Solver::run(){
    float t;
    while(stop_criteria(res.current_time())){
        cout << res.current_time() << " ";
        meth.time_step_advance();
        t = res.current_time()+delta_t;
        res.update_results(4,t);
    }
}

bool Solver::stop_criteria(float t){
    if(t<t_f){return true;}
    else{return false;}
}

Result Solver::return_res(){
    return res;
}