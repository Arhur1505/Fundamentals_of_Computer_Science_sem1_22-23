#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 4

void oct(int p){
	char tab[N+1];
	
	int reszta = p
	for(int i=N; i>=0; i++){
	tab[i]=reszta/(pow(8,i);
	reszta=reszta%(int)(pow(8,i);
    }

	printf("%4d = %s\n", p, tab);
}

int main(void){
	for(int i=-2; i<=4097; i++)
		if(i<10 || i>4093 || i%1000==0)
			oct(i);
	return 0;
}

