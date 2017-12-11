//https://en.wikipedia.org/wiki/FASTA_format
//Assuming a standardized fasta file format from something like addGene or like something from oSnapGene
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "fasta.h"

const char carat = '>';


int main(int argc, char *argv[]) {
    char fileTest[1000][80] = { 0 },  buff[80];
    FILE *file;
    struct fasta inputFile;
    file = fopen(argv[1], "r");
    //Go back and due these for multiple files.
    fgets(inputFile.seqName, sizeof inputFile.seqName, file);
    for(int i=1; i<1000; ++i){
        fgets(inputFile.fileContent[i], sizeof inputFile.fileContent, file);
    }
    calculateMeltingTemperature(inputFile);
    flagRestrictionSites(inputFile);
    fclose(file);
}