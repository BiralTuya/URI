#include<iostream>
using namespace std;

int main(){
    int N=0,res=0;

    cin>>N;

    for(int i=1;i<=10;i++){
        res=i*N;
        cout<<i<<" x "<<N<<" = "<<res<<endl;
    }
    return 0;
}
