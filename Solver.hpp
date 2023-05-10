#include "Problem.cpp"

class Solver{
    protected:
        float delta_t;
        Problem prob;
    public:
        void init(Problem prob, float delta_t);

        void run();
};