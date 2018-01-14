#include<stdio.h>
int binaryToDecmal(int);
int isBinary(int);
int main(){
	int num,deci;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(isBinary(num)){
		deci=binaryToDecmal(num);
		printf("%d",deci);
	}else
	  printf("not brinary");
}
int binaryToDecmal(int n){
	int d,deci=0,base=1;
	while(n>0){
		d=n%10;
		deci=deci+(base*d);
		base*=2;
		n/=10;
	}	
	return deci;
}
int isBinary(int n){
	int d;
	while(n>0){
		d=n%10;
		if(d>1)
			return 0;
		n/=10;
	}
	return 1;
}
