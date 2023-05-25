#include<stdio.h>
#include<stdlib.h>
int getIndex(char x[], char c);
int isTerminal(char x[], char c);
int main()
{
    char productions[100][100];
    char terminals[100],nonTerminals[100];
    printf("Enter the terminals in the grammar: ");
    gets(terminals);
    printf("Enter the non terminals in the grammar: ");
    gets(nonTerminals);

    int i,j;
    for(i=0;terminals[i]!='\0';i++)
    {
        printf("Enter the production rule for %c: ",terminals[i]);
        gets(productions[i]);
    }

    for(i=0;terminals[i]!='\0';i++)
    {
        printf("The first of %c: ",terminals[i]);
        int n=i;

        for(j=0;productions[n][j]!='\0';)
        {

            if(isTerminal(terminals,productions[n][j]))
                {
                  n=getIndex(terminals,productions[n][j]);

                }
            else
            {

                printf("%c ",productions[n][j]);
                char f=productions[n][j];
                if(!isTerminal(terminals,productions[i][j]))
                    break;

                if(f!='e')
                    break;

                j++;
                n=i;
            }
        }
        printf("\n");

    }

    return 0;
}
int getIndex(char x[], char c)
{
    int i;
    for(i=0;x[i]!='\0';i++)
        if(x[i]==c)
        break;
    return i;
}
int isTerminal(char x[], char c)
{
    int i;
    for(i=0;x[i]!='\0';i++)
        if(x[i]==c)
        return 1;
    return 0;
}
