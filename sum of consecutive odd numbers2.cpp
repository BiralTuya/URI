#include<iostream>
using namespace std;

int main(){
    int n=0,x=0,y=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x<y){
        for(int j=x+1;j<y;j++){
            if(j%2==1){
                c++;
                cout<<c<<endl;
            }
            else
                cout<<"0"<<endl;
        }

    }
    else{
        for(int j=y+1;j<x;j++){
            if(j%2==1){
                c++;

            }
            else
                cout<<"0"<<endl;
        }
        cout<<c<<endl;

    }
    }
    return 0;
}
