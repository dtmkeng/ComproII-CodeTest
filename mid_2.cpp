#include<stdio.h>
void printAfabet(int ,char);
int main(){
	int num;char ch;
	printf("Enter a number <1-10>: ");
	scanf("%d",&num);
	printf("Enter  a character <A-Z> : ");
//	ffush(studin);
	scanf(" %c",&ch);
	printAfabet(num,ch);
}
void printAfabet(int n,char ch){
	int i;
	for(i=1;i<=n;i++){
		printf("%c ",ch++);
		if(ch>'Z'){
			ch='A';
		}
	}
}
