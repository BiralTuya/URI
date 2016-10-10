#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,q=0,r=0;
    scanf("%d%d",&a,&b);
    if(a<0){
        e=b;
        if(b<0) e=b-1;
        for(r=0;r<e;r++){
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
    }
        else{
            q=a/b;
            r=a%b;
        }
        printf("%d %d",q,r);
        return 0;
}
