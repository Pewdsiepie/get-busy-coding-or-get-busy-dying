#include <stdio.h>

int main(void) {
    int year, month, day;

    scanf("%d-%d-%d", &month, &day, &year);
    printf("%d-%02d-%02d\n", year, month, day);

    return 0;
}
