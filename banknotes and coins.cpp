#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int T=0,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0,v8=0,v9=0,v10=0,v11=0,v12=0;
    int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0,m10=0,m11=0;
    double N,a,b;

    cin>>N;

    T=floor(N);
    v1=T/100;
    v2=T%100;
    v3=v2/50;
    v4=v2%50;
    v5=v4/20;
    v6=v4%20;
    v7=v6/10;
    v8=v6%10;
    v9=v8/5;
    v10=v8%5;
    v11=v10/2;
    v12=v10%2;

    m1=v12/1;
    a=floor(N);
    b=N-a;
    m2=b*100;
    m3=m2/50;
    m4=m2%50;
    m5=m4/25;
    m6=m4%25;
    m7=m6/10;
    m8=m6%10;
    m9=m8/5;
    m10=m8%5;
    m11=m10/1;

    cout<<"NOTAS:"<<endl;
    cout<<v1<<" nota(s) de R$ 100.00"<<endl;
    cout<<v3<<" nota(s) de R$ 50.00"<<endl;
    cout<<v5<<" nota(s) de R$ 20.00"<<endl;
    cout<<v7<<" nota(s) de R$ 10.00"<<endl;
    cout<<v9<<" nota(s) de R$ 5.00"<<endl;
    cout<<v11<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<m1<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m3<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m5<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m7<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m9<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m11<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
    }
