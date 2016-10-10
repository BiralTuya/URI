#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int c=0;
    char T;
    double sum=0,media=0;
    double a[12][12];
    cin>>T;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
            if(j<i)
                sum=sum+a[i][j];
        }
    }
    if(T=='S')
        printf("%.1lf\n",sum);
    if(T=='M'){
        printf("%.1lf\n",sum/66.0);
    }
    return 0;
}
