#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

if(argc!=2){
    printf("Brak argumentow \n");
}

float a, b;

char *out = strchr(argv[1], '(');
out++;
b=atof(out);

if(strstr(argv[1], "cos")){
    a=cos(b);
    printf("%s=%f\n", argv[1], a);
} 
if(strstr(argv[1], "sin")){
    a=sin(b);
    printf("%s=%f\n", argv[1], a);
}
if(strstr(argv[1], "tan")){
    a=tan(b);
    printf("%s=%f\n", argv[1], a);
}
if(strstr(argv[1], "log")){
    a=log(b);
    printf("%s=%f\n", argv[1], a);
}
if(strstr(argv[1], "exp")){
    a=exp(b);
    printf("%s=%f\n", argv[1], a);
}

return 0;
}
