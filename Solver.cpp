#include "Solver.hpp"

void Solver::init(Problem value1, float value2){
    prob = value1;    
    delta_t = value2;
}

void Solver::run(){

}

int main(){
    // Initialize coefficient vector
    // TODO: maybe do this by reading a .txt input file.
    vector<float> v;
    for(int i = 0; i < 10; i++){
        v.push_back((float)i);
    }

    // Initialize the Problem with Coeff_vec and Initial condition (y_o = 2 e.g.)
    Problem p1;
    p1.init(2,v);
    p1.print_info();
    return 0;
}