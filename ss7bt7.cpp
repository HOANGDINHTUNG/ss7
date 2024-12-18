#include<stdio.h>
int main(){
	int n;
	do{
		printf("moi nhap vao so phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<=0);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	 	if(array[i]%2==0){
	 		i--;
			continue;
		 }
			
	}
	printf("MANG HOP LE LA :\n");
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
	return 0;
}

