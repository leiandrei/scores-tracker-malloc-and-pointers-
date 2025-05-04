#include <stdio.h>
#include <stdlib.h>

void behind(int *s, int size);

int main()
{
    int size;

    printf("Enter the number of playeres (max. 10): ");
    scanf("%d", &size);

    if (size > 10 || size <= 0) {
        printf("\nInvalid Input!\n");
        return 1;
    }

    int *scores = calloc(size, sizeof(int));

    if (!scores) {
        fprintf(stderr, "Memory Allocation failed!\n");
        return 1;
    }

    printf("Enter the scores for each players:\n");
    for (int i = 0; i < size; i++) {
        printf("Player #%d: ", i + 1);
        scanf("%d", &s[i]);
    }

    behind(s, size);

    printf("Points behind the leader:\n");
    for (int i = 0; i < size; i++) {
        printf("Player #%d: %d\n", i + 1, s[i]);
    }

    free(s);

    return 0;
}

void behind(int *a, int size)
{
    int high = 0;
    for (int i = 0; i < size; i++) {
        if (*(a+i) > high) {
            high = *(a+i);
        }
    }

    for (int i = 0; i < size; i++) {
        *(a + i) = high - *(a + i);
    }
}
