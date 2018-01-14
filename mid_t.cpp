#include<stdio.h>
int findMax(int,int,int);
int findMin(int,int,int);
int findMid(int,int,int);
int main(){
	int a,b,c,max,min,mid,vmax,vmin,sum;
	printf("Mid_term\n");
	printf("Enter 3 number <each 1 digit> : ");
	scanf("%d%d%d",&a,&b,&c);
  	max= findMax(a,b,c);
  	min= findMin(a,b,c);
  	mid= findMid(a,b,c);
  	vmax=max*100+mid*10+min;
  	vmin=min*100+mid*10+max;
  	sum = vmax+vmin;
  	printf("%d  +  %d = %d",vmax,vmin,sum);
}
int findMax(int a,int b,int c){
	int max;
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	return max;
}
int findMin(int a,int b,int c){
	int min;
	min =(a<b)?a:b;
	min=(min<c)?min:c;
	return min;
}
int findMid(int a,int b,int c){
	int mid;
	mid=a+b+c-(findMax(a,b,c)+findMin(a,b,c));
	return mid;
}
