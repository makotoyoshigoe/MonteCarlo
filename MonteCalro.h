#include<math.h>

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

MonteCarlo::MonteCarlo(int N){
    this->n = N;
    this->R = 0.5;
}

double MonteCarlo::gen_rand(){
    return (double)rand() / RAND_MAX; //乱数を生成
}

int MonteCarlo::judge_within_circle(){
    double x = gen_rand();
    double y = gen_rand();
    double r = pow(x-R, 2) + pow(y-R, 2); //三平方の定理
    if(r <= R*R) return 1;
    else return 0;
}

int MonteCarlo::cnt_point(){
    int cnt = 0;
    for(int i = 0; i < n; i++) cnt += judge_within_circle();
    return cnt;
}

double MonteCarlo::calc_pi(){
    double A = (double)cnt_point() / (double)n;
    double pi = A / (R*R);
    return pi;
}