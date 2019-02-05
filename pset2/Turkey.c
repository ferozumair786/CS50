#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    printf("What was the Closing Net for Iconixx?\n");
    float sale = get_float();

    while (sale <0)
    {
        printf("What was the Closing Net for Iconixx?\n");

        if (sale<0)
        {
            scanf("%f", &sale);
        }
        else break;
    }

    float cut = (0.7500f/100.0000f);
    float share;
    float slice;

    if (sale <= 18000000)
    {
        slice = (5.000f/100.000f);
        share = cut*slice*sale;
        //printf("Your Slice of The Turkey is $%f\n", share);
    }
    else if (sale > 18000000)
    {
        slice = (7.0000f/100.000f);
        share = cut*slice*sale;
        //printf("Your Slice of The Turkey is $%f\n", share);
    }
    else share = 0;


    printf("Your Slice of The Turkey is $%f\n", share);

}