#include<stdio.h>;
int main(){
	int column, row;
	printf("moi nhap vao hang : ");
	scanf("%d",&row);
	printf("moi nhap vao cot : ");
	scanf("%d",&column);
	int array[row][column];
	printf("moi nhap voa tung phan tu cua mang : \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("MA TRAN\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;	
}
