#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    int n=0;
    double c=0,co=0,ra=0,sa=0,a=0;
    double ans1=0,ans2=0,ans3=0;
    char t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf %c\n",&a,&t);
        c=c+a;
        if(t=='C')
            co=co+a;
        else if(t=='R')
            ra=ra+a;
        else if(t=='S')
            sa=sa+a;
    }
    cout<<"Total: "<<(int)c<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<(int)co<<endl;
    cout<<"Total de ratos: "<<(int)ra<<endl;
    cout<<"Total de sapos: "<<(int)sa<<endl;
    ans1=(co/c)*100;
    ans2=(ra/c)*100;
    ans3=(sa/c)*100;
    printf("Percentual de coelhos: %.2lf",ans1);
    cout<<" %"<<endl;
    printf("Percentual de ratos: %.2lf",ans2);
    cout<<" %"<<endl;
    printf("Percentual de sapos: %.2lf",ans3);
    cout<<" %"<<endl;
    return 0;
}
