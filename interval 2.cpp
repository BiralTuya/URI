#include<iostream>
using namespace std;

int main(){
    int n=0,x=0,c=0,d=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=10 && x<20)
            c++;
        else
            d++;
    }
    cout<<c<<" in"<<endl;
    cout<<d<<" out"<<endl;
    return 0;
}
