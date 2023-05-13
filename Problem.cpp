#include <iostream>
#include "Problem.hpp"

void Problem::init(float value1){
    y_0 = value1;
}

float Problem::f_function(float t, float y){
    return (t*t - t + 1 -2*y)/t;
}