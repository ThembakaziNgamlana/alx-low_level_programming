#include <stdio.h>

/**
*main - print the string in the put  function
* 
*Description: using the main fuction
*this program "Programming is like building a multilingual puzzle
*Return: 0
*/
int main(void)
{
        char c;
        int i;
        long li;
        long long lli;
        float f;
        
        printf("Size of char: %ld byte(s)\n", sizeof(c));
        prinf("Size of an int : %ld byte(s)\n", sizeof(i));
        printf("Size of a long int: %ld byte(s)\n" , sizeof(li));
        printf("Size of a long long int: %ld byte(s)\n" , sizeof(lli));
        print ("Size of a float: %ld byte(s)\n" , sizeof(f));
        return (0);
}
