#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

int doubleSum(int n) {

// Pre-condition
int m; // Counter m
int k; // Counter k
int inner_sum = 0; // Initialize inner_sum 
int total_sum = 0; // 

while(true){
// Pre-condition 1 <= n    
printf("Indtast en integer n: ");
scanf("%d", &n);
if(!(n >= 1)){

printf("ERROR! n must greater than 1 <= n. Try again\n");
continue; // Try again

}
else
break;
}


for(m = 1; m <= n; m++) {

    for(k = 1; k <= m; k++) {
        inner_sum += (2 * k ) - 1;
}
    total_sum += inner_sum; // Add the inner_sum to the total sum for each iteration
    inner_sum = 0;
}

    assert(total_sum == (n * (n + 1) * (2 * n+1)) / 6);
    return total_sum;
}

int main(void) {

int t_sum;
int i;

i = (3 * (3 + 1) * (2 * 3 + 1) / 6);

//printf("Den akumullerede dobbelte summation op til n = %d: total_sum = %d\n\n", t_sum,doubleSum(t_sum));
printf("%d = %d" ,doubleSum(t_sum),i);
return 0;
}