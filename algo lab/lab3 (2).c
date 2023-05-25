#include <stdio.h>
void main()
{
int adj [5][5];
int i, j;
char ch;
printf("for undirected complete graph");
for (i=0; i<=4; i++){
    for (j=0; j<=4; j++){
        printf("is there any adjacency between %d and %d ", i, j);
        scanf("%c", &ch);
        fflush(stdin);
        if (ch=='y')
            adj[i][j]=1;
        else
            adj[i][j]=0;

    }
}

printf("Adjacency list for ");
for (i=0; i<=4; i++){
    for (j=0; j<=4; j++){
    printf ("%d ", adj[i][j]);

    }
    printf("\n");
}
}
