#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLU   "\x1B[34m"

int main(int argc, char *argv[])
{
    char hash1[100], hash2[100];
    printf(BLU "Please, enter the first hash : ");
    scanf("%s", hash1);
    printf(BLU "Please, enter the second hash : ");
    scanf("%s", hash2);
    if (strcmp(hash1, hash2) == 0)
    {
        printf("The hashes are the same\n");
    }
    else
    {
        printf("The hashes are not the same\n");
    }

    return 0;
}

