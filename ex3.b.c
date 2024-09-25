 #include<stdio.h>
 #include<assert.h>
 int main() {
 int n, m, r;
 // Pre-condition: n should be non-negative (n >= 0) and
 //
 printf("Enter n (n >= 0): ");
 scanf("%d", &n);
 printf("Enter m (m > 0): ");
 scanf("%d", &m);
 
 if (n < 0 || m <= 0) {
 printf("Error: Please enter valid values for n and m.\n");
 return 1; // Return an error code
 }

 // Find the remainder of n divided by m without using the % operator
 r = n; // Initialize r with n 
 int i = 0; // Counter i 
 while (r >= m) {  
 assert(r == n - i * m);
 r-= m; // Subtract m from r until it becomes less than m
 // Invariant: r will always be r>=0 and r is decreasing to a value less than m. 
 // Invariant added: r == n - i * m after each iteration
 i++;
 }
 assert(r == n - i * m);
 // Post-condition: r should be the remainder of n divided by m
 printf("The remainder of %d divided by %d is %d.\n", n, m, r);
 return 0;
 }



