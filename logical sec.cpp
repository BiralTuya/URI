#include<iostream>
using namespace std;

int main(){
    int n=0,a=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" "<<a*a<<" "<<a*a*a<<endl;
        cout<<a<<" "<<(a*a)+1<<" "<<(a*a*a)+1<<endl;
        a++;
    }
    return 0;
}
