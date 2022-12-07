#include <stdio.h>


	int add(int x,int y){
		return x + y;
	}
	
	int multiply (int x,int y){
		return x * y;
	}
	
	int operaion(int x, int y, int (*a) (int,int)){
		return (*a)(x,y);
	}
	
int main(){
	
	printf("operation = %d\n", operaion(10,10, add));
	printf("multiply = %d\n", operaion(10,10, multiply));
	
	return 0;
}
