#include<stdio.h>
int main(){
	int arrayInt[6]={52,35,21,54,67,45};
	for(int i=0;i<sizeof(arrayInt)/sizeof(int);i++){
		printf("phan tu thu %d la %d\n",i,arrayInt[i]);
	
	}
	return 0;
}
