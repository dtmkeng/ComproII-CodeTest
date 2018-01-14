#include<stdio.h>
int isPrime(int);
int isPalidrom(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
//	printf(isPrime(num)?"prime":"");
	if(isPrime(num)){
		 printf("prime ");
		 if(isPalidrom(num))
		 	printf("palidrome ");
	}
	else if(isPalidrom(num))
		printf("palidrome ");
	else if(num%2==1)
		printf("odinary odd number\n");
	else 
		printf("odinary even number\n");
}
int isPrime(int n){
	int i;
	if(n<2)
		return 0;
	if(n==2||n==3)
		return 1;
	if(n%2==0||n%3==0)
		return 0;
	for(i=5;i*i<n;i+=6){
		if(n%i==0||n%(i+2)==0)
		   return 0;
	}
	return 1;
}
int isPalidrom(int n){
	int rev,odre,d;
	odre=n;
	while(n>0){
		d = n%10;
		rev=rev*10+d;
		n/=10;
	}
	if(rev==odre)
		return 1;
	else 
		return 0;
}
