#include <stdio.h>

int main(){
	int l [3][4]= {
		{ 11 , 24 , 35 , 46 },
		{ 10 , 20 , 30 , 40 },
		{ 17 , 28 , 36 , 45 }
	};
	for( int a = 0 ; a < 3 ; a++){
		for (int b = 0 ; b < 4 ; b++)
			printf("%d ", l[a][b]);
	printf("\n");
	}
	
	printf("\n--------Pointer--------");
	printf("\n\n");
	
	int (*a)[4]= l;
	a[1][4] = 100;
	
	for( int a = 0 ; a < 3 ; a++){
		for (int b = 0 ; b < 4 ; b++)
			printf("%d ", l[a][b]);
	printf("\n");
	}
	return 0;
}
