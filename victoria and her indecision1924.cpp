#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char bl[200];

int main(){
    int n=0,ifalse=0;
    scanf("%d%d",&n,&ifalse);
    int i=0;
    for(i=0;i<n;i++){
        fgets(bl,20,stdin);
            int len=strlen(bl);
            if(bl[len-1]!='\0'){
                bl[len-1]='\0';
                len--;
            }
    }printf("Ciencia da Computacao\n");
    return 0;
}
