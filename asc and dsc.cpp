#include<iostream>
using namespace std;

int main(){
    int a=0,b=0;

    for(int i=0;;i++){
        cin>>a>>b;
        if(a==b)
            break;
        else if(a>b)
            cout<<"Decrescente"<<endl;
        else if(b>a)
            cout<<"Crescente"<<endl;
    }
    return 0;
}
