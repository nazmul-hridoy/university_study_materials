#include <stdio.h>
main()
{
    printf("Plz enter a string: ");
    char input[100];
    char token[100];
    gets(input);
    int i=0,j=0,k;
    while(input[i]=='\0'){
        if(isdigit(input[i])){
            token[j]='3';
            j++;
        }
        if(input[i]=='+'){
            token[j]='1';
            j++;
        }
        if(input[i]=='*'){
            token[j]='2';
            j++;
        }
        i++;
    }
    token[j]='\0';
    j=0;
    while(token[j]=='\0'){
        if(((token[j]=='3') && (token[j+1]=='1') && (token[j+2]=='3'))||((token[j]=='3') && (token[j+1]=='2') && (token[j+2]=='3')) ){
            token[j]='3';
            k =j+1;
            while(token[k]!=NULL){
                token[k]=token[k+2];
                k++;
            }
            token[k] ='\0';
            k=0;

        }
        else
        j++;


    }
    if
        (token[j]=='3')

        {
        printf("grammar");
        }
        else {
        printf("not grammar");
        }





}
