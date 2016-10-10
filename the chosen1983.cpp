#include<iostream>
#include<cstdio>
using namespace std;

long long r=0;
double n=0;
int num=0,c=0;
//double max=-9999.00;

int main(){
    double max=-9999.00;
    scanf("%d",&num);
    int i=0;
    for(i=0;i<num;i++){
        scanf("%lld %lf",&r,&n);
        if(n>max){
            max=n;
            c=r;
        }
    }
    if(max<8) printf("Minimum note not reached\n");
    else if(max>=8) printf("%d\n",c);
    return 0;
}
