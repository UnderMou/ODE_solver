#include "Problem.cpp"
#include "Result.cpp"
#include "Method.cpp"

class Solver{
    protected:
        float delta_t;
        Problem prob;
        Method meth;
        Result res;
        float t_f;
    public:
        void init(Problem prob, float delta_t, Method meth, Result res, float t_f);

        void run();

        bool stop_criteria(float t);

        Result return_res();
};