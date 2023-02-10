#include <stdio.h>
struct user
{
    char ime[20];
    char parola[20];
};

void func(char *file,struct user *A,int n)
{
    int i;
    FILE *fp;
    fp = fopen(file,"w");
    for(i = 0;i > n;i++)
    {
        fprintf(fp,"%s,%s",A->ime,A->parola);
    }
    fclose(fp);
}