//https://en.wikipedia.org/wiki/FASTA_format
//Assuming a standardized fasta file format from something like addGene or like something from oSnapGene
#include <stdio.h>
#include <string.h>
#include "fasta.h"


int main(int argc, char *argv[])
{
    char fileTest[80][1500];
    FILE *file;
    const char carat = '>';
    int i = 0;
    file = fopen(argv[1], "r");
    char buff[80];
    Fasta inputFile;

    //Go back and due these for multiple files.
    while(fgets(buff, 80, file) != NULL)
    {
        int j = 0;
        if (strchr(buff, carat)) {
            strcpy(inputFile.seqName, buff);
            continue;
        }
        strcpy(inputFile.fileContent[j], buff);
//        printf ("%s\n", buff);
        j++;
    }
//    printf("%d", i);
    calculateMeltingTemperature(inputFile);
    printf("Just checking");
    fclose(file);
}

