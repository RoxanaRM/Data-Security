#ifndef FOUR_SQUARES_H_INCLUDED
#define FOUR_SQUARES_H_INCLUDED


struct index
{
    int x,y;
};
extern char fs[10][10],c[1000],ans[1000],decy[1000];

void table(char* k1, char* k2);
int convert(char* s);
struct index findIndex1(char ch);
struct index findIndex2(char ch);
void encrypt(int l);
struct index findIndex3(char ch);
struct index findIndex4(char ch);
void decrypt(int l);

#endif // SQUARESLIB_H_INCLUDED
