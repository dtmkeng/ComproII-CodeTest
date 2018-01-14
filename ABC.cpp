#include<stdio.h>
int main(){
	int num;char ch,ch_count,fist;
	printf("Enter a charceter: ");
	scanf(" %c",&ch);
	printf("Enter a number: ");
	scanf("%d",&num);
	ch_count=ch;
	fist = ch=='A'?ch+1:'A';
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=num;j++){
			if(i==1){
				printf("%c",ch_count++);
			}
			else if(i==2){
				if(fist==ch){
				  fist=ch+1;
				  printf("%c",fist++);
			}
				else
				  printf("%c",fist++);
			}
			else if(i==3)
				printf("%c",ch);
			
		}
		printf("\n");
	}
}
