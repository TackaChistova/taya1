#include <iostream>
using namespace std;

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


