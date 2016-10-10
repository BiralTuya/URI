#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    string name;
    double a,b,cal;

    cin>>name;
    cin>>a;
    cin>>b;

    cal=a+b*15/100;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<cal<<endl;
    return 0;
    }
