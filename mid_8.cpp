#include<stdio.h>
void printO(int);
void print1(int);
void print2(int);
int main(){
	int num ;
	printf("Enter a number: ");
	scanf("%d",&num);
	printO(num);
	print1(num);
	print2(num);
}
void printO(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||j==1||i==5||j==5)
				printf("0");
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print1(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j==3)
				printf("0");
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print2(int n){
		int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i<=5/2||i==4&&j==1)
				printf("0");
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print3(int n){
	
}
