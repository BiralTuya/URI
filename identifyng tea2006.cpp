#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,r=0,c=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",&r);
        if(r==t) c++;
    }
    printf("%d\n",c);
    return 0;
}
