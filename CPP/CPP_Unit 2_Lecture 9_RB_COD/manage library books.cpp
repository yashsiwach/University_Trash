#include <stdio.h>

void checkBook(void* pricePtr, void* availabilityPtr) {
    float* price = (float*)pricePtr;
    char* availability = (char*)availabilityPtr;

    if (*price > 0 && *price < 2500.50 && (*availability == 'Y' || *availability == 'y')) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    float price;
    char availability;
    scanf("%f", &price);
    scanf(" %c", &availability);
    checkBook(&price, &availability);

    return 0;
}

