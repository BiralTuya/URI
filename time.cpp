#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    int sec=0;
    double v,v1,v2,v3,v4,v5;

    cin>>sec;

    v=floor(sec/3600);
    v1=v*3600;
    v2=sec-v1;
    v3=floor(v2/60);
    v4=v3*60;
    v5=v2-v4;

    cout<<v<<":"<<v3<<":"<<v5<<endl;
    return 0;
    }
