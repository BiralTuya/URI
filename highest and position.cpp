#include<iostream>
using namespace std;

int main(){
    int n=0,highest=0,pos=0;

    for(int i=1;i<=100;i++){
        cin>>n;
        if(n>highest){
            highest=n;
            pos=i;
        }
    }
    cout<<highest<<endl;
    cout<<pos<<endl;
    return 0;
}
