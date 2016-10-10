#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int x[10];
    for(int i=0;i<10;i++){
        scanf("%d",&x[i]);
        if(x[i]<=0){
            x[i]=1;
        }
        cout<<"X["<<i<<"] = "<<x[i]<<endl;
    }
    return 0;
}
