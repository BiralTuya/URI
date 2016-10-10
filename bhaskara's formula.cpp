#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    double A,B,C,d,R1,R2,d1;

    scanf("%lf%lf%lf",&A,&B,&C);

    d=B*B-4*A*C;
    d1=sqrt(d);

    if(d>0 && A!=0){
        //d1=sqrt(d);
        R1=(-B+d1)/(2*A);
        R2=(-B-d1)/(2*A);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }


}
