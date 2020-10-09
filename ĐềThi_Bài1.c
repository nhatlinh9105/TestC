#include <stdio.h>

void inputnumber(float a, float b)
{
        printf("Numer 1: ");
        scanf("%f", &a);
    
        printf("Number 2: ");
        scanf("%f", &b);
    
}

float tong(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
}

float hieu(float a, float b)
{
    float Substraction;
    Substraction = a - b;
    return Substraction;
}

float nhan(float a, float b)
{
    float Multiplication;
    Multiplication = a * b;
    return Multiplication;
}

float chia(float a, float b)
{
    float Division;
    Division = a / b;
    return Division;
}

main ()
{
    float a, b;
    int c;
    printf("Calculation: \n============ \n1. Input Number \n2. Calculate Sum \n3. Calculate Substraction \n4. Calculate Multiplication \n5. Calculate Division \n6. Exit");
    
    printf("\nInput the numer in menu: ");
    scanf("%d", &c);
    
    
    if(c == 1)
    {
        inputnumber(a, b);
    }
    if(c == 2)
    {
        printf("Numer 1: ");
        scanf("%f", &a);
    
        printf("Number 2: ");
        scanf("%f", &b);

        printf("Sum is: %.2f ", tong(a, b));
    }
    if(c == 3)
    {
        printf("Numer 1: ");
        scanf("%f", &a);
    
        printf("Number 2: ");
        scanf("%f", &b);
        
        printf("Substraction is: %.2f", hieu(a, b));
    }
    if(c == 4)
    {
        printf("Numer 1: ");
        scanf("%f", &a);
    
        printf("Number 2: ");
        scanf("%f", &b);
        
        printf("Multiplication is: %2f", nhan(a,b));
    }
    if(c == 5)
    {
        printf("Numer 1: ");
        scanf("%f", &a);
    
        printf("Number 2: ");
        scanf("%f", &b);
        
        printf("Divison is: %.2f", chia(a,b));
    }
    if(c == 6)
    {
        printf("See you again!!!");
    }
}


