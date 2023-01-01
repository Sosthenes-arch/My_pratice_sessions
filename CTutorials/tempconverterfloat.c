#include <stdio.h>

int main()
{
        float fahr, celcius;

        int upper = 300;
        int lower = 0;
        int step = 20;

        fahr = lower;
        printf("Fahrienheit\tCelcius\n");
        while(fahr <= upper)
        {
                celcius = (5.0/9.0) * (fahr - 32.0);
                printf("%3.0f\t\t%6.1f\n", fahr, celcius);
                fahr = fahr + step;
        }
}
