#include <iostream>
#include "easy.h"
using namespace std;

double itc_pow(int num, int step){
int b = num;
if(step < 0){
    step = step*-1;
    while(step >1){
        num = num * b;
        step--;
    }
    return 1.0/num;
}
if(step > 0){
    while(step > 1){
        num = num * b;
        step--;
    }
    return num;
}
if(step == 0){
    return 1;
}
}


bool itc_ispositive(int num){
if(num > 0){
    return true;
}
if(num < 0){
    return false;
}
}

bool itc_ispositive_d(double num){
if(num > 0){
    return true;
}
if(num < 0){
    return false;
}
}
