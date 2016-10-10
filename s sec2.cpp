#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double sum=0;
    int b=2;
    for(int i=3;i<40;i+=2){
        sum=sum+((double)i/(double)b);
        b*=2;
    }
    printf("%.2lf\n",1+sum);
    return 0;
}
