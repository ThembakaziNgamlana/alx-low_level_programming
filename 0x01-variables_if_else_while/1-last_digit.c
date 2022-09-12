 #include <stdlib.h>
 #include <time.h>
 #include <stdio.h>
 /**
  * main - print if the number is postive, zero , or neagative
  *
  * Description: using the main function
  * this program prints "Programming is positive, zero, or negative
  * Return: 0
  */
 int main(void)
 {
                    int n;
                    int L;
                    char str[] = "last digit of";
                   
		    srand(time(0));
                    n= rand() - RAND_MAX / 2;
		    L = n % 10;
 
                    if(L > 5)
 
                           printf(" %s %d is %d and is greater than 5\n", str,  n, L);
 
                    else if (L == 0)
   
                          printf("%s %d is %d and is 0\n", str,  n, L);
 
                    else if (L < 6)
  
                          printf(" %s %d is %d and is less than 6 and not 0\n", str, n, L);
 
                    return(0);
 }
