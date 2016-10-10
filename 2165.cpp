#include<bits/stdc++.h>
using namespace std;

char str[510];

int main(){
    gets(str);
    int len=strlen(str);
    if(len<=140) printf("TWEET\n");
    else printf("MUTE\n");
    return 0;
}
