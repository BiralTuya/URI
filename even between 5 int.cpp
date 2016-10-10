#include<iostream>
using namespace std;

int main(){
    int a=0,c=0,c1=0,c2=0,c3=0;
    for(int i=0;i<5;i++){
        cin>>a;
        if(a%2==0)
            c++;
        if(a%2==1 || a%2==-1)
            c1++;
        if(a>0)
            c2++;
        if(a<0)
            c3++;
    }
    cout<<c<<" valores par(es)"<<endl;
    cout<<c1<<" valores impar(es)"<<endl;
    cout<<c2<<" valores positivo(s)"<<endl;
    cout<<c3<<" valores negetivo(s)"<<endl;
    return 0;
}
