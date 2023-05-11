#include "Problem.cpp"
#include "Method.cpp"
#include "Result.cpp"

class Solver{
    protected:
        float delta_t;
        Problem prob;
        Method meth;
        Result res;
    public:
        void init(Problem prob, float delta_t, Method meth, Result res);

        void run();

        bool stop_criteria(float t);

        void show_results();
};