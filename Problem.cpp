#include <iostream>
#include "Problem.hpp"

void Problem::init(float value1, vector<float> value2){
    coeffs_vec = value2;
    y_0 = value1;
}

float Problem::f_function(float t, float y){
    cout << "f_function being executed!" << endl;
    return 1.67;
}

void Problem::print_info(){
    cout << "Coeffs_vec: ";
    for(vector<float>::iterator it = coeffs_vec.begin(); it != coeffs_vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "y_o: " << y_0 << endl;
}