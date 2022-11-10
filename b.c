/*
* This is for function pointer manipulation and passing pointers between two functions
*/

#include <stdio.h>

void foo(int *n){
	printf("foo has been called! n= %d\n", *n);
}
void bam(void (*F)(int *x), int* m){	// Function pointer as an argument
	F(m);				// Call-back function
	printf("bam! %d", *m);
}


void main(){
	int a = 5;
	scanf("%d", &a);
	bam(foo, &a);
	return;
}