#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    double a=(double)(1+sqrt(5))/2;
    double b=(double)(1-sqrt(5))/2;
    double ans=(double)(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%.1lf\n",ans);
    return 0;
}
