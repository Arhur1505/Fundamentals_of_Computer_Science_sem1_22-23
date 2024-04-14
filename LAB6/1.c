#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double *f_add(double *tab1, double *tab2, double *tab3, double *a);

int main(){

srand(time(NULL));

double tab1[10], tab2[10], tab3[10];

for(int i=0; i<10; i++){
tab1[i]= (double)(rand()/(double)(RAND_MAX));
}

for(int i=0; i<10; i++){
tab2[i]= (double)(rand()/(double)(RAND_MAX));
}

double a;
*f_add(tab1, tab2, tab3, &a);

for(int i=0; i<10; i++){
printf("tab3[%d]=%f, adres: %p \n", i, tab3[i], &tab3[i]);
}

for(int i=0; i<10; i++){
if(&a==&tab3[i]) printf("Indeks: %d", i);
}

printf("Wartość: %f, adres: %p \n", a, &a);

return 0;
}

double *f_add(double *tab1, double *tab2, double *tab3, double *a){
*a=-1;
for(int i=0; i<10; i++){
tab3[i]=tab1[i]+tab2[i];
if(tab3[i]>*a){
*a=tab3[i];
}
}

return a;
}

