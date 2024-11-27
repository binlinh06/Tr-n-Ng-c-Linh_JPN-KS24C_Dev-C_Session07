#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Phai la so duong");
		return 1;
	}
	int array[n];
	printf("Nhap cac phan tu cua mang\n");
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
