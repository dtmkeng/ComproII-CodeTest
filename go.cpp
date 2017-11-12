#include <stdio.h>
#include <string.h>
int m=9;
int op(int i);
void midterm(int a, char c[]);
char s1[15]="THAILAND",s2[]="KORAT";
int i=1;
int main(){
    midterm(i,s2);
    printf("%c\n",s1[i]);
}
int op(int i){
	
	m=m-i;
	printf("=%d\n",m);
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
