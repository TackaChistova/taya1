#include <iostream>
using namespace std;

int itc_abs(int num){
int vos;
if(num > 0){
    return num;
}
else{
    vos = num * -1;
    return vos;
}

}

double itc_fabs(double num){
double vos;
if(num > 0){
    return num;
}
else{
    vos = num * -1;
    return vos;
}

}
