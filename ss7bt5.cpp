#include<stdio.h>
int  main(){
	int array[5]={121,32,64,1,134},temp;
	for (int i = 0; i < sizeof(array)/sizeof(int)-1 ; i++) {
    	if (array[i] > array[i + 1]) {
      		temp=array[i];
      		array[i]=array[i + 1];
      		array[i + 1]=temp;
		}
	}
	printf("phan tu lon nhat trong mang la %d\n",array[4]);

	for (int i = 0; i < sizeof(array)/sizeof(int)-1 ; i++) {
    	if (array[i] < array[i + 1]) {
      		temp=array[i];
      		array[i]=array[i + 1];
      		array[i + 1]=temp;
		}
	}
	printf("phan tu nho nhat trong mang la %d",array[4]);
}



