#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int* min = NULL;
    for (int i = 1; i < argc; i++) {
        int *num = (int*) malloc(sizeof(int));
        *num = atof(argv[i]);
        if (min == NULL) {
            min = num;
        }
        else {
            if (*min > *num) {
                free(min);
                min = num;
            }
            else {
                free(num);
            }
        }
    }
    if (min == NULL) {
        printf("The program needs at least one integer parameter to run!\n");
    }
    else {
        printf("Min parameter is %d\n", *min);
        free(min);
    }
    return 0;
}
