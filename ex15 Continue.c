#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; /* passa para a pr�xima itera��o */
        }
        printf("%d ", i);
    }

    return 0;
}

