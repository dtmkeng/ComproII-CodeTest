#include <stdio.h>
#include <string.h>
int main(){
	char n[10],*p;
	int cnt=0,i=0;
	cnt =5;
	p=n;
	while(cnt!=0){
	  while(getchar() != '\n'){
	  printf("Input Data %d",i+1);
	  scanf("%c",&p[i]);
	  i++;
	  cnt--;
      } 
	}
	
}

