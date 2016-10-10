#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,x=0,sum=0;
    scanf("%d\n",&n);
    for(int j=0;j<n;j++){
        cin>>x;
        for(int i=1;i<x;i++){
            if(x%i==0){
                sum=sum+i;
            }
        }
        if(sum==x) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
        sum=0;
    }
    return 0;
}
