#include<stdio.h>
void pronoun(int);
int main(){
	int num,a,b,c;
	printf("Enter 3 digit number: ");
	scanf("%d",&num);
	a=num/100;
	b=num%100/10;
	c=num%10;
	if(a!=b&&b!=c){
		pronoun(a);
		pronoun(b);
		pronoun(c);
	}
	else if(a==b&&b!=c){
		printf("double ");
		pronoun(a);
		pronoun(c);
	}
	else if(b==c&&b!=a){
		pronoun(a);
		printf("double ");
		pronoun(c);	
	}
	else if(a==b&&b==c){
		printf("triple ");
		pronoun(a);
	}
	//pronoun(a,b,c);
//	printf("%d%d%d",a,b,c);
}
void pronoun(int n){
	 switch (n){
	 	case 0 :{
	 		printf("zero ");
			break;
		 }
		 case 1 : {
		 	printf("one ");
			break;
		 }
		 case 2:{
		 	printf("two ");
			break;
		 }
		 case 3:{
		 	printf("three ");
			break;
		 }
		 case 4 :{
		 	printf("four ");
			break;
		 }
		 case 5 :{
		 	printf("five ");
			break;
		 }
		 case 6 :{
		 	printf("six ");
			break;
		 }
		 case 7 :{
		 	printf("seven ");
			break;
		 }
		 case 8: {
		 	printf("eight ");
			break;
		 }
		 case 9 :{
		 	printf("nice ");
			break;
		 }
	 }
}
