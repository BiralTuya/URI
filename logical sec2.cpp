#include<iostream>
using namespace std;

int main(){
    int x=0,y=0,n=1;
    cin>>x>>y;
    for(int i=1;i<=y;i++){
        if(n==x){
            cout<<i<<endl;
            n=1;
        }
        else{
            cout<<i<<" ";
            n++;
        }
    }
    return 0;
}
