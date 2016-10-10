#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,c=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b<=c) printf(":)\n");
    else if(a<b && b>=c) printf(":(\n");
    else if(a<b && b<c){
        if((c-b)<(b-a)) printf(":(\n");
        else if((c-b)>=(b-a)) printf(":)\n");
    }
    else if(a>b && b>c){
        if((b-c)<(a-b)) printf(":)\n");
        else if((b-c)>=(a-b)) printf(":(\n");
    }
    else if(a==b){
        if(b<c) printf(":)\n");
        else printf(":(\n");
    }
    return 0;
}
