#include<stdio.h>

int main(){
	int arrayint[5]={52,543,72,6,5};
	for(int i=0;i<sizeof(arrayint)/sizeof(int);i++)
	{
		if(arrayint[i]%2==0)
		{
			printf("arrayint[%d] = %d\n",i,arrayint[i]);

		}else
		{
			printf("mang khong chua so chan!!!\n");
		}
	}
	return 0;
}
