#include <stdio.h>
int main(){
 int i,j,t1=0,t2=0,t3=0,n[5][3],x=10;
 for(i=0; i<5; i++){
 for(j=0; j<3; j++){
 if(x<5){
 n[i][j]=i+j;
 t1++;
 }else if(x<7){
 t2++;
 n[i][j] = i-j;
 }else{
 t3++;
 n[i][j] = x--;
 }
 }
 }
 for(i=0; i<5; i++){
 for(j=0; j<3; j++){
 printf("n[%d][%d]= %d \n",i,j,n[i][j]);
}
}
}

