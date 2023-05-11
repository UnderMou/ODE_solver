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

    // Initialize the results: Initial condition
    Result r1;
    r1.init(8,7);

    // Initialize the solver
    Solver s1;
    s1.init(p1, 0.5, m1, r1);
    s1.run();

    // Post processing
    s1.show_results();
    return 0;
}