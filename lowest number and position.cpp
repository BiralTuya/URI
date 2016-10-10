#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min=9999;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            c=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",c);
    return 0;
}
