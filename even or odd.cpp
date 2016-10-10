#include<iostream>
using namespace std;

int main(){
    int n=0,v=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v;
        if(v==0)
            cout<<"NULL"<<endl;
        else{
            if(v%2==0)
                cout<<"EVEN ";
            else
                cout<<"ODD ";
            if(v<0)
                cout<<"NEGETIVE"<<endl;
            else
                cout<<"POSITIVE"<<endl;
        }
    }
    return 0;
}
