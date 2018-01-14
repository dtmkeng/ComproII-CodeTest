#include<stdio.h>
int main(){
	int max,min,i,num[]={5,13,2,8,4,12,7,1},index_max,index_min;
	max=num[0];
	min=num[0];
	for(i=0;i<sizeof(num)/sizeof(int);i++){
		if(num[i]>max){
			max=num[i];
			index_max=i;
		}else if(num[i]<min){
			min=num[i];
			index_min=i;
		}
		
	}	
//	printf("min %d index = %d\n",min,index_min);
//	printf("max %d index = %d\n",max,index_max);
}
