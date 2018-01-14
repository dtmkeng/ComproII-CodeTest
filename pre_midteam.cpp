#include<stdio.h>
int palidome(int);
int Power(int,int);
int uciGCD(int,int);
int main(){
	int n,a;
	printf("Enter a number: ");
	scanf(" %d",&n);
	printf("Enter a power: ");
	scanf(" %d",&a);
	//printf("%d",palidome(n));	
	printf("%d\n",Power(n,a));
	printf("%d\n",uciGCD(n,a));
}
int palidome(int a){
	int d,rev;
	while(a>0){
		d=a%10;
		rev=rev*10+d;
		a/=10;
	}
	return rev;
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
int Power(int n,int a){
	//n^a
	int i,pow=1;
	for(i=1;i<=a;i++){
		pow*=n;
	}
	return pow;
}
