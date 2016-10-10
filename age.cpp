#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    int days=0;
    double v1,v2,v3,v4,v5,v6;

    cin>>days;

    v1=floor(days/365);
    v2=v1*365;
    v3=days-v2;
    v4=floor(v3/30);
    v5=v4*30;
    v6=v3-v5;

    cout<<v1<<" ano(s)"<<endl;
    cout<<v4<<" mes(es)"<<endl;
    cout<<v6<<" dia(s)"<<endl;
    return 0;
    }
