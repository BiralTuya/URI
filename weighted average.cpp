#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0;
    double a=0,b=0,c=0,res=0,ress=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        res=(a*2.0)+(b*3.0)+(c*5.0);
        ress=res/10.0;
        printf("%.1lf\n",ress);
    }
    return 0;
}
