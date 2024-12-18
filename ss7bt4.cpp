#include<stdio.h>
int main()
{
	int n;
	printf("moi nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<sizeof(array)/sizeof(int);i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	return 0;
}
