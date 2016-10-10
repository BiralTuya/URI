#include<iostream>
using namespace std;

int main(){
    int n=0,v=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v;
        if(v%2==0 && v>0)
            cout<<"EVEN POSITIVE"<<endl;
        if(v%2==0 && v<0)
            cout<<"EVEN NEGETIVE"<<endl;
        if(v%2!=0 && v>0)
            cout<<"ODD POSITIVE"<<endl;
        if(v%2!=0 && v<0)
            cout<<"ODD NEGETIVE"<<endl;
        if(v==0)
            cout<<"NULL"<<endl;
    }
    return 0;
}
