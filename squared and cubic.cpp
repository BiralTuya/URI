#include<iostream>
using namespace std;

int main(){
    int n=0,a=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<a*a<<" "<<a*a*a<<endl;
        a++;
    }
    return 0;
}
