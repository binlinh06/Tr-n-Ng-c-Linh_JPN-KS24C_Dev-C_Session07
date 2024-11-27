#include<stdio.h>
int main(){
	int num[5]={1,2,3,4,5};
	int size=sizeof(num)/sizeof(int);
	for(int i=0;i<size;i++){
      printf("Phan tu %d \n",num[i]);	
	}
	printf("Do dai la:%d",size);
	return 0;
}
