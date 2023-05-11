#include <string>

using namespace std;

class Method{
    protected:
        string meth_name;

    public:
        void init(string meth_name);

        void time_step_advance();

};