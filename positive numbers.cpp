#include<iostream>
using namespace std;

int main(){
    double a;
    int c=0;
    for(int i=0;i<6;i++){
        cin>>a;
        if(a>0)
            c=c+1;
    }
    cout<<c<<" valores positivos"<<endl;
    return 0;
}
