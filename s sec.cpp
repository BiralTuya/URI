#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double s=0;
    for(int i=1;i<=100;i++){
        s=s+(1.0/i);
    }
    printf("%.2lf\n",s);
    return 0;
}
