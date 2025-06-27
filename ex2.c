#include <stdio.h>

void calcCring(int birthYear) {
    int actualYear = 2025;

    int result = actualYear - birthYear;

    result *= 2;

    int shouldBe = actualYear - result;

    printf("%d", shouldBe);
}

int main() {
    int birthYear;

    scanf("%d", &birthYear);

    calcCring(birthYear);
}