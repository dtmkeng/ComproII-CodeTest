#include <stdio.h>
#include <string.h>
int main(){

int i,sum=0,all=0,t1=0,t2=10;
 char ch ='X';
 i=15;
 while(i>1){
 i--;
 if(i%2==1 && i>=5){
 t1++;
 sum+=i;
 }else{
 t2--;
 printf("%c\n",ch-i);
 continue;
 }
 i=i-2;
 sum+=i;
 ch--;
 all= i+t1+t2;
 }
 printf("%d %d",t1,t2);
}
