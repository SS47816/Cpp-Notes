#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p = malloc(100); 
    void *p2 = p;

    free(p); // OK
    free(p2); // ERROR

    return 0;
}