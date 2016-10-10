#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int X=0,Y=0;
    double product;

    scanf("%d%d",&X,&Y);

    if(X==1){
        product=4.00*Y;
        printf("Total: R$ %.2lf\n",product);
    }
    else if(X==2){
        product=4.50*Y;
        printf("Total: R$ %.2lf\n",product);
    }
    else if(X==3){
        product=5.00*Y;
        printf("Total: R$ %.2lf\n",product);
    }
    else if(X==4){
        product=2.00*Y;
        printf("Total: R$ %.2lf\n",product);
    }
    else if(X==5){
        product=1.50*Y;
        printf("Total: R$ %.2lf\n",product);
    }
}
