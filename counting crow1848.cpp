#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char bl[20];
int d=0,sum=0,flag=0;

int main(){
    int j=0;
    for(j=0;;j++){
        int i=0;
        for(i=0;;i++){
            fgets(bl,20,stdin);
            int len=strlen(bl);
            if(bl[len-1]!='\0'){
                bl[len-1]='\0';
                len--;
            }
            if(strcmp(bl,"--*")) d+=1;
            else if(strcmp(bl,"-*-")) d+=2;
            else if(strcmp(bl,"-**")) d+=3;
            else if(strcmp(bl,"*--")) d+=4;
            else if(strcmp(bl,"caw caw")){
                //sum=sum+d;
                //printf("%d\n",d);
                sum=0;
                //flag=0;
                //d=0;
                break;
            }
        }printf("%d\n",d);

    }
    return 0;
}
