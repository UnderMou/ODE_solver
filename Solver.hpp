#include "Problem.cpp"
#include "Method.cpp"

class Solver{
    protected:
        float delta_t;
        Problem prob;
        Method meth;
    public:
        void init(Problem prob, float delta_t, Method meth);

        void run();

        bool stop_criteria(float t);
};