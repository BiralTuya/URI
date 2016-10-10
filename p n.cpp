#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,x=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=1;j<=x;j++){
            if(x%j==0){
                sum=sum+j;
            }
        }
        if(sum==x+1) printf("%d eh primo\n",x);
        else if(sum>x) printf("%d nao eh primo\n",x);
        sum=0;x=0;
    }
    return 0;
}
