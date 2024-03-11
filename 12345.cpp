#include <iostream>
#include "easy.h"

using namespace std;

void itc_name(){
cout << "Taisiya";
}

void itc_fio(){
itc_name();
cout << " Chistova Alekseevna";

}


int itc_abs(int num){
int vos;
if(num >= 0){
    return num;
}
else{
    vos = num * -1;
    return vos;
}

}


double itc_fabs(double num){
double vos;
if(num >= 0){
    return num;
}
else{
    vos = num * -1;
    return vos;
}

}

int itc_revnbr(int num){
int a;
int b;
int c;
int v;
a = num%10;
num = num / 10;
b = num % 10;
num = num / 10;
c = num % 10;
v = a * 100 + b * 10 + c;
return v;
}
