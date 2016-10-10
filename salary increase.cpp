#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double a,p;

    scanf("%lf",&a);

    if(a>0 && a<=400){
        p=a*(15.0/100);
        printf("Novo salario: %.2lf\n",a+p);
        printf("Reajuste ganho: %.2lf\n",p);
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>400 && a<=800){
        p=a*(12.0/100);
        printf("Novo salario: %.2lf\n",a+p);
        printf("Reajuste ganho: %.2lf\n",p);
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(a>800 && a<=1200){
        p=a*(10.0/100);
        printf("Novo salario: %.2lf\n",a+p);
        printf("Reajuste ganho: %.2lf\n",p);
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(a>1200 && a<=2000){
        p=a*(7.0/100);
        printf("Novo salario: %.2lf\n",a+p);
        printf("Reajuste ganho: %.2lf\n",p);
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(a>2000){
        p=a*(4.0/100);
        printf("Novo salario: %.2lf\n",a+p);
        printf("Reajuste ganho: %.2lf\n",p);
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
