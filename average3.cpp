#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double n1,n2,n3,n4,n5,avg,avg1;

    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

    avg=(n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1lf\n",avg);

    if(avg>=7){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg<5){
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg>=5 && avg<7){
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        avg1=(avg+n5)/2;
        if(avg1>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",avg1);
        }
        else if(avg1<5){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",avg1);
        }

    }

    return 0;
}
