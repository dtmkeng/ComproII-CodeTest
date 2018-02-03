#include<stdio.h>
void findPreak(int[],int);
void printArray(int [],int);
void bubleSort(int [],int);
void SeletionSort(int[],int);
void swap(int *,int *);
void InserttionSort(int [],int);
int lSearch(int [],int,int);
int bSearch(int [],int ,int);
void merge(int [],int,int[],int,int[]);
void unoin(int [],int,int [] ,int ,int [] );
int main(){
	int n[]={3,9,1,5,12,25,10};
	int a[]={3,9,15,20,30};
	int b[]={1,4,8,25,100};
	int x[]={1,3,5,6};
	int y[]={3,6,9};
	int lenX=sizeof(x)/sizeof(x[0]);
	int lenY=sizeof(y)/sizeof(y[0]);
	int z[lenX+lenY];
	unoin(x,lenX,y,lenY,z);
//	int lenA =sizeof(a)/sizeof(a[0]);
//	int lenB =sizeof(b)/sizeof(b[0]);
//	int c[lenA+lenB];
//	printArray(a,lenA);
//	printArray(b,lenB);
//	merge(a,lenA,b,lenB,c);
//	printArray(c,lenA+lenB);
//	int len = sizeof(n)/sizeof(n[0]);
//	findPreak(n,len);
//	sprintArray(n,len);
//	bubleSort(n,len);
//	printArray(n,len);
//  SeletionSort(n,len);
//  printArray(n,len);
//  InserttionSort(n,len);
//  printArray(n,len);
//   int key;
//   printf("Enter a number search: ");
//   scanf("%d",&key);
//   int ind =lSearch(n,len,key);
//	int ind = bSearch(n,len,key);
//   if(ind==-1)
//   		printf("cannot found %d\n",key);
//   else 
//   		printf("found %d index = %d\n",key,ind);`
	return 0;
}
void findPreak(int a[],int len){
	int i,preak1,preak2;
	preak1=preak2=-99999;
	for(i=1;i<len-1;i++){
		if(a[i-1]<a[i]&&a[i]>a[i+1])
		   printf("%d ",a[i]);
	}
	printf("\n");
}
void printArray(int a[],int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
    printf("\n");
}
void bubleSort(int a[],int len){
	int i,pass,temp,swapped; 
	for(pass=1;pass<len;pass++){
		swapped=0;
		for(i=0;i<len-pass;i++){
		if(a[i]>a[i+1]){
			swap(&a[i],&a[i+1]);
			swapped=1;
		}
	 }
	 if(!swapped)
	 	return;
//	 printArray(a,len);
  }
}
void SeletionSort(int a[],int len){
	int pass,i,ind,temp;
	for(pass=0;pass<len;pass++){
		ind=pass;
		for(i=pass+1;i<len;i++){
		if(a[i]<a[ind]){
			swap(&a[i],&a[ind]);
		 }
		}
	}
}
void InserttionSort(int a[],int len){
	int i,j,key;
	for(i=1;i<len;i++){
		key =a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int lSearch(int a[],int len,int key){
	int i;
	for(i=0;i<len;i++){
		if(a[i]==key)
			return i;
	}
	return -1;
}
int bSearch(int a[],int len,int key){
	int left,right,mid;
	left=0;
	right=len-1;
	mid=(left+right)/2;
	while(left<=right){
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			left=mid+1;
		else 
			right=mid-1;
		mid=(left+right)/2;
	}
	return -1;
}
void merge(int a[],int lenA,int b[],int lenB,int c[]){
	int i,j,k;
	i=j=k=0;
	while(i<lenA&&j<lenB){
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	}
	while(i<lenA)
		c[k++]=a[i++];
	while(j<lenB)
		c[k++]=b[j++];
}
void unoin(int x[],int lenX,int y[] ,int lenY,int z[] ){
	int i,j,k;
	i=j=k=0;
	while(i<lenX&&j<lenY)
	{
		if(x[i]==y[j]){
		printf("%d ",x[i]);
		j++;
		i++;
	   }else if(x[i]<y[j])
	     printf("%d ",x[i++]);
	    else 
	     printf("%d ",y[j++]);
	}
	while(i<lenX)
		printf("%d ",x[i++]);
    while(j<lenY)
    	printf("%d ",y[j++]);
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

