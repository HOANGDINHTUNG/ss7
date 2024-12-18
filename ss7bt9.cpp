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
   
    printf("Cac phan tu tren duong bien:\n");
    
    for (int j = 0; j < column; j++) {
        printf("%d ", array[0][j]);
    }
    
    for (int i = 1; i < row ; i++) {
        printf("%d ", array[i][column - 1]);
    }
    
    for (int j = column - 2; j >= 0; j--) {
        printf("%d ", array[row - 1][j]);
    }
    
    for (int i = row - 2; i > 0; i--) {
        printf("%d ", array[i][0]);
    }
    

    return 0;
}

