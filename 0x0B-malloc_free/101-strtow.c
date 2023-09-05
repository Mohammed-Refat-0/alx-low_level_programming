#include <stdlib.h>

char **strtow(char *str)
{
    char **ptr;
    int i, j, k;
    int words = 0;
    int c = 0;

    if (!str || *str == '\0')
    {
        return NULL;
    }
    
    // Count the number of words in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }
    
    // Increment words if the last character is not a space
    if (str[i - 1] != ' ')
    {
        words++;
    }
    
    // Allocate memory for the ptr array
    ptr = (char **) malloc((words + 1) * sizeof(char *));
    if (!ptr)
    {
        return NULL;
    }
    
    // Allocate memory for each word and copy characters
    for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            ptr[j] = (char *) malloc((k + 1) * sizeof(char));
            if (!ptr[j])
            {
                return NULL;
            }
            ptr[j][k] = '\0';
            j++;
            k = 0;
        }
        else
        {
            ptr[j][k] = str[i];
            k++;
        }
    }
    
    // Handle the last word
    ptr[j] = (char *) malloc((k + 1) * sizeof(char));
    if (!ptr[j])
    {
        return NULL;
    }
    ptr[j][k] = '\0';
    
    // Set the last element of the array to NULL
    ptr[words] = NULL;
    
    return ptr;
}
