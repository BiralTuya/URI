#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,n=0;
    long long a[61]={0,1,1};
    for(int j=3;j<=60;j++){
        a[j]=a[j-1]+a[j-2];
    }
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n>=0 && n<=60)
            printf("Fib(%d) = %lld\n",n,a[n]);
            n=0;
    }
    return 0;
}
