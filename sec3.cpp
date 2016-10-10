#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=9;i+=2){
        if(i==1){
        for(int j=7;j>=5;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        }
        if(i==3){
        for(int j=9;j>=7;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        }
        if(i==5){
        for(int j=11;j>=9;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        }
        if(i==7){
        for(int j=13;j>=11;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        }
        if(i==9){
        for(int j=15;j>=13;j--){
            cout<<"I="<<i<<" J="<<j<<endl;
        }
        }
    }
    return 0;
}
