#include "Solver.cpp"

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

    // Initialize the Method
    Method m1;
    m1.init("Explicit Euler");

    // Initialize the solver
    Solver s1;
    s1.init(p1, 1, m1);
    s1.run();
    return 0;
}