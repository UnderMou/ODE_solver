#include <vector>

using namespace std;

class Problem{
    protected:
        vector<float> coeffs_vec;
        float y_0;
    public:
        void init(float y_0, vector<float> coeffs_vec);
        
        float f_function(float t, float y);  

        void print_info();     
};      