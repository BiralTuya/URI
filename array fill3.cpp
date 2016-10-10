#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double a[100];
    double n=0;
    scanf("%lf",&n);
    a[0]=n;
    for(int i=0;i<100;i++){
        a[i+1]=a[i]/2;
        printf("N[%d] = %.4lf\n",i,a[i]);
    }
    return 0;
}
