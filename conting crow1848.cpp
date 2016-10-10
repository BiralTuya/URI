/*input:
--*
--*
--*
caw caw
*--
*--
caw caw
--*
*--
caw caw
output:
3
8
5
*/
#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
#include<cstring>
using namespace std;

int main(){
    char bl[20]={0};
    char cr[20]={0};
    int r[10]={0};
    int len=0,flag=0,sum=0,dec=0,c=0;
    while(1){
        for(int i=0;;i++){
            fgets(bl,20,stdin);
            len=strlen(bl);
            if(bl[len-1]!='\0'){
                bl[len-1]='\0';
                len--;
            }
            for(int j=0;j<len;j++){
                if(bl[j]=='-') r[j]=0;
                else if(bl[j]=='*') r[j]=1;
                else if(strcmp(bl,"caw caw")){
                    strcpy(cr,bl);
                    flag=1;
                }
            }
            dec=(r[0]*4)+(r[1]*2)+(r[2]*1);
            cout<<dec<<endl;
            sum=sum+dec;
            if(flag==1) break;
        }printf("%d\n",sum);
        c++;
        //sum=0;dec=0;flag=0;
        if(c==3) break;
    }
    return 0;
}
