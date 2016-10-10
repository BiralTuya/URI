#include<bits/stdc++.h>
using namespace std;

char str[510];

int main(){
    //fgets(str,510,stdin);
    gets(str);
    int len=strlen(str);
    if(len<=80) printf("YES\n");
    else if(len>80) printf("NO\n");
    return 0;
}
