#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    int i = 0;
    string name = get_string();
    string argv[i] = name;
    int l = sizeof(argv);
    printf("%s has %i arguments\n", name, l);
}