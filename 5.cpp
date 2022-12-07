#include <stdio.h>

int *GetArr( int *row, int *col ){	
	int *a;
	printf("Halo \n");
	printf("How many row : ");
	scanf("%d", row);
	printf("How many cols : ");
	scanf("%d",  col);
	
	a = new int[*row * *col];
	for( int i = 0 ; i < *row ; i++)
		for (int j = 0 ; j < *col ; j++){
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &(&a)[i* *col + j]);
		}
	return a;
}

int *GetArr(int *row,int *col);

int main(){
	int r,c,*arr;
	arr = GetArr( &r , &c);
	delete [] arr;
	return 0;
}
