#include<iostream>
using namespace std;

int main(){
    int N=0,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0,v8=0,v9=0,v10=0,v11=0,v12=0,v13=0;

    cin>>N;

    v1=N/100;
    v2=N%100;
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
    v13=v12/1;

    cout<<N<<endl;
    cout<<v1<<" nota(s) de R$ 100,00"<<endl;
    cout<<v3<<" nota(s) de R$ 50,00"<<endl;
    cout<<v5<<" nota(s) de R$ 20,00"<<endl;
    cout<<v7<<" nota(s) de R$ 10,00"<<endl;
    cout<<v9<<" nota(s) de R$ 5,00"<<endl;
    cout<<v11<<" nota(s) de R$ 2,00"<<endl;
    cout<<v13<<" nota(s) de R$ 1,00"<<endl;
    return 0;
    }
