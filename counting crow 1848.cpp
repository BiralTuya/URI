#include<iostream>
#include<cstdio>
using namespace std;

char s[20];

int main(){
    int sum=0;
    while(EOF){
        while(fgets(s,sizeof(s),stdin)){
            if(s=="--*") sum+=1;
            else if(s=="-*-") sum+=2;
            else if(s=="-**") sum+=3;
            else if(s=="*--") sum+=4;
            else if(s=="*-*") sum+=5;
            else if(s=="-**") sum+=6;
            else if(s=="***") sum+=7;
            //else sum+=0;
            else if(s=="caw caw") break;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
