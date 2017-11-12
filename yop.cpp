#include <stdio.h>
#include <string.h>
int main(){
	char str[20]; 
	 gets(str);
	 //printf("%d",strlen(str));
	 for(int i=0;i<strlen(str);i++){
	   if(str[i]==' '){
	   	  for(int j=i+1;j<strlen(str);j++){
	   	  	  printf("%c",str[j]);
			 }
	   }
	 }
	 //printf("%s",str);
}
