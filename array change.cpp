#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[20];
    for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,a[19-i]);
    }
    return 0;
}
