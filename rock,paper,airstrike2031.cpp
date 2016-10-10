#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    string s1="",s2="";
    int n=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        cin>>s1>>s2;
        if(s1=="ataque" && s2=="pedra") printf("Jogador 1 venceu\n");
        else if(s1=="pedra" && s2=="ataque") printf("Jogador 2 venceu\n");
        else if(s1=="pedra" && s2=="papel") printf("Jogador 1 venceu\n");
        else if(s1=="papel" && s2=="pedra") printf("Jogador 2 venceu\n");
        else if(s1=="papel" && s2=="ataque") printf("Jogador 2 venceu\n");
        else if(s1=="ataque" && s2=="papel") printf("Jogador 1 venceu\n");
        else if(s1=="papel" && s2=="papel") printf("Ambos venceram\n");
        else if(s1=="pedra" && s2=="pedra") printf("Sem ganhador\n");
        else if(s1=="ataque" && s2=="ataque") printf("Aniquilacao mutua\n");
    }
    return 0;
}
