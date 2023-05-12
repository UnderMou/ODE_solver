#include "Solver.hpp"

void Solver::init(Problem value1, float value2, Method value3, Result value4, float value5){
    prob = value1;    
    delta_t = value2;
    meth = value3;
    res = value4;
    t_f = value5;
}

void Solver::run(){
    vector<float> vec_t_y(2);

    cout << "Log generation:" << endl;
    while(stop_criteria(res.current_time())){
        //Log generation (current time)
        cout << res.current_time() << "," << res.current_y() << endl;  

        //next time
        vec_t_y = meth.time_step_advance(res, prob, delta_t); //prob.f_function(tn,);

        //update
        res.update_results(vec_t_y[1], vec_t_y[0]);
    }
}

bool Solver::stop_criteria(float t){
    if(t<t_f){return true;}
    else{return false;}
}

Result Solver::return_res(){
    return res;
}