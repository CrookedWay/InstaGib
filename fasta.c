#include "fasta.h"

typedef struct fastaFile {
    char seqName[80];
    char fileContent[80][1500];
    fastaFile* next;
};

