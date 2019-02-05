#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//Pseudocode
//Obtain key as a string from the main
//ensure that the number of arguments are only 1
//convert key from string to integer
//then prompt user for string
//scan through string and convert each character to it's ASCII and get a position for it between 0-26
//ensure any upper case or special characters are preserved
//use the give cipher formula to convert to new position via key
//convert new positions back to ASCII and then back to letters

//int main without void. takes in an array of strings
int main (int argc, string argv[])
{
    //only proceed if the number of arguments (which includes ./caesar) is equal to 2
    if (argc == 2)
    {
        //convert key (string) to key (int)
        int k = atoi(argv[1]);
        //printf("%i\n", k);

        //get the input of strings
        printf("plaintext:");
        string s = get_string();
        printf("\n");
        printf("ciphertext:");

        //store the length of string and create an array
        int l = strlen(s);
        int t[l];

        //for loop runs until we hit the nul character
        for (int i = 0; i < l; i++)
        {
            // If it is not a letter then leave it as is
            if (isalpha(s[i]) == false)
            {
                t[i] = s[i];
                printf("%c", t[i]);
            }
            // If it is a lowercase letter then subtract 97 so you get the alphabetical index
            // Add key to alphabetical index and then divide by 26
            // Add 97 to the remainder to get the new number
            else if (isupper(s[i]) == false)
            {
                t[i] = (((s[i] - 97) + k) % 26) + 97;
                printf("%c", t[i]);
            }
            else
            //If it is uppercase then subtract 65 but do the same math as above
            {
                t[i] = (((s[i] - 65) + k) % 26) + 65;
                printf("%c", t[i]);
            }

        }
        printf("\n");
        return 0;
    }
    else if (argc < 2)
    {
        return 1;
        printf("You forgot to enter the key\n");
    }
    else
    {
        return 1;
        printf("Too manu arguments!\n");
    }
}