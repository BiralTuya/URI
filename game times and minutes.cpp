#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0,d=0,t=0,s=0;

    cin>>a>>b>>c>>d;

    if(a<c){
        if(b<d || b==d){
            t=c-a;
            s=d-b;
            cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<s<<" MINUTO(S)"<<endl;
        }
        else if(b>d){
            t=(c-a)-1;
            s=(60-b)+d;
            cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<s<<" MINUTO(S)"<<endl;
        }
    }
    else if(a>c || a==c){
        if(b<d || b==d){
            t=(24-a)+c;
            s=d-b;
            cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<s<<" MINUTO(S)"<<endl;
        }
        else if(b>d){
            t=((24-a)+c)-1;
            s=(60-b)+d;
            cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<s<<" MINUTO(S)"<<endl;
        }
    }
    return 0;
}

