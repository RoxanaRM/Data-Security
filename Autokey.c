#include<string.h>
#include<stdio.h>
#include "Autokey.h"
char alp[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char plain[25],key[15];
char cipherText[25];
char decryptedText[25];
char decryptedText[25];
void autokeyEncrypt()
{
    int i,j, k;
    int ct[50];
    int plen = strlen(plain);
    for(i=0; i<plen; i++)
    {
        for(j=0; j<26; j++)
        {
            if(plain[i]==alp[j])
            {
                ct[i]=j;
                for(k=0; k<26; k++)
                {
                    if(key[i]==alp[k])
                    {
                        ct[i]+=k;
                    }
                }
            }
        }
    }

    for(i=0; i<plen; i++)
    {
        ct[i]=ct[i]% 26;
        cipherText[i]=alp[ct[i]];
    }
    printf("\nCipher Text:");
    cipherText[i]='\n';
    printf("\n%s",cipherText);
};
void autokeyDecrypt()
{
    int i,j, k;
    int ct1[50];
     int plen = strlen(plain);
    for(i=0; i<plen; i++)
    {
        for(j=0; j<26; j++)
        {
            if(cipherText[i]==alp[j])
            {
                ct1[i]=j;
                for(k=0; k<26; k++)
                {
                    if(key[i]==alp[k])
                    {
                        ct1[i]-=k;
                    }
                }
            }
        }
    }
    printf("\nDecrypted Text:");

    for(i=0; i<plen; i++)
    {
        ct1[i]=ct1[i]% 26;
        if(ct1[i]<0)
        {
            ct1[i]=ct1[i]+26;
        }
        decryptedText[i]=alp[ct1[i]];
    }
    decryptedText[i]='\n';
    printf("\n%s",decryptedText);
};
void createKey(int keyLength)
{
    int i, count = 0;
   int  plen=strlen(plain);

    if(keyLength<plen)
    {
        for(i=keyLength; i<plen; i++)
        {
            key[i]=plain[count];
            count++;
        }
    }
    printf("\nComplete key:");
    printf("\n%s",key);
};

int main()
{
    char lkey[15];
    printf("Enter Text:");
    scanf("%s", plain);
    printf("\nEnter Key:");
    scanf("%s", lkey);
    createKey(strlen(lkey));
    autokeyEncrypt();
    autokeyDecrypt();
}
