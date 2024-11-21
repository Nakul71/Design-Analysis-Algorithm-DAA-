#include <stdio.h>

void sumOfSubsets(int set[], int n, int target, int subset[], int subsetSize, int currentSum, int index) {
    if (currentSum == target) {
        printf("Subset found: ");
        for (int i = 0; i < subsetSize; i++)
            printf("%d ", subset[i]);
        printf("\n");
        return;
    }

    if (currentSum > target || index == n)
        return;

    subset[subsetSize] = set[index];
    sumOfSubsets(set, n, target, subset, subsetSize + 1, currentSum + set[index], index + 1);

    sumOfSubsets(set, n, target, subset, subsetSize, currentSum, index + 1);
}

int main() {
    int set[] = {3, 34, 4, 12, 5, 2};
    int target = 9;
    int n = sizeof(set) / sizeof(set[0]);
    int subset[n];

    printf("Subsets that sum to %d:\n", target);
    sumOfSubsets(set, n, target, subset, 0, 0, 0);

    return 0;
}
