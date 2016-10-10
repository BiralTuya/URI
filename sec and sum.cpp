#include<iostream>
using namespace std;

int main(){
    int m=0,n=0,c=0;

    for(int j=0;;j++){

        cin>>m>>n;
        if(m<=0 || n<=0)
            break;
        else if(m<n){
            for(int i=m;i<=n;i++){
                cout<<i<<" ";
                c=c+i;
            }
            cout<<"Sum="<<c<<endl;
            c=0;
        }
        else if(n<m){
            for(int i=n;i<=m;i++){
                cout<<i<<" ";
                c=c+i;
            }
            cout<<"Sum="<<c<<endl;
            c=0;
        }
    }
    return 0;
}
