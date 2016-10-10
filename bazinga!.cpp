#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    int n=0,f1=0,f2=0,f3=0,f4=0,f5=0;
    string s1,s2;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        cin>>s1>>s2;
        if(s1==s2) printf("Caso #%d: De novo!\n",i);

        else if(s1=="tesoura" && s2=="papel" || s1=="tesoura" && s2=="lagarto")
            printf("Caso #%d: Bazinga!\n",i);

        else if(s1=="papel" && s2=="pedra" || s1=="papel" && s2=="Spock")
            printf("Caso #%d: Bazinga!\n",i);

        else if(s1=="pedra" && s2=="lagarto" || s1=="pedra" && s2=="tesoura")
            printf("Caso #%d: Bazinga!\n",i);

        else if(s1=="lagarto" && s2=="Spock" || s1=="lagarto" && s2=="papel")
            printf("Caso #%d: Bazinga!\n",i);

        else if(s1=="Spock" && s2=="tesoura" || s1=="Spock" && s2=="pedra")
            printf("Caso #%d: Bazinga!\n",i);

        else printf("Caso #%d: Raj trapaceou!\n",i);
    }
    return 0;
}
