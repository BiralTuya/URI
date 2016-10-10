#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0,t=0;

    cin>>a>>b;

    if(a==b){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(a<b){
        t=b-a;
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }
    else if(a>b){
        c=24-a;
        t=c+b;
        cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    }
    return 0;
}
