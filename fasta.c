#include "fasta.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void fastaMemSet(struct fasta fastaFile) {
//    memset(fastaFile.fileContent, 'n', sizeof fastaFile.fileContent);
}

void calculateMeltingTemperature(struct fasta fastaFile) {
    //G == 0, C==1, A==2, T==3
    //Love me a switch statement.
    for (int i = 0; i <= 1500; i++) {
        if (fastaFile.fileContent[i] == NULL) {
            break;
        };
        for (int j = 0; j <= 80; j++) {
            char c = fastaFile.fileContent[i][j];
            switch (c) {
                case 'g':
                    fastaFile.gCount++;
                case 'c':
                    fastaFile.cCount++;
                case 'a':
                    fastaFile.aCount++;
                case 't':
                    fastaFile.tCount++;
                default:
                    break;
            }
        }
    }
    printf("C: %d\n", fastaFile.cCount);
    printf("G: %d\n", fastaFile.gCount);
    printf("A: %d\n", fastaFile.aCount);
    printf("T: %d\n", fastaFile.tCount);

    //Tm= 64.9 +41*(yG+zC-16.4)/(wA+xT+yG+zC)
    printf("%f\n",
           ((64.9) + (41 * (fastaFile.gCount + (fastaFile.cCount - 16.4))
                      / (fastaFile.gCount + fastaFile.cCount + fastaFile.aCount + fastaFile.tCount))));
}

void flagRestrictionSites(struct fasta fastaFile) {
    int *p;
    //Put Forking Logic Here.
    //Gots to add restriction site command line argument as well.
    for (p = &fastaFile.fileContent[0][0]; p <= &fastaFile.fileContent[1000][80]; p++) {
//        if (*p == NULL){
//            break;
//        }
        printf("%c", (char) *p);
    }
    return 0;
}

//Really this strikes me as a dictionary or a hashing kind of thing, but y'know.
void silentMutation(struct fasta fastaFile, int *traversingPointer) {
    int *k1 = traversingPointer;
    int *k2 = traversingPointer + 1;
    int *k3 = traversingPointer + 2;
    char nucleotideSequence[3] = {(char) *k1, (char) *k2, (char) *k3};
    if (strcmp("ttt", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'c';
    }
    if (strcmp("ttc", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 't';
    }
    if (strcmp("tta", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'g';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'c';
            case 4:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("ttg", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'a';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'c';
            case 4:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("ctt", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'g';
            case 2:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'c';
            case 4:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("ctc", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'g';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'a';
            case 4:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("cta", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'g';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'c';
            case 4:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("ctg", nucleotideSequence) == 0) {
        switch (rand() % 5) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'g';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'c';
            case 4:
                *k1 = (int) 'c', *k2 = (int) 't', *k3 = (int) 'a';
            case 5:
                *k1 = (int) 't', *k2 = (int) 't', *k3 = (int) 'a';
        }
    }
    if (strcmp("att", nucleotideSequence) == 0) {
        switch (rand() % 2) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 'a';
        }
    }
    if (strcmp("atc", nucleotideSequence) == 0) {
        switch (rand() % 2) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 'a';
        }
    }
    if (strcmp("ata", nucleotideSequence) == 0) {
        switch (rand() % 2) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("atg", nucleotideSequence) == 0) {
        printf("Parsing codon ATG, non-mutable. Please evaluate input DNA Fragment.");
        exit(1);
    }
    if (strcmp("gtt", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("gtc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("gta", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'g';
        }
    }
    if (strcmp("gtg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 't', *k3 = (int) 't';
        }
    }
    if (strcmp("tct", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("tcc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 't';
            case 2:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("tca", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 't';
            case 3:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("tcg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 't', *k2 = (int) 'c', *k3 = (int) 't';
        }
    }
    if (strcmp("cct", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("ccc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("cca", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("ccg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'c', *k3 = (int) 't';
        }
    }
    if (strcmp("act", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("acc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("aca", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("acg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'a', *k2 = (int) 'c', *k3 = (int) 't';
        }
    }
    if (strcmp("gct", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("gcc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("gca", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("gct", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("gcg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 't';
        }
    }
    if (strcmp("gct", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'c', *k3 = (int) 'g';
        }
    }
    if (strcmp("tat", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 'a', *k3 = (int) 'c';
        }
    if (strcmp("tac", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 'a', *k3 = (int) 't';
    }
     //From a wetlab perspective, I don't think mutating a stop codon is required or honestly wanted.
    if (strcmp("taa", nucleotideSequence) == 0) {
        printf("Attempting to mutate a stop codon. Exiting, please evaluate DNA fragment.");
        exit(1);
    }
    if (strcmp("tag", nucleotideSequence) == 0) {
        printf("Attempting to mutate a stop codon. Exiting, please evaluate DNA fragment.");
        exit(1);
    }
    if (strcmp("tga", nucleotideSequence) == 0) {
        printf("Attempting to mutate a stop codon. Exiting, please evaluate DNA fragment.");
        exit(1);
    }
    if (strcmp("cat", nucleotideSequence) == 0) {
        *k1 = (int) 'c', *k2 = (int) 'a', *k3 = (int) 'c';
    }
    if (strcmp("cac", nucleotideSequence) == 0) {
        *k1 = (int) 'c', *k2 = (int) 'a', *k3 = (int) 't';
    }
    if (strcmp("caa", nucleotideSequence) == 0) {
        *k1 = (int) 'c', *k2 = (int) 'a', *k3 = (int) 'g';
    }
    if (strcmp("cag", nucleotideSequence) == 0) {
        *k1 = (int) 'c', *k2 = (int) 'a', *k3 = (int) 'a';
    }
    if (strcmp("aat", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'a', *k3 = (int) 'c';
    }
    if (strcmp("aac", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'a', *k3 = (int) 't';
    }
    if (strcmp("aaa", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'a', *k3 = (int) 'g';
    }
    if (strcmp("aag", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'a', *k3 = (int) 'a';
    }
    if (strcmp("gat", nucleotideSequence) == 0) {
        *k1 = (int) 'g', *k2 = (int) 'a', *k3 = (int) 'c';
    }
    if (strcmp("gac", nucleotideSequence) == 0) {
        *k1 = (int) 'g', *k2 = (int) 'a', *k3 = (int) 't';
    }
    if (strcmp("gaa", nucleotideSequence) == 0) {
        *k1 = (int) 'g', *k2 = (int) 'a', *k3 = (int) 'g';
    }
    if (strcmp("gag", nucleotideSequence) == 0) {
        *k1 = (int) 'g', *k2 = (int) 'a', *k3 = (int) 'a';
    }
    if (strcmp("tgt", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 'g', *k3 = (int) 'c';
    }
    if (strcmp("tgc", nucleotideSequence) == 0) {
        *k1 = (int) 't', *k2 = (int) 'g', *k3 = (int) 't';
    }
    if (strcmp("tgg", nucleotideSequence) == 0) {
        printf("Attempting to mutate tryptophan. No analog. Isn't Biology weird?");
        exit(1);
    }
    if (strcmp("cgt", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("cgc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("cga", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 't';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("cgg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'c', *k2 = (int) 'g', *k3 = (int) 't';
        }
    }
    if (strcmp("agt", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'g', *k3 = (int) 'c';
    }
    if (strcmp("agc", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'g', *k3 = (int) 't';
    }
    if (strcmp("aga", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'g', *k3 = (int) 'g';
    }
    if (strcmp("agg", nucleotideSequence) == 0) {
        *k1 = (int) 'a', *k2 = (int) 'g', *k3 = (int) 'a';
    }
    if (strcmp("ggt", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("ggc", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("gga", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 't';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'g';
        }
    }
    if (strcmp("ggg", nucleotideSequence) == 0) {
        switch (rand() % 3) {
            case 1:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'c';
            case 2:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'a';
            case 3:
                *k1 = (int) 'g', *k2 = (int) 'g', *k3 = (int) 'y';
        }
    }



}






















