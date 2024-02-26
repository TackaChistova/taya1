#include <iostream>
using namespace std;

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
