#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0;
    int k[10000];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k[i]);
    }
    for(int i=0;i<n;i++){
        if(k[i]==0)
            printf("NULL\n");
        if(k[i]%2==0 && k[i]>0)
            printf("EVEN POSITIVE\n");
        if(k[i]%2==0 && k[i]<0)
            printf("EVEN NEGATIVE\n");
        if(k[i]%2!=0 && k[i]>0)
            printf("ODD POSITIVE\n");
        if(k[i]%2!=0 && k[i]<0)
            printf("ODD NEGATIVE\n");
    }
    return 0;
}
