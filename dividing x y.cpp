#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,x=0,y=0;
    double ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel"<<endl;
        else{
            ans=(double)x/y;
            printf("%.1lf\n",ans);
        }
    }
    return 0;
}
