class MonteCarlo{
    private:
        double R; //半径
        int n; //試行回数
    public:
        MonteCarlo(int N); //コンストラクタ
        ~MonteCarlo(){}; //デストラクタ
        double gen_rand(); // 乱数生成
        int judge_within_circle(); // 円内にあるか判定
        int cnt_point(); // 円内にある点を数える
        double calc_pi(); // 円周率を計算
};