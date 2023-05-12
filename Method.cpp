#include "Method.hpp"

void Method::init(string value1){
    meth_name = value1;
}

vector<float> Method::time_step_advance(Result r, Problem p, float delta_t){
    vector<float> vec_t_y(2);

    //E.g.: Explicit Euler Method
    vec_t_y[0] = r.current_time() + delta_t;
    vec_t_y[1] = r.current_y() + delta_t*p.f_function(r.current_time(),r.current_y());   
    return vec_t_y;
}