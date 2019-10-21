#include <stdio.h>

double average(double in1, double in2){
	double t;
	t = (in1 + in2)/2;
	return t;
}

int main(){
	double x, y;
	printf("insult two numbers");
	scanf("%lf %lf", x, y);
	average(x,y);
	printf("average is %lf",average);
}

