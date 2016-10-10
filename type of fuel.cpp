#include<iostream>
using namespace std;

int main(){
    int a=0,p=0,q=0,r=0;
    for(int i=0;;i++){
        cin>>a;
        if(a>=1 && a<4){
            if(a==1)p++;
            if(a==2)q++;
            if(a==3)r++;
        }
        else if(a==4){
            cout<<"MUITO OBRIGADO"<<endl;
            cout<<"Alcool: "<<p<<endl;
            cout<<"Gasolina: "<<q<<endl;
            cout<<"Diesel: "<<r<<endl;
            break;
        }
    }
    return 0;
}
