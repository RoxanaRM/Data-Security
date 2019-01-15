#include<stdio.h>
#include<string.h>
#include "Columnar_transposition.h"

char p[10][10], k[10][10];
int col, row;

void coltrans(char p[10][10])
{
    int i, j;
    int l=0,k[10],u;
    char c[10][10],x[10][10];

    printf("\n**********Encryption**********\n");
    for(i=0; i<row; i++)
    {
        l=0;
        for(j=0; j<col; j++)
        {
            u=k[l]-1;
            c[i][j]=p[i][u];
            l++;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",c[i][j]);
        }
        printf("\n");
    }
    printf("Cipher Text = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c",c[i][j]);
        }
    }
    printf("\n**********Decryption**********\n");
    l=0;
    for(i=0; i<row; i++)
    {
        l=0;
        for(j=0; j<col; j++)
        {
            u=k[l]-1;
            x[i][u]=c[i][j];
            l++;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",x[i][j]);
        }
        printf("\n");
    }
    printf("Plain Text = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c",x[i][j]);
        }
    }
}

int i,j;
void main()
{
    int ch=0,l=0;
    char plain[100];
    printf("Enter the plain text = ");
    gets(plain);
    printf("Enter no of rows and column = ");
    scanf("%d",&row);
    scanf("%d",&col);
    printf("Enter the key to arrange 1 to %d column =\n",col);
    for(i=0; i<col; i++)
        scanf("%d",&k[i]);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(plain[l]!='\0')
            {
                if(plain[l]==' ')
                    l++;
                p[i][j]=plain[l];
                l++;
            }
            else
            {
                break;
            }
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c ",p[i][j]);
        }
        printf("\n");
    }
    coltrans(p);
}
