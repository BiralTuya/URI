#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double a,b,c,area;

    scanf("%lf%lf%lf",&a,&b,&c);

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Perimetro = %.1lf\n",a+b+c);
    }
    else{
        area=((a+b)/2)*c;
        printf("Area = %.1lf\n",area);
    }
    return 0;

}
