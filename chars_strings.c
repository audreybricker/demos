// Write a program that reads a sentence (a sequence of characters terminated by a period)
// using getchar(), and then outputs the sentence in reverse order using putchar().

// Enter a sentence: The quick brown fox jumps over the lazy dog.
// Reversed sentence: .god yzal eht revo spmuj xof nworb kciuq ehT

// To solve this problem, you can use an array of characters to store the sentence
// as it is read in using getchar(). Once the entire sentence has been read in and
// stored in the array, you can iterate over the array in reverse order using a loop,
// and output each character using putchar().

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char original[MAX_LENGTH];

    printf("Please enter a string: \n");
    char character = getchar();

    int i = 0;

    while (character != '\n' && i < MAX_LENGTH - 1)
    {
        original[i] = character;
        i++;
        character = getchar();
    }

    original[i] = '\0';

    int count = i;

    printf("The original sentence is: ");

    for (i = 0; i < count; i++)
    {
        putchar(original[i]);
    }

    printf("\n");

    char reversed[MAX_LENGTH];

    int length = strlen(original);



    // printf("the length of the sentence is: %i\n", length);

    int x;

    for (x = 0; x < length+1; x++){
        reversed[x] = original[length - x];
    }

    reversed[x] = '\0';

    printf("the reversed sentence is: ");
    
    for (x = 0; x < length+1; x++){
        putchar(reversed[x]);
    }

    printf("\n");

    return 0;
}
