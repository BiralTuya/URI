#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

int a[150];
int flag=0;

int main(){
    int p=0,n=0,r=0;
    scanf("%d %d",&p,&n);
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    for(j=0;j<n-1;j++){
        r=abs(a[j]-a[j+1]);
        if(r>p){
            flag=1;
            break;
        }
    }
    if(flag==1) printf("GAME OVER\n");
    else printf("YOU WIN\n");
    return 0;
}
