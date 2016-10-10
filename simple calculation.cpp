#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int cd=0,unit=0,cd1=0,unit1=0;
    double price,price1,pay;

    scanf("%d%d%lf",&cd,&unit,&price);
    scanf("%d%d%lf",&cd1,&unit1,&price1);

    pay=(unit*price)+(unit1*price1);

    printf("VALOR A PAGAR: R$ %.2lf\n",pay);
    return 0;
    }
