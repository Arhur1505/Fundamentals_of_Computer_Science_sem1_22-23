#include <stdio.h>

void count_zeros(int *tab, int n);
void count_ones(int *tab, int n,int *m);
int count_twos(int *tab, int n);

int main(){

int tab1[] =  {47, 46, [1500]=6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
        -64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 2, 
        46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
        80, 68, -60, 66, -11, 5, -33, 56, 2, -50, -35, 72, 2, 87, 51, -26, 88, -66, 
        -80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
        -28, 39, 1, 65, 2, 65, 14, 71};
        
int tab2[] = {47, 46, 6, -35, -10, 73, -85, 47, 12, -21, -20, 24, -41, 53, 15, 86, 43, -39, 
        -64, -58, -27, -89, 64, -68, 58, -69, -38, 86, 43, -34, -32, -88, -93, 32, -21, 2, 
        46, -97, -31, -98, -17, 69, -40, -64, -39, -77, 55, 21, -42, 96, 70, -54, 38, -98, 
        80, 68, -60, 66, -11, 5, -33, 56, 2, -50, -35, 72, 2, 87, 51, -26, 88, -66, 
        -80, -75, -54, -20, -53, -99, -98, -18, 74, 48, 27, 12, 27, 7, -20, 66, -27, 45, 
        -28, 39, 1, 65, 2, 65, 14, 71};
        
int n;
n=sizeof(tab2)/sizeof(tab2[0]);
printf("Ilość elementów w tab2: %d \n", n);
count_zeros(tab2, n);

n=sizeof(tab1)/sizeof(tab1[0]);
printf("Ilość elementów w tab1: %d \n", n);
count_zeros(tab1, n);

int m=0;

count_ones(tab2, n, &m);
printf("Ilość 1 w tab: %d \n", m);

count_twos(tab2, n);
printf("Ilość 2 w tab: %d \n", m);

return 0;
}

void count_zeros(int *tab, int n){
int a=0;

for(int i=0; i<n; i++){
if(tab[i]==0) a=a+1;
}
printf("Ilość 0 w tab: %d \n", a);
}

void count_ones(int *tab, int n,int *m){

for(int i=0; i<n; i++){
if(tab[i]==1) *m=*m+1;
}
}

int count_twos(int *tab, int n){
int m=0;
for(int i=0; i<n; i++){
if(tab[i]==2) m=m+1;
}
return m;
}
