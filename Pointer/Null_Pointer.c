#include <stdio.h>

int main()
{
    char* np = NULL;

    char** pnp = &np;           // Pointer to null pointer

    if (*pnp == NULL) {
        printf("Pointer to a null pointer is valid\n");
    }
    else {
        printf("Pointer to a null pointer is invalid\n");
    }

    return 0;
}
//   \
NULL pointer : does not points to the anather variable.
