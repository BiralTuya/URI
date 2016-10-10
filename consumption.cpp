#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int km=0;
    double ltr,total;

    scanf("%d%lf",&km,&ltr);

    total=km/ltr;

    printf("%.3lf km/l\n",total);
    return 0;
    }
