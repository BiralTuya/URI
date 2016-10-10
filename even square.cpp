#include<iostream>
using namespace std;

int main(){
    int n=0,result=0;

    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            result=i*i;
            cout<<i<<"^"<<"2"<<" = ";
            cout<<result<<endl;
            }
    }
    return 0;
}
