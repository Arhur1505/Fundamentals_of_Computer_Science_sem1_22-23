#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    double tab[10];
    double a, b, c;
    int d;
                
    for(int i=0; i<10; i++){
        tab[i] = 2*100* (double)(rand()) / (double)RAND_MAX - 100;
        printf("%.2f\n", tab[i]);
        }
        
    for(int i=0; i<10; i++){
        a=b;
        b=tab[i];
        tab[i]=fabs(tab[i]-a);
    }
    
    printf("\n");
    
    for(int i=0; i<10; i++){
        printf("%.2f\n", tab[i]);
    }
    
    printf("\n");
    c=tab[0];
        
    for(int i=0; i<10; i++){
        if(tab[i]<c){
        c=tab[i];
        d=i;
        }
    }
    
    printf("Min: %f Index: %d\n", c, d);
           
    return 0;
}
