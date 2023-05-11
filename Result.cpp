#include "Result.hpp"

void Result::init(float y0, float t0){
    y_Ns.push_back(y0);
    t_Ns.push_back(t0);
}

void Result::update_results(float yn, float tn){
    y_Ns.push_back(yn);
    t_Ns.push_back(tn);
}

void Result::write_results(){
    cout << "Writing the results ..." << endl;

    cout << "y_Ns("<< y_Ns.size() <<"): ";
    for(vector<float>::iterator it = y_Ns.begin(); it != y_Ns.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "t_Ns("<< t_Ns.size() <<"): ";
    for(vector<float>::iterator it = t_Ns.begin(); it != t_Ns.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

float Result::current_time(){
    //cout << "current time: " << t_Ns.back() << endl;
    return t_Ns.back();
}