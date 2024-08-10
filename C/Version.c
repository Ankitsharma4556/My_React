#include <stdio.h>

int main() {
    // Check the version of the C standard
    #if defined(__STDC_VERSION__)
        printf("C Standard version: %ld\n", __STDC_VERSION__);
    #else
        printf("C Standard: C89/C90\n");
    #endif

    return 0;
}