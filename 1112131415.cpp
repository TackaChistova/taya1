#include <iostream>
#include "easy.h"
using namespace std;

//11
int itc_sqrt(int num){
long long  kv = 1;
if(num <= 0){
    return -1;
}
while(kv * kv < num){
    kv++;
}
if(kv * kv == num){
    return kv;
}
return -1;
}

//12
int itc_skv(int num){
if(num > 0){
    return num * num;
}
else{
    return -1;
}

}

//13
int itc_spr(int a, int b){
if(a > 0 && b > 0){
    return a * b;
}
else{
    return -1;
}

}


//14
int itc_str(int a, int b, int c){
int maxi;
int p = (a + b + c) / 2;
if((a > 0 && b > 0 && c > 0) && (a + b > c && c + b > a && c + a > b)){
            return itc_sqrt(p * (p - a) * (p - b) * (p - c));
        }
else{
    return -1;
}
}

double itc_scir(int radius){
if(radius < 0){
    return -1;
}
if(radius == 0){
    return 0;
}
else{
    return 3.14 *(radius * radius);
}
}
