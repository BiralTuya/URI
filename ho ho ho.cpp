#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t=0,c=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Ho");
        c++;
        if(c==t) printf("!\n");
        else printf(" ");
    }
    return 0;
}
