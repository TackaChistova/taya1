#include <iostream>

using namespace std;

//12
int itc_sqrt(int num){
int kv = 1;
while(kv * kv < num){
    kv++;
}
if(kv * kv == num){
    return kv;
}
return -1;
}

//13
int itc_skv(int num){
if(num > 0){
    return num * num;
}
else{
    return -1;
}

}

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
