#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main(){
    queue<int>par;
    queue<int>impar;
    int n=0,p=0,ip=0;

    for(int i=0;i<15;i++){
        scanf("%d",&n);
        if(n%2==0){
            par.push(n);
            p++;
            if(p==5){
                for(int j=0;j<5;j++){
                    printf("par[%d] = %d\n",j,par.front());
                    par.pop();
                }
            }
        }
        else if(n%2!=0){
            impar.push(n);
            ip++;
            if(ip==5){
                for(int j=0;j<5;j++){
                    printf("impar[%d] = %d\n",j,impar.front());
                    impar.pop();
                }
            }
        }
    }
    int c=0;
    while(impar.size()!=0){
        printf("impar[%d] = %d\n",c,impar.front());
        impar.pop();
        c++;
    }
    int d=0;
     while(par.size()!=0){
        printf("par[%d] = %d\n",d,par.front());
        par.pop();
        d++;
    }
    return 0;
}
