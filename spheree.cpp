#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double pi=3.14159,volume;
    int R=0;

    scanf("%d",&R);

    volume=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
    }
