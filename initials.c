#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //prompt the user to give his name
    string name = get_string("name: ");
    char initials[4];
    int counter = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (isupper(name[i]))
        {
            initials[counter] = name[i];
            counter++;
        }

    }
    initials[3] = '\0';
    printf("%s", initials);

}
