#include<stdio.h>
#include<math.h>
int printArray(int [],int);
int printBackward(int[],int);
int sumAllArray(int [],int);
int findMaximum(int [],int);
int findMinmum(int [],int);
int findSecondMax(int[],int);
int findSecondMin(int [],int );
void printOnlyOdd(int[],int);
void printPrime(int [],int);
int isPrime(int);
void printPreSqure(int [],int);
int isPreSqure(int);
int Max2Product(int[],int);
void reverse(int [],int);
void roteteLeft(int [],int ,int);
void roteteRight(int [],int,int);
int main(){
	int n[] ={3,9,1,5,12,25,10,4};
	int length = sizeof(n)/sizeof(n[0]);
	printArray(n,length);
	printBackward(n,length);	
	printf("Sum all array = %d\n",sumAllArray(n,length));
	printf("Maximun =  %d\n",findMaximum(n,length));
	printf("Minimun = %d\n",findMinmum(n,length));
	printf("Second Max = %d\n",findSecondMax(n,length));
	printf("Second Min = %d\n",findSecondMin(n,length));
	printOnlyOdd(n,length);
	printPrime(n,length);
	printPreSqure(n,length);
	printf("Max two  produc = %d\n",Max2Product(n,length));
	reverse(n,length);
	printArray(n,length);
	roteteLeft(n,length,3);
	printArray(n,length);
	roteteRight(n,length,3);
	printArray(n,length);
}
int printArray(int n[],int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ",n[i]);
	}
	printf("\n"); 
}
int printBackward(int a[],int len){
	int i;
	for(i=len-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int sumAllArray(int a[],int len){
	int i,sum=0;
	for(i=0;i<len;i++){
		sum+=a[i];
	}
	return sum;
}
int findMaximum(int a[],int len){
	int i,max;
	max=a[0];
	for(i=0;i<len;i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int findMinmum(int a[],int len){
	int min,i;
	min=a[0];
	for(i=0;i<len;i++){
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
int findSecondMax(int a[],int len){
	int max1,max2,i;
	max1=max2=-9999;
	for(i=0;i<len;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}else if(a[i]>max2)
			max2=a[i];
	}
	return max2;
}
int findSecondMin(int a[],int len){
    int min1,min2,i;
    min1=min2=99999;
	for(i=0;i<len;i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}else if(a[i]<min2)
			min2=a[i];
	}	
	return min2;
}
void printOnlyOdd(int a[],int len){
	int i;
	printf("odd number : ");
	for(i=0;i<len;i++){
		if(a[i]%2==1)
			printf("%d ",a[i]);
	}
	printf("\n");
}
int isPrime(int n){
	int i;
	if(n<2)
	  	return 0;
	if(n==2||n==3)
		return 1;
	if(n%2==0||n%3==0)
		return 0;
	for(i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0)
			return 0;
	}
	return 1;
}
void printPrime(int a[],int len){
	int i;
	printf("Prime number : ");
	for(i=0;i<len;i++){
		if(isPrime(a[i]))
			printf("%d ",a[i]);
	}
	printf("\n");
}
void printPreSqure(int a[],int len){
	int i;
	printf("Prefect Squre : ");
	for(i=0;i<len;i++){
		if(isPreSqure(a[i]))
			printf("%d ",a[i]);
	}
	printf("\n");
}
int isPreSqure(int n){
	int d=sqrt(n);
	return d*d == n;
}
int Max2Product(int a[],int len){
		int max1,max2,i;
	max1=max2=-9999;
	for(i=0;i<len;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}else if(a[i]>max2)
			max2=a[i];
	}
	return max1*max2;
}
void reverse(int a[],int len){
	int temp,last=len-1,i,left=0;
    while(left<last){
	   temp=a[left];
	   a[left]=a[last];
	   a[last]=temp;
	   last--;	
	   left++;
	}
}
void roteteLeft(int a[],int len ,int cnt){
	int temp,j,i;
	for(i=1;i<=cnt;i++){
	temp=a[0];
	for(j=1;j<len;j++){
		a[j-1]=a[j];
	}
		a[len-1]=temp;
	
  }
}
void roteteRight(int a[],int len,int cnt){
	int i,j,temp;
	for(i=1;i<=cnt;i++){
		temp=a[len-1];
		for(j=len-1;j>=0;j--)
			a[j+1]=a[j];
		a[0]=temp;	
	}
}





