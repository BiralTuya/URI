#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,p=0,m=0;
    scanf("%lf",&n);
    p=n/log(n);
    m=(1.25506)*(n/log(n));
    printf("%.1lf %.1lf\n",p,m);
    return 0;
}
