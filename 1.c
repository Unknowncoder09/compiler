#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
typedef enum gitem {
    TK_MAIN,
    TK_AS,
    TK_CALL,
    TK_DEFINETYPE,
    TK_ELSE,
    TK_END, TK_ENDIF, TK_ENDWHILE, TK_ENDRECORD, TK_ENDUNION,
    TK_GLOBAL,
    TK_IF,
    TK_INPUT, TK_OUTPUT,
    TK_INT, TK_REAL,
    TK_LIST,
    TK_PARAMETERS, TK_PARAMETER,
    TK_READ, TK_WRITE,
    TK_RECORD, TK_UNION,
    TK_RETURN,
    TK_THEN,
    TK_TYPE,
    TK_WHILE,
    TK_WITH
} grammerItem;
typedef struct {
    char *lexeme;
    grammerItem token;
    char *type;
    int scpst;
    int scpend;
    int num_params;
} Sym;