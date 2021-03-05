#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void input(double *a, double *b, double *c){
	printf("1.Input the coefficients of the quadratic equation:\n");
	printf("Enter a, b, c:	");
	scanf("%lf%lf%lf", a, b, c);
	printf("\n");
}

void roots(double a, double b, double c, double *x1, double *x2){
	printf("2.Solve the equation:\n");
	if (a == 0){
		if (b == 0 && c == 0)
			printf("countless roots\n\n");
		else if (b == 0 && c != 0)
			printf("there is no real roots\n\n");
		else
			printf("there is one real root");
	}
	else{
		double delta = pow(b, 2) - 4*a*c;
		if (delta < 0)
			printf("there is no real roots\n\n");
		else if (delta == 0){
			*x1 = *x1 = -b / (2 * a);
			printf("there is one root:	x0 = %lf\n\n", *x1);
		}
		else{
			*x1 = (-b - sqrt(delta)) / (2 * a);
			*x2 = (-b + sqrt(delta)) / (2 * a);
			
			printf("there are 2 real roots:	x1 = %lf, x2 = %lf\n\n", *x2, *x1);
		}
	}
}

int main() {
	double a, b, c, x1, x2;
	while(1){
		input(&a, &b, &c);
	
		roots(a, b, c, &x1, &x2);
		
		printf("Another run (y/n)? ");
		char c[100];
		scanf("%s", &c);
		if (c[0] != 'y')
			break;
	}
	return 0;
}
