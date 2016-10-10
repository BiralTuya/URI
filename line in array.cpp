#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int L=0;
    char T;
    double sum=0,media=0;
    double a[12][12];
    cin>>L>>T;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    if(T=='S'){
        for(int i=0;i<12;i++){
            sum=sum+a[L][i];
        }
        printf("%.1lf\n",sum);
    }
    if(T=='M'){
        for(int i=0;i<12;i++){
            sum=sum+a[L][i];
        }
        media=sum/12;
        printf("%.1lf\n",media);
    }
    return 0;
}
