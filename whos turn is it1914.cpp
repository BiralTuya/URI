#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int n=0,a=0,b=0;
    char nm1[10];
    char nm2[10];
    char p1[10];
    char p2[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s %s %s",&nm1,&p1,&nm2,&p2);
        scanf("%d %d",&a,&b);
        if((a+b)%2==0){
            if(p1=="PAR") printf("%s\n",nm1);
            else if(p2=="PAR") printf("%s\n",nm2);
        }
        else if((a+b)%2!=0){
            if(p1=="IMPAR") printf("%s\n",nm1);
            else if(p2=="IMPAR") printf("%s\n",nm2);
        }
    }
    return 0;
}
