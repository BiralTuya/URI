#include<iostream>
#include<cstdio>
using namespace std;

int th[200];
int idx=0;

int main(){
    int a=0;
    scanf("%d",&a);
    int i=0;
    for(i=0;i<a;i++){
        scanf("%d",&th[i]);
    }
    int min=9999;
    int j=0;
    for(j=0;j<a;j++){
        if(th[j]<min){
            min=th[j];
            idx=j+1;
        }
    }printf("%d\n",idx);
    return 0;
}
