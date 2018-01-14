#include<stdio.h>
int main(){
		int i,j,num[]={5,13,2,8,4,12,7,1},deff,index1,index2;
		deff=num[0]-num[1];
		for(i=0;i<sizeof(num)/sizeof(int);i++){
			for(j=sizeof(num)/sizeof(int)-1;j>=0;j--){
				if(num[i]-num[j]>deff){
					deff=num[i]-num[j];
					index1=i;
					index2=j;
				}
			}
		}
}
