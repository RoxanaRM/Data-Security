#ifndef AUTOKEY_H_INCLUDED
#define AUTOKEY_H_INCLUDED
extern char plain[25],key[15],alp[26];
extern char cipherText[25];
extern char decryptedText[25];
extern char decryptedText[25];

extern void autokeyEncrypt();
extern void autokeyDecrypt();
extern void createKey();

#endif // AUTOKEYLIB_H_INCLUDED
