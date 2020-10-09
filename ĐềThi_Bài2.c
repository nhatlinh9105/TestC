#include <stdio.h>

int main ()
{
    int a[10];
    for(int i = 0; i<10; i++)
    {
        printf("Numer %d: ", i+1);
        scanf("%d", &a[i]);
    }
   
    printf("Result: ");
    for(int i = 9; i>=0; i--)
    {
        printf("%d, ", a[i]);
    }
}
