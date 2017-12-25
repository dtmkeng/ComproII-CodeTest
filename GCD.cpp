#include<stdio.h>
int isGCD(int a,int b);
int LCM(int a,int b);
void factor(int n);
void tofactor(int n);
void printBlock(int n);
void printX(int);
void printY(int);
void printStar(int);
int main(){
 	int num1,num2;
 	printf("Enter a number: ");
//	scanf("%d%d",&num1,&num2);
//	printf("GCD = %d\n",isGCD(num1,num2));
//	printf("LCM = %d\n",LCM(num1,num2));
    scanf("%d",&num1);
    //factor(num1);
    //tofactor(num1);
    //printBlock(num1);
    //printX(num1);
    //printY(num1);
    printStar(num1);
    
}
void printStar(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if (i==n/2+1 && j==n/2+1)
				printf("X");
			else if(i==j)
			  printf("\\");
			else if(i+j==n+1)
			  printf("/");
			else if(i==n/2+1)
			  printf("-");
			else if(j==n/2+1)
				printf("|");
			else 
			  printf(" ");
		}
		printf("\n");
	}
}
void printY(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if (i==n/2+1 && j==n/2+1)
				printf("V");
			else if(i==j&&i<=n/2)
			  printf("\\");
			else if(i+j==n+1&&i<=n/2)
			  printf("/");
			else if(j==n/2+1&&i>n/2+1)
				printf("|");
			else 
			  printf(" ");
		}
		printf("\n");
	}
}
void printX(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if (i==n/2+1 && j==n/2+1)
				printf("X");
			else if(i==j)
			  printf("\\");
			else if(i+j==n+1)
			  printf("/");
			else 
			  printf(" ");
		}
		printf("\n");
	}
}
void printBlock(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		    if((i==1||i==n)&&(j==1||j==n))
			   printf("o");
 			else if(i==1||i==n)
			   printf("-");
			else if(j==1||j==n)
			   printf("|");
			else 
			   printf("x");
		}
		printf("\n");
	}
}
int isGCD(int a,int b){
	int min,i;
	min = (a>b) ? b : a;
	for(i=min;i>=1;i--){
		if(a%i==0&&b%i==0)
		 	return i;
	}
}
int uciGCD(int a,int b){
	int temp;
	while(a%b!=0){
		temp=a;
		a=b;
		b=temp%b;
	}	
	return b;
}
//lcm = a*b/gcd;
int LCM(int a, int b){
	return (a*b)/uciGCD(a,b);
}
//factor
void factor(int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0)
		    printf("%d ",i); 
	}
}
void tofactor(int n){
	int i,status=0;
	while(n > 1){
	   for(i=2;i<=n;i++){
	   	  if(n%i==0){
	   	  	if(status==0){
	   	       printf("%d",i);
	   	       status=1;
	   	    }else{
	   	    	printf("x%d",i);
			   }
	   	     n=n/i;
	   	     break;
	   	 }
	   }
	}
}
//donest
