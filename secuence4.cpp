#include<iostream>
using namespace std;

int main(){
    int x=0,y=0,c=0,n=0;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>x>>y;
        if(x<y){
            for(int i=x+1;i<y;i++){
                if(i%2==1){
                    c=c+i;
                }
            }
            cout<<c<<endl;
            c=0;
        }
        else if(y<x){
            for(int i=y+1;i<x;i++){
                if(i%2==1){
                    c=c+i;
                }
            }
            cout<<c<<endl;
            c=0;
        }
        else if(x==y)
            cout<<"0"<<endl;
        else if(y==x+1)
            cout<<"0"<<endl;
        else if(x==y+1)
            cout<<"0"<<endl;
    }
    return 0;
}
