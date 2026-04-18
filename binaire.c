#include <stdio.h>
#include <math.h>

void saisir( char *s, int *x);
void transform(int x, int n, int *t, int *taile);
void printab( int *t, int n);
void mirror( int *t, int n);

void saisir(char *s, int *x)
{
	printf("Entrer la valeur de %s:", s);
	scanf("%d", x);
}
	
void transform(int x, int n, int *t, int *taille)
{
	int i=0;
	while(x>0)
	{ 
		t[i]= x % n;
		i++;
		x= floor(x/n);
	}
	*taille=i;
	mirror(t, i);
}




void printab( int *t, int n)
{
	int i=0;
	for(i=0; i<n; i++)
	{
		printf("%d", *(t+i));
	}
		printf("\n");

}

void mirror( int *t, int n)
{
	int i=0;
	int temp;
	int j=n-1;
	for(i=0; i<ceil(n/2); i++)
	{
		temp=t[i];
		t[i]=t[j];
		t[j]=temp;
		j--;
	}
}


int main ()
{
	int nbr;
	int base;
	int taille;
	int t[100];
	saisir("nombre a transformer", &nbr);
	saisir("base", &base);
	transform(nbr, base, t, &taille);
	printab(t, taille);
	return(0);	
}



