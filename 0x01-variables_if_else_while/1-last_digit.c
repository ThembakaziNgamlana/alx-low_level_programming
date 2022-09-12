 #include <stdlib.h>
 #include <time.h>
 #include <stdio.h>
 /**
  * main - print if the number is postive, zero , or neagative
  *
  * Description: using the main function
  * prints "Programming is positive, zero, or negative
  * Return: 0
  */
 int main(void)
 {
 int n;
 int m;
 srand(time(0));
 n= rand() - RAND_MAX / 2;
 m = n % 10;
 if(m > 5)
 {
 printf("Last digit %d is %d and is greater than 5\n", n, m);
 }
 else if (m <6 && m != 0)
 {
 printf("Last digit of %d is %d and is less than 6 and not  is 0\n", n, , m);
 }
 else 
 {
 printf("Last digit of %d is %d and is  0\n", str, n, L);
 }
 return(0);
 }
