#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int temp = n; // we make an temp variable and store the value of n init
    int a[n];
    for (int i = 0; n > i; i++) // we use this loop for input an array
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; n > i; i++) // we use this loop for get the sum of an array
    {

        sum = sum + a[i]; // make an variable (sum) and assign as integer
                          // and after this loop is running upto (n>i)
                          // and store the sum in variable.
    }
    int avr = sum / n; // for average , sum of array is divide with the
                       //  size of array and we got the average.
    printf("%d\n", avr); // at last we print the average of an array.
}