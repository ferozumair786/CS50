#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    // get input from user (string) and store it in name; store length of name in l
    string name = get_string();
    //int l = strlen(name);
    //int i = 0;
    int j = 0;
    //int k = 0;

    // make sure that input is a string and not null
    if (name != NULL)
    {
        // make sure first character is not a nul
        if (name[j] != '\0')
        {
            // scan every character in the name; '\0' is the last character in the name
            for (j = 0; name[j] != '\0'; j++)
            {


                {

                    if (j == 0)
                    {
                        //print the first letter of the name
                        printf("%c", toupper(name[j]));
                    }
                    else

                    //if the letter being scanned is not the first letter AND it encounters a space
                    if (j > 0 && name[j] == ' ')
                    {
                        //print the letter after the space; aka the first letter of the next name
                        printf("%c", toupper(name[j+1]));
                    }

                }

            }
        }
    }
    //new line
    printf("\n");
}

