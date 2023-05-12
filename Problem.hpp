#include <vector>

using namespace std;

class Problem{
    protected:
        float y_0;
    public:
        void init(float y_0);
        
        float f_function(float t, float y);     
};      