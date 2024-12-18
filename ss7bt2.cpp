#include<stdio.h>
int main()
{
	int arrayint[5];
	for(int i=0;i<sizeof(arrayint)/sizeof(int);i++){
		printf("arrayint[%d] = ",i);
		scanf("%d",&arrayint[i]);
	}
	for(int i=0;i<sizeof(arrayint)/sizeof(int);i++){
		printf("phan tu thu %d cua %d\n",i,arrayint[i]);
	}
	return 0;
}
