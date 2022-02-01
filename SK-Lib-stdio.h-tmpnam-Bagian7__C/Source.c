#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    char name1[L_tmpnam_s];
    errno_t err;
    int i;

    for (i = 0; i < 15; i++) {
        err = tmpnam_s(name1, L_tmpnam_s);

        if (err) {
            printf("Error occurred creating unique filename.\n");
            exit(1);
        } else {
            printf("%s is safe to use as a temporary file.\n", name1);
        }
    }

    _getch();
    return 0;
}