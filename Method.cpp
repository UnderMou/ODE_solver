#include "Method.hpp"

void Method::init(string value1){
    meth_name = value1;
}

void Method::time_step_advance(){
    //E.g.: Explicit Euler Method
    cout << "Yn atualizado" << endl;    
}