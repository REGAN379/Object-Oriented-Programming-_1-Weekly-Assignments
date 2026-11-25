#include <stdio.h>

int main() {
    FILE *file;
    float sale, totalSales = 0;

    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &sale) == 1) {
        totalSales += sale;
    }

    printf("Total Sales for the Day = %.2f\n", totalSales);

    fclose(file);

    return 0;
}
