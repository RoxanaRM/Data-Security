#ifndef BIFID_H_INCLUDED
#define BIFID_H_INCLUDED

#define MAX_VALUE 255

struct position{
    int row;
    int column;
};

extern char* reverseSearchOnTable(char** table, char* sentence, struct position *pos, int table_len, int method);
extern struct position *searchOnTable(char** table, char* sentence, int table_len);

#endif // BIFIDLIB_H_INCLUDED
