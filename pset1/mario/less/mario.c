#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int height = get_int();

    while (height < 0 || height > 23)
    {
        printf("Height: ");

        if (height < 0 || height > 23)
        {
            scanf ("%d", &height);
        }

        else if (height > 0 && height < 23)

        {
            break;
        }
    }


        char hash = '#';

        for (int i = 0; i < height; i++ )
        {
            printf("%*c", height-i, hash);
            printf("%.*s\n", i+1, "########################");

        }



}