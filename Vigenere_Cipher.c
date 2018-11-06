#include<stdio.h>
#include<string.h>

int main(){
    char message[] = "ANAAREMERE";
    char key[] = "ROSU";
    int messageLength = strlen(message), keyLen = strlen(key), i, j;

    char newKey[messageLength], encryptedMsg[messageLength], decryptedMsg[messageLength];

    //generating new key
    for(i = 0, j = 0; i < messageLength; ++i, ++j){
        if(j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //encryption
    for(i = 0; i < messageLength; ++i)
        encryptedMsg[i] = ((message[i] + newKey[i]) % 26) + 'A';

    encryptedMsg[i] = '\0';

    //decryption
    for(i = 0; i < messageLength; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';

    decryptedMsg[i] = '\0';

    printf("Original Message: %s", message);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedMsg);
    printf("\nDecrypted Message: %s", decryptedMsg);

    return 0;
}
