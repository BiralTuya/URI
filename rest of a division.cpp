#include<iostream>
using namespace std;

int main(){
    int x=0,y=0;
    cin>>x;
    cin>>y;
    if(x<y){
        for(int i=x+1;i<y;i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }
    else if(x>y){
        for(int i=y+1;i<x;i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}