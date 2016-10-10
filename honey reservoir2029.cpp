#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double v=0,d=0,area=0;
    double r=0,n=3.14;
    while(EOF){
        scanf("%lf",&v);
        scanf("%lf",&d);
        r=d/2;
        area=n*r*r;
        printf("ALTURA = %.2lf\n",v/area);
        printf("AREA = %.2lf\n",area);
        v=0;d=0;
    }
    return 0;
}
