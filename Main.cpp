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
    p1.init(0);

    // Initialize the Method
    Method m1;
    m1.init("Explicit Euler");

    // Initialize the results: Initial condition
    Result r1;
    r1.init(1,0);

    // Initialize the solver
    Solver s1;
    s1.init(p1, 0.1, m1, r1, 25);
    s1.run();

    // Post processing
    r1 = s1.return_res();
    r1.write_results();

    ofstream myfile;
    

    return 0;
}