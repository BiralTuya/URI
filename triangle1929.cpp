#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((b+c)>d && (c+d)>b && (b+d)>c) printf("S\n");
    else if((a+c)>d && (c+d)>a && (a+d)>c) printf("S\n");
    else if((b+a)>d && (b+d)>a && (a+d)>b) printf("S\n");
    else if((a+b)>c && (c+b)>a && (c+a)>b) printf("S\n");
    else printf("N\n");
    return 0;
}
