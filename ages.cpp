#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a,sum=0,c=0;
    double ans=0;
    while(a>=0){
        scanf("%d\n",&a);
        if(a<0) break;
        if(a>0){
            sum=sum+a;
            c++;
        }
    }
    ans=(double)sum/(double)c;
    printf("%.2lf\n",ans);
    return 0;
}
