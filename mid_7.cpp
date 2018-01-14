#include<stdio.h>
int LCM(int,int);
int GCD(int,int);
int main(){
	int n1,n2,lcm;
	printf("Enter a numerator: ");
	scanf("%d",&n1);
	printf("Enter a decaemo: ");
	scanf("%d",&n2);
	lcm=GCD(n1,n2);
	printf("%d/%d = > %d/%d",n1,n2,n1/lcm,n2/lcm);
}
int GCD(int a,int b){
	int temp;
	while(a%b!=0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}
int LCM(int a,int b){
	return (a*b)/GCD(a,b);
}
