#ifndef INSTAGIB_FASTA_H
#define INSTAGIB_FASTA_H
struct fasta_t {
    char seqName[80];
    char fileContent[80][1500];
    struct fasta_t* next;
};
typedef struct fasta_t Fasta;
//typedef struct fastaFile Fasta;
#endif //INSTAGIB_FASTA_H
