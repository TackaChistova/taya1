#include <iostream>
#include "easy.h"
using namespace std;

double itc_pow(int num, int step){
if(step == 1){
    return 0;
}
int i;
int n = num;
if( step < 0){
    for(i = 0; i < step - 1; i++){
        n *= num;
    }
    return 1.0 / n;
}

for(i = 0; i < step - 1; i++){
    n *= num;
}
return n;

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
