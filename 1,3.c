#include <stdio.h>

void swap(int *pa, int *pb){
	int pass;
	pass = *pa;
	*pa = *pb;
	*pb = pass;
}

int main(){
	int a, b;
	printf("a:");
	scanf("%d",&a);
	printf("\nb:");
	scanf("%d",&b);

	swap(&a,&b);

	printf("\nafter changing a: %d b: %d\n",a,b);
}

