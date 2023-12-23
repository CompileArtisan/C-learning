#include<stdio.h>

int main() {
    printf(" ");
    int i = 1;
    while (i <= 10) { 
        printf("_");
        i++;
    }
    printf("\n");
    
    char slash = '\\';
    int i_outer = 1;
    while (i_outer <= 3) { 
        printf("|");
        int j = 1;
        while (j < i_outer) { 
            printf(" ");
            j++;
        }
        printf("%c", slash);
        int k = 1;
        while (k <= 9 - i_outer) { 
            if (i_outer == 3) {
                printf("_");
            } else {
                printf(" ");
            }
            k++;
        }
        printf("|");
        int e = 1;
        while (e < i_outer) { 
            if (i_outer == 3) {
                printf("_");
            } else {
                printf(" ");
            }
            e++;
        }
        printf("%c", slash);
        printf("\n");
        i_outer++;
    }
    for (int i = 1; i <= 15; i++) {
        if ((i == 1) || (i == 5) || (i == 11) || (i == 15)) {
            printf("|");
        } else if (i > 11) {
            printf(" ");
        } else {
            printf("_");
        }
    }
    printf("\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        printf("%c", slash);
        for (int j = 3; j > i; j--) {
            printf(" ");
        }
        printf("|");
        for (int j = 1; j <= 5 + i; j++) {
            if (i == 3) {
                printf("_");
            } else {
                printf(" ");
            }
        }
        printf("%c", slash);
        for (int j = 3; j > i; j--) {
            printf(" ");
        }
        printf("|");
        printf("\n");
    }

    return 0;
}
