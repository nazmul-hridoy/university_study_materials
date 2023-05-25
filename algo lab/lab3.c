#include <stdio.h>
void main()
{
int adj [5][5], un_adj[5][5];
int i, j;
char ch;
printf("For Directed complete graph");
for (i=1; i<=5; i++){
    for (j=1; j<=5; j++){
        printf("Is there any adjacency between %d and %d ", i, j);
        scanf("%c", &ch);
        fflush(stdin);
        if (ch=='y')
            adj[i][j]=1;
        else
            adj[i][j]=0;

    }
}
printf("For undirected graph");
for (i=1; i<=5; i++){
    for (j=1; j<=5; j++){
        printf("Is there any adjacency between %d and %d ", i, j);
        scanf("%c", &ch);
        fflush(stdin);
        if (ch=='y')
            un_adj[i][j]=1;
        else
            un_adj[i][j]=0;

    }
}
printf("Adjacency list for ")
for (i=0; i<5; i++){
    for (j=0; j<5; j++){
    printf ("%d ", adj[i][j]);

    }
    printf("\n");
}
}
