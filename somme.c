#include <stdio.h>

void saisir(int *x, int *y);
int somme( int x, int y);
void afficher(int x);

void  saisir(int *x, int *y)
{
	printf("entrer la valeur de a:");
	scanf("%d", x);
	printf("entrer la valeur de b:");
	scanf("%d", y);
}

int somme(int x, int y)
{
	return x+y;
}

void afficher (int x)
{
	printf("%d\n", x);
}

int main ()
{
	int a;
	int b;
	int result;
	saisir(&a, &b);
	result= somme (a, b);
	afficher(result);
	return(0);
}


