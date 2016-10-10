#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int c=0,n=0,len=0,ifalse=0;
    char str[10]={0};
    scanf("%d%d",&c,&ifalse);
    for(int i=0;i<c;i++){
        fgets(str,10,stdin);
        len=strlen(str);
        if(str[len-1]!='\0'){
            str[len-1]='\0';
            len--;
        }
        scanf("%d%d",&n,&ifalse);
        if(str[0]=='T' && str[1]=='h' && str[2]=='o' && str[3]=='r') printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
