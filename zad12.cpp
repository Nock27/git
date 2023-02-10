#include <stdio.h>
#include <string.h>
char *func(char *s1,char *s2)
{
    int i = 0,j;
    int len = strlen(s1);
    char s3[20];

    while(s1[i] != 0)
    { 
        i++;
    }
    i++;
    for(i;i<len;i++)
    {
        for(j = 0; s1[i] || s1[i] != '=';j++,i++)
        {
            s3[j] = s1[i];
            s3[j] = 0;
            if(strcmp(s2,s3) == 0)
            {
                i++;
                for(j = 0;s1[i] || s1[i] != '&';i++,j++)
                {
                    s2[j] = s1[i];
                }
                break;
            }
        }
    }
}