#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

char str[10000];

int main(){
    int n=0,sum=0,flag=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++){
        fgets(str,sizeof(str),stdin);
        int len=strlen(str);
        int j;
        for(j=0;j<len;j++){
            if(str[j]=='1'){ sum+=2;flag=1;}
            else if(str[j]=='2'){ sum+=5;flag=1;}
            else if(str[j]=='3'){ sum+=5;flag=1;}
            else if(str[j]=='4'){ sum+=4;flag=1;}
            else if(str[j]=='5'){ sum+=5;flag=1;}
            else if(str[j]=='6'){ sum+=6;flag=1;}
            else if(str[j]=='7'){ sum+=3;flag=1;}
            else if(str[j]=='8'){ sum+=7;flag=1;}
            else if(str[j]=='9'){ sum+=6;flag=1;}
            else if(str[j]=='0'){ sum+=6;flag=1;}
        }if(flag==1){
            printf("%d leds\n",sum);
            sum=0;
        }
    }
    return 0;
}
