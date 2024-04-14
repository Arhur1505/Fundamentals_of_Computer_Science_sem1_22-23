#include <stdio.h>

int szereg(int n, int a, int b, int c);

int main(){

int n, a, b, c;
scanf("%d %d %d %d", &n, &a, &b, &c);

printf("Wynik: %d \n", szereg(n, a, b, c));

return 0;
}

int szereg(int n, int a, int b, int c){

int wyn, y;
if(n=1) wyn=a;
if(n=2) wyn=b;
if(n=3) wyn=c;
else { 
y=a+b+c;
while(n>0){
wyn = szereg(n-1, b, c, y) + szereg(n-2, a, b, c);
}
}
return wyn;
}
