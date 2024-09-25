 #include<stdio.h>
 #include<stdbool.h>


 
 int q = 0; // q will hold the quotient between n and m
 int r = m; // r will hold the value of n so that n can be substracted from m until r<n
 int b = n; // b is a multiplier of n. b er en fordobling af n, der hjælper med at finde den største
 // passende divisor for at få at opnå m/n
 while (r >= b)
 b *= 2;
 while (b != n)
 {
 q *= 2;
 b /= 2;
 if (r >= b
{
 q += 1;
 r-= b;
 }
 }
 
}

