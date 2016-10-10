#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a=0,b=0,x=0,c=0,d=0,e=0,f=0;

    for(int i=0;;i++){
        cin>>a>>b;
        c++;
        if(a>b)d++;
        if(a<b)e++;
        if(a==b)f++;
        printf("Novo grenal (1-sim 2-nao)\n");
        cin>>x;

       /* if(x==1){
            c++;
            if(a>b) d++;
            if(a<b) e++;
            if(a==b) f++;
        }*/
        if(x==2){
            printf("%d grenais\n",c);
            printf("Inter:%d\n",d);
            printf("Gremio:%d\n",e);
            printf("Empates:%d\n",f);
            if(d>e)
                printf("Inter venceu mais\n");
            else if(e>d)
                printf("Gremio venceu mais\n");
            else if(e==d)
                printf("Nao houve vencedor\n");
                break;
        }
    }
    return 0;
}
