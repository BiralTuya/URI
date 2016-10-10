#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    char T;
    double sum=0,media=0;
    double a[12][12];
    cin>>T;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    int c=0;
     for(int i=0;i<=11;i--){
            for(int j=1+c;j<=11;j++){
                sum=sum+a[i][j];
            }c++;
        }
    if(T=='S') printf("%.1lf\n",sum);
    if(T=='M') printf("%.1lf\n",sum/66.0);
    return 0;
}
