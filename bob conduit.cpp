#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,r1=0,r2=0,R=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        cin>>r1>>r2;
        R=r1+r2;
        printf("%d\n",R);
    }
    return 0;
}
