#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float volume;
    int R=0;

    cin>>R;

    volume=(4.0/3)*3.14159*R*R*R;

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;
    return 0;
    }
