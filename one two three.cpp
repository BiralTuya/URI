#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[20];

int main(){
    int n=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++){
        fgets(str,sizeof(str),stdin);
        int len=strlen(str);
        //cout<<len;
            if(len>4) printf("3\n");
            else{
                if(str[0]=='o' &&str[1]=='n' && str[2]=='e') printf("1\n");
                else if(str[0]=='o' && str[1]=='n') printf("1\n");
                else if(str[1]=='n' && str[2]=='e') printf("1\n");
                else if(str[0]=='o' && str[2]=='e') printf("1\n");
                else if(str[0]=='t' && str[1]=='w' && str[2]=='o') printf("2\n");
                else if(str[0]=='t' && str[1]=='w') printf("2\n");
                else if(str[1]=='w' && str[2]=='o') printf("2\n");
                else if(str[0]=='t' && str[2]=='o') printf("2\n");
            }
        }
    return 0;
}

