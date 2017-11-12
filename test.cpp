#include<stdio.h>
#include <string.h>
int main(){
void midterm(int, char []);
 int i,t1=0,t2=0,sum=0;
 char s1[15]="THAILAND",s2[]="KORAT";
 for(i=strlen(s1)-1; i>0; i--){
 if(s1[i]%2==1){
 t1--;
 midterm(i,s1);
 printf("%c\n",s1[i]);
 }else{
 t2++;
 midterm(strlen(s2)-1,s2);
 s1[i]++;
 sum+=s1[i];
 printf("%c\n",s2[0]);
 }
 }


}
void midterm(int a, char c[]){
 int i;
 for(i=0; i<a; i++){
 if(c[i]>'F')
 c[i]--;
 else
 c[i]++;
 }
 return;
} 
