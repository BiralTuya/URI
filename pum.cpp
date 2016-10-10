#include<iostream>
using namespace std;

int main(){
    int n=0,a=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<a+1<<" "<<a+2<<" PUM"<<endl;
        a=a+4;
    }
    return 0;
}
