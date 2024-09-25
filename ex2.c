

#include<stdio.h>
#include<stdbool.h>

int numOfFib(int a, int b) {

int fib1 = 1;
int fib2 = 2;
int fib = 0;
int i;
int count=0;

for(i=0 ;fib <= b; i++) {

fib = fib1 + fib2;
fib1 = fib2;
fib2 = fib;

if (a<=fib && fib<=b)
count++;
}

return count;

}

int main(void) {

int a;
int b;



 while(true) {

printf("Enter the beginning of the interval [a,b] : ");
scanf("%d", &a);

printf("\n");

printf("Enter the end of the interval [a,b] : ");
scanf("%d", &b);


if(!(a >= 0) || !(b>=a)) {
printf("ERROR! Inputs must be in the range of: 0 <= a <= b\n");
continue;

}
else
break;
}

printf("The number of Fibonnaci numbers from the interval [%d,%d] is: %d\n ", a,b,numOfFib(a,b));


return 0;

}







/* while(true) {

if(!(a >= 0) || !(b>=a)) {

printf("ERROR! Inputs must be in the range of: 0 <= a <= b");
}
else
break;
}

printf("test");

 */


