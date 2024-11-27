#include<stdio.h>
int main(){
	int array[5];
	int size=sizeof(array)/sizeof(int);
	printf("Vui long nhap 5 so bat ki\n");
	for(int i=0;i<size;i++){
		printf("Lan %d la:  ",i+1);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
