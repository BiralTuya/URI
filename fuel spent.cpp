#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int tm=0,km=0;
    double fuel;

    scanf("%d%d",&tm,&km);

    fuel=(tm*km)/12.0;

    printf("%.3lf\n",fuel);
    return 0;
    }
