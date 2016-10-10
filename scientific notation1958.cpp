#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    long double n=0;
    char c[200];
    scanf("%LE",&n);
    sprintf(c,"%LE",n);
    if(c[0]!='-') printf("+");
    printf("%.4LE\n",n);
    return 0;
}
