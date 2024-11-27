#include<stdio.h>
int main(){
	int array[5]={2,5,4,7,8};
	for(int i=0;i<5;i++){
		if(array[i]%2==0){
			printf("So chan:%d \n",array[i]);
		}else{
			printf("So le:%d \n",array[i]);
		}
	}	
	return 0;
}
