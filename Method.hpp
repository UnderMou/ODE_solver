#include <string>

using namespace std;

class Method{
    protected:
        string meth_name;

    public:
        void init(string meth_name);

        vector<float> time_step_advance(Result res, Problem prob, float delta_t);

};