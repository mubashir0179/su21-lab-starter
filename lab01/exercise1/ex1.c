#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */

int count = 0;
for (int i=0; str[i] !='\0'; i++){
if (str[i] == letter) {
count++;
}
}
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
    /* TODO: implement compute_nucleotide_occurances */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    // Initialize counts to zero
    (*dna_seq).A_count = 0;
    (*dna_seq).C_count = 0;
    (*dna_seq).G_count = 0;
    (*dna_seq).T_count = 0;

    // Iterate through each character in the DNA sequence
    for (int i = 0; i < strlen((*dna_seq).sequence); i++) {
        // Check the current character
        if ((*dna_seq).sequence[i] == 'A')
            (*dna_seq).A_count++; // Increment A count
        else if ((*dna_seq).sequence[i] == 'C')
            (*dna_seq).C_count++; // Increment C count
        else if ((*dna_seq).sequence[i] == 'G')
            (*dna_seq).G_count++; // Increment G count
        else
            (*dna_seq).T_count++; // Increment T count
    }

    // The function does not return any value (void)
    return;
}
