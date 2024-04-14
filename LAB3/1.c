#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    double x, y;
    double n;
    double a=0;
    double b;
    
    printf("Podaj liczbe losowan: ");
    scanf("%lf", &n);
    
    for(int i=0; i<n; i++){
        x = 2 * (double)(rand()) / (double)RAND_MAX - 1;
        y = 2 * (double)(rand()) / (double)RAND_MAX - 1;
        if(x*x+y*y<=1){
            a=a+1;
        }
    }
    
    b = (4*a)/n;
    
    printf("%f", b);
    
    return 0;
}
