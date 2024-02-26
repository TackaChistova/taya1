#include <iostream>
using namespace std;

int itc_abs(int num){
int vos;
cin >> num;
if(num > 0){
    return num;
}
else{
    vos = num * -1;
    return vos;
}

}
