#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double p=0,n=0,r=0,r1;
    scanf("%lf %lf",&p,&n);
    r=(n-p)/p;
    printf("%.2lf",r*100);printf("%c\n",37);
    return 0;
}
