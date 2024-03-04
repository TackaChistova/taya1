#include <iostream>

using namespace std;

bool itc_iseven(int num){
if(num % 2 == 0){
    return 1;
}
else{
    return 0;
}

}


int itc_max(int num, int num2){
if(num >= num2){
    return num;
}
else{
    return num2;
}

}

int itc_min(int num, int num2){
if(num <= num2){
    return num;
}
else{
    return num2;
}

}

double itc_fmax(double num, double num2){
if(num >= num2 ){
    return num;
}
else{
    return num2;

}
}

double itc_fmin(double num, double num2){
if(num <= num2 ){
    return num;
}
else{
    return num2;

}
}
