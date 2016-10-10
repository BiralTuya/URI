#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,s=0,ma=0;

    scanf("%d%d%d",&a,&b,&s);

    ma=(a+b+a*b*s*(a-b))/2;

    printf("%d eh o maior\n",ma);
    return 0;
    }
