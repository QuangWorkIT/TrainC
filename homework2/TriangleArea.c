#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double a,b,c;
	printf("Enter side lengths: ");
	scanf("%lf%lf%lf", &a,&b,&c);
	
	
	double s = (a + b + c) / 2;
	double area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is: %.2lf", area);
	return 0;
}
