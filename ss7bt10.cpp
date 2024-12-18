#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
		printf("moi nhap vao so phan tu cua mang: ");
		scanf("%d",&n);
	}while(n<=0);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		do{
			printf("array[%d] = ", i);
			scanf("%d",&array[i]);
		}while(array[i]<=0);
	}
	printf("MANG CHI CHUA SO NGUYEN TO\n");
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		int index=1;
		if(array[i]==1){
			index=0;
		}
		for(int j=2;j<=sqrt(array[i]);j++){
		 	if(array[i]%j==0){
		 		index=0;
		 		break;
			}
		}
		if(index==1){
			printf("array[%d] = %d\n",i,array[i]);
		
		}
		
	}
	
}
