#include "Solver.hpp"

void Solver::init(Problem value1, float value2, Method value3){
    prob = value1;    
    delta_t = value2;
    meth = value3;
}

void Solver::run(){
    float t = 0;
    while(stop_criteria(t)){
        meth.time_step_advance();
        t += delta_t;
    }
}

bool Solver::stop_criteria(float t){
    if(t<=10){return true;}
    else{return false;}
}