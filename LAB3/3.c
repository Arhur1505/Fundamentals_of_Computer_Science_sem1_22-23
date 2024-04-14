#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int tab1[30];
    int tab2[30];
    int tab3[31];
    int c=0;
        
    printf(" ");
    
    for(int i=0; i<30; i++){
        tab1[i] = 9*(double)(rand()) / (double)RAND_MAX - 0;
        printf("%d", tab1[i]);
    }
    
    printf("\n ");
        
    for(int i=0; i<30; i++){
        tab2[i] = 9*(double)(rand()) / (double)RAND_MAX -0;
        printf("%d", tab2[i]);
    }
    
    printf("\n");
    
    for(int i=30; i>0; i--){
        tab3[i]=(c+tab1[i-1]+tab2[i-1]) % 10;
        if(tab1[i-1]+tab2[i-1]+c>9){
        c=1;
        }
    }
    
    if(tab1[0]+tab2[0]+c>9){
    tab3[0]=1;
    }
    
    for(int i=0; i<31; i++){
        printf("%d", tab3[i]);
    }
    
    printf("\n");
    
    return 0;
}
