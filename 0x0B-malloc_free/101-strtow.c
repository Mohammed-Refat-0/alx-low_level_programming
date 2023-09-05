#include <stdlib.h>

char **strtow(char *str)
{
    char **ptr;
    int i, j, k;
    int words = 0;

    if (!str || *str == '\0')
    {
        return NULL;
    }
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }
    
    if (str[i - 1] != ' ')
    {
        words++;
    }
    
    ptr = (char **) malloc((words + 1) * sizeof(char *));
    if (!ptr)
    {
        return NULL;
    }
    
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
    
    ptr[j] = (char *) malloc((k + 1) * sizeof(char));
    if (!ptr[j])
    {
        return NULL;
    }
    ptr[j][k] = '\0';
    
    ptr[words] = NULL;
    
    return ptr;
}
