#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[10];
    int i=0;
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++){
        a[i+1]=a[i]*2;
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
