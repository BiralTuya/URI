#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0;
    scanf("%d",&n);
    printf("1\n");
    for(int i=2;i<n;i++){
        if(n%i==0)
            printf("%d\n",i);
    }
    printf("%d\n",n);
    return 0;
}
