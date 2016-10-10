#include<iostream>
#include<cstdio>
using namespace std;

int m=0,q=0;
double d=0,r=0;

int main(){
    int num=0;
    scanf("%d",&num);
    int i=0;
    for(i=0;i<num;i++){
        scanf("%d %d",&m,&q);
        if(m==1001) d=1.50;
        else if(m==1002) d=2.50;
        else if(m==1003) d=3.50;
        else if(m==1004) d=4.50;
        else if(m==1005) d=5.50;
        r+=d*q;
    }
    printf("%.2lf\n",r);
    return 0;
}
