#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,p=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&p);
        if(p%2==0) printf("0\n");
        else if(p%2!=0) printf("1\n");
    }
    return 0;
}
