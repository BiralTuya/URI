#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double A,B,C,avrg;
    cin>>A;
    cin>>B;
    cin>>C;
    avrg=(A*2+B*3+C*5)/10;
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<avrg<<endl;
    return 0;
    }

