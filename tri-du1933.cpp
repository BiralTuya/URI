#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    if(a>b) printf("%d\n",a);
    else if(b>a) printf("%d\n",b);
    else if(a==b) printf("%d\n",a);
    return 0;
}
