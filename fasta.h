#ifndef INSTAGIB_FASTA_H
#define INSTAGIB_FASTA_H
struct fasta {
    char seqName[80];
    int gCount, cCount, aCount, tCount;
    int meltingTemp;
    struct fasta_t* next;
    char fileContent[1000][80];
};

void fastaMemSet(struct fasta fastaFile);
void calculateMeltingTemperature(struct fasta fastaFile);
void flagRestrictionSites(struct fasta fastaFile);
#endif //INSTAGIB_FASTA_H
