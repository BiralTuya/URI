#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char str[50]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==n-1){
           printf("%c",str[i]);
           printf("\n");
        }
        else
            printf("%c",str[i]);
    }
    return 0;
}
