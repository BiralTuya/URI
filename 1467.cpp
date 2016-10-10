#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a==b && b!=c && c!=a) printf("C\n");
        else if(b==c && c!=a && a!=b) printf("A\n");
        else if(c==a && a!=b && b!=c) printf("B\n");
        else if(a==b && b==c && c==a) printf("*\n");
    }
    return 0;
}
