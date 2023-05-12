class Result{
    protected:
        vector<float> y_Ns;
        vector<float> t_Ns;
    public:
        void init(float y0, float t0);

        void update_results(float yn, float tn);

        void write_results();

        float current_time();

        float current_y();
};