#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=0,b=0;
    float c,salary;

    cin>>a;
    cin>>b;
    cin>>c;

    salary=b*c;
    cout<<"NUMBER = "<<a<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
    }
