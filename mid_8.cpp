#include<stdio.h>
void printO(int);
void print1(int);
void print2(int);
void print3(int);
void print4(int);
void print5(int);
void print6(int);
void print7(int);
void print8(int);
void print9(int);
int main(){
	int num ;
	printf("Enter a number: ");
	scanf("%d",&num);
	switch(num){
	case 0: printO(num); break;
	case 1: print1(num); break;
    case 2: print2(num); break;
	case 3: print3(num); break;
	case 4: print4(num); break;
	case 5: print5(num); break;	
	case 6: print6(num); break;
	case 7: print7(num); break;
	case 8: print8(num); break;
	case 9: print9(num); break;
  }
}
void printO(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||j==1||i==5||j==5)
				printf("%d",n);
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
				printf("%d",n);
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
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print3(int n){
		int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i<=5/2||i==4&&j==5)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print4(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j==1&&i<=5/2||i==3||j==5)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print5(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i==4||i==2&&j==1)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print6(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i==4||i==2&&j==1||j==1&&i==4)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print7(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||j==5)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print8(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i==4||i==2&&j==1||j==1&&i==4||i==2&&j==5)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
void print9(int n){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||i==5/2+1||j==5&&i==4||i==2&&j==1||i==2&&j==5)
				printf("%d",n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
