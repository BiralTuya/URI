#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    int a=0,b=0,q=0,r=0;
    scanf("%d %d",&a,&b);
        q=a/b;
        r=a%b;
    if(r<0 && q>0){
        q=(a/b)+1;
        r=-(b*q)+a;
    }
    else if(r<0 && q<=0){
        q=(a/b)-1;
        r=-(b*q)+a;
    }
    printf("%d %d\n",q,r);
    return 0;
}
