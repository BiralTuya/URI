#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int m,d,r;
    r=31+29+31+30+31+30+31+31+30+31+30+25;
    while(scanf("%d %d",&m,&d)!=EOF){
          if(m==1) printf("Faltam %d dias para o natal!\n",r-d);
            else if(m==2) printf("Faltam %d dias para o natal!\n",r-d-31);
            else if(m==3) printf("Faltam %d dias para o natal!\n",r-d-31-29);
            else if(m==4) printf("Faltam %d dias para o natal!\n",r-d-31-29-31);
            else if(m==5) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30);
            else if(m==6) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31);
            else if(m==7) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31-30);
            else if(m==8) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31-30-31);
            else if(m==9) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31-30-31-31);
            else if(m==10) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31-30-31-31-30);
            else if(m==11) printf("Faltam %d dias para o natal!\n",r-d-31-29-31-30-31-30-31-31-30-31);
            else if(m==12){
                if(d==24) printf("E vespera de natal!\n");
                else if(d==25) printf("E natal!\n");
                else if(d>25) printf("Ja passou!\n");
                else if(d<24) printf("Faltam %d dias para o natal!\n",25-d);
            }

          }
          return 0;
}
