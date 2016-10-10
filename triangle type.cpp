#include<iostream>
using namespace std;

int main(){
    double a,b,c,temp;

    cin>>a>>b>>c;


    if(b>a && b>c){
        temp=a;
        a=b;
        b=temp;
        if(c>b){
            temp=b;
            b=c;
            c=temp;
            }

    }
    if(c>a && c>b){
        temp=a;
        a=c;
        c=temp;
        if(c>b){
            temp=b;
            b=c;
            c=temp;
        }
    }


    if(a>=(b+c))
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else if((a*a)==(b*b)+(c*c))
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if((a*a)>(b*b)+(c*c))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if((a*a)<(b*b)+(c*c))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if(a==b && b==c && c==a)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if(a==b && c!=a)
        cout<<"TRIANGULO ISOSCELES"<<endl;
    else if(b==c && a!=b)
        cout<<"TRIANGULO ISOSCELES"<<endl;
    else if(c==a && b!=c)
        cout<<"TRIANGULO ISOSCELES"<<endl;
    return 0;
}
