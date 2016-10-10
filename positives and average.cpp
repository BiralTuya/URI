#include<iostream>
using namespace std;

int main(){
    double sum=0,avrg,a;
    double v[6];
    int c=0;
    for(int i=0;i<6;i++){
        cin>>a;
        if(a>0){
            v[i]=a;
            c=c+1;
            sum=sum+v[i];
        }
    }
    avrg=sum/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<avrg<<endl;
    return 0;
}
