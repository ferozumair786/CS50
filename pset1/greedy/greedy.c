#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{

    printf("O hai! How much change is owed? \n");
    float f;
    f = get_float();

    while (f <= 0)
    {
        printf("How much change is owed?\n");

        if (f<=0)
        {
            scanf("%f", &f);
        }
        else if (f>0)
        {
            break;
        }
    }
        int i = round(f*100);
        int q =0;
        int d = 0;
        int n = 0;
        int p = 0;


    {
        while (i >= 25)
        {
                if (i >= 25)
            {
                i = i-25;
                q = q+1;

            }
            else break;
        }
        // Debug Statement: printf("%i\n", i);

        while (i < 25 && i >= 10)
        {
                if (i < 25 && i >= 10)
            {
                i = i-10;
                d = d+1;

            }
            else break;
        }
        // Debug Statement: printf("%i\n", i);

        while (i < 10 && i >= 5)
        {
                if (i < 10 && i >= 5)
            {
                i = i-5;
                n = n+1;

            }
            else break;
        }
        // Debug Statement: printf("%i\n", i);

        while (i < 5 && i >= 1)
        {
                if (i < 5 && i >= 1)
            {
                i = i-1;
                p = p+1;

            }
            else break;
        }
        // Debug Statement: printf("%i\n", i);

    // Debug Statement: printf ("Quarters %i\n", q);
    // Debug Statement: printf ("Dimes %i\n", d);
    // Debug Statement: printf ("Nickels %i\n", n);
    // Debug Statement: printf ("Pennies %i\n", p);
    printf("%i\n", q+d+n+p);
}
}
