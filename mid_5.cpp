#include<stdio.h>
int reples(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d",reples(num));
}
int reples(int n){
	int d ,repl,base=1;
	while(n >0){
		d=n%10;
		if(d==0)
			repl=repl+base*9;
		else
			repl=repl+base*d;
		base*=10;
		n/=10;
	}
	return repl;
}
