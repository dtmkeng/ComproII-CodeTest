#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,left=0,right=0;
	printf("Enter gun move: ");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]=='R')
			right+=a[i+1]-'0';
		else if(a[i]=='L')
			left+=a[i+1]-'0';
	}
	for(i=1;i<=10;i++){
		if(i==(right-left))
		   printf("X");
		else printf("+");
	}
	printf("\n");
}
