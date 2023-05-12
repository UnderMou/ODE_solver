#include "Result.hpp"
#include <fstream>

void Result::init(float y0, float t0){
    y_Ns.push_back(y0);
    t_Ns.push_back(t0);
}

void Result::update_results(float yn, float tn){
    y_Ns.push_back(yn);
    t_Ns.push_back(tn);
}

void Result::write_results(){
    ofstream myfile;
    string filename = "results.csv";
    myfile.open (filename);
    cout << "\n\nWriting the results within ´´" << filename << "`` file." << endl;

    /*myfile << "y_Ns("<< y_Ns.size() <<"):\n";
    for(vector<float>::iterator it = y_Ns.begin(); it != y_Ns.end(); it++){
        myfile << *it << ",";
    }
    myfile << endl;
    myfile << "t_Ns("<< t_Ns.size() <<"):\n";
    for(vector<float>::iterator it = t_Ns.begin(); it != t_Ns.end(); it++){
        myfile << *it << ",";
    }
    myfile << endl;*/

    myfile << "t_Ns,y_Ns\n";
    for(int it = 0; it != y_Ns.size(); it++){
        myfile << t_Ns[it] << "," << y_Ns[it] << endl;
    }
    
    myfile.close();
}

float Result::current_time(){
    //cout << "current time: " << t_Ns.back() << endl;
    return t_Ns.back();
}

float Result::current_y(){
    return y_Ns.back();
}