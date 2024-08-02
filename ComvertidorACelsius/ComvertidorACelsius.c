#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, uppert, step;
    
    lower = 0;
    uppert = 300;
    step = 20;
    
    fahr = lower;
    
    while(fahr <= uppert)
    {
        celsius = (5.0/9.0) * (fahr -32.0);
        printf("%3.0f \t %3.2f \n", fahr, celsius);
        
        fahr = fahr + step;
    }
}
