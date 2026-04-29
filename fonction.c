#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fonction_f (float x);
float fonction_g (float x);
float fonction_h (float x);
float fonction_i (float x);
float fonction_j (float x);
void verification( char **s);

float fonction_f (float x)
{
	return log(x+1);
}
float fonction_g (float x)
{
	return 2*x+1;
}
float fonction_h (float x)
{
	return 2*pow(x,3)+4*pow(x,2)-1;
}
float fonction_i (float x)
{
	return log(x)+6;
}
float fonction_j (float x)
{
	return cos(log(x+1))-6;
}

void verification( char **s)
{
	float x;
	float result;
	x= atof(*(s+2));
	switch (s[1][0])
	{
		case 'f':
			result=fonction_f(x);
			printf("%f\n", result);
			break;
		case 'g':
			result=fonction_g(x);	
			printf("%f\n", result);
			break;
		case 'h':
			result=fonction_h(x);
			printf("%f\n", result);
			break;
		case 'i':
			result=fonction_i(x);
			printf("%f\n", result);
			break;
		case 'j':
			result=fonction_j(x);
			printf("%f\n", result);
			break;

		default:
			printf("Tsisy saina, efa oe entre f et j");
			break;
	}
}	
			

int main (int arg, char **s)
{
	arg=3;
	verification(s);
	return (0);
}
