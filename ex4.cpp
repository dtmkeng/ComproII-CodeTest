#include<stdio.h>
int main(){
	int n,d,j;
	printf("Test\n");
	printf("Enter a number: ");
	scanf(" %d",&n);
	int sum=0,base=1,rev=0;
	while(n > 0){
	    d=n%10;
	    //don't reves
	    sum=sum+d*base;
	    //rever 
	    rev=rev*10+d;
	    base*=10;
	    //printf("%d  ",d);
		n/=10;
	}
	printf("%d",rev);
	return 0;
}
