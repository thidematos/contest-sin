#include <stdio.h>

void getNumGrandchilds(int children[1000], int numChildren) {
    int sum = 0;

    for (int i = 0; i < numChildren; i++) {
        scanf(" %d", &children[i]);
        sum += children[i];
    }

    printf("%d", sum);
}

int main() {
    int childrenQuantity[1000];
    int numChildren;

    scanf("%d", &numChildren);

    getNumGrandchilds(childrenQuantity, numChildren);
}