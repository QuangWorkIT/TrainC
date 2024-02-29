#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double w, h;
	printf("Enter weight and height: ");
	scanf("%lf%lf", &w, &h);
	
	if(w>0 && w<200 && h>0 && h<3) 
		printf("BMI is: %.2lf", w/h*h);
	else printf("Wrong input!");
	
	return 0;
}
