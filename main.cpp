//SPDX-License-Identifer: GPL-3.0
//Copyright (c) 2021 Makoto Yoshigoe. All rights reserved

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include"MonteCalro.h"

// // メイン処理
int main(void){
    MonteCarlo mc1(10e3);
    srand((unsigned)time(NULL)); //シード値生成
    for(int i = 0; i < 10; i++)
        std::cout << "π=" << mc1.calc_pi() << std::endl;
    return 0;
}