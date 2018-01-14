#include<stdio.h>
int isPlidrome(int);
void display(int);
int count(int);
int countDigit(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	display(num);
	//printf(isPlidrome(num)?"palidrome":" ");
	
}
void display(int n){
	int status,palidrom,ditgit;
	ditgit = count(n);
	status=countDigit(n);
	if(ditgit==1)
		printf("1-ditgit ");
	else 
		printf("%d-ditgits ",ditgit);
	switch(status){
		case 1:{
			printf("all even ");
			break;
		}
		case 2:{
			printf("mix ");
			break;
		}
		case 0:{
			printf("all odd ");
			break;
		}
	}
	printf(isPlidrome(n)?"palidrome":"number");
}
int isPlidrome(int n){
	int rev,odrev;
	odrev=n;
	while(n>0){
		rev=rev*10+(n%10);
		n/=10;
	}
	if(rev==odrev)
		return 1;
	else 
		return 0;
		
}
int countDigit(int n){
	int odd=0,even=0,d;
	while(n>0){
		d=n%10;
		if(d%2==0)
		   even++;
		else
			odd++;
		n/=10;
	}
	if(even>odd)
		return 1;
	else if(odd>even)
		return 0;
	else 
		return 2;
}
int count(int n){
	int count=0;
	while(n>0){
		count++;
		n%10;
		n/=10;
	}
	return count;
}
