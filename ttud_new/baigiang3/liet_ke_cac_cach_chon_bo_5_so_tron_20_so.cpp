#include <iostream>

bool isValidSet(int set[]) {
    int evenCount = 0;
    int oddCount = 0;
    int divisibleBy5Count = 0;
    int greaterThan13Count = 0;
    bool hasPairProductDivisibleBy8 = false;

    for (int i = 0; i < 5; ++i) {
        if (set[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if (set[i] % 5 == 0) {
            divisibleBy5Count++;
        }

        if (set[i] > 13) {
            greaterThan13Count++;
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if ((set[i] * set[j]) % 8 == 0) {
                hasPairProductDivisibleBy8 = true;
                break;
            }
        }
        if (hasPairProductDivisibleBy8) {
            break;
        }
    }

    return evenCount > oddCount &&
           divisibleBy5Count > 0 &&
           hasPairProductDivisibleBy8 &&
           greaterThan13Count <= 3;
}

void generateCombinations(int numbers[], int combination[], int start, int depth, int& validSetCount) {
    if (depth == 5) {
        if (isValidSet(combination)) {
            // Print the current combination
            for (int i = 0; i < 5; ++i) {
                std::cout << combination[i] << " ";
            }
            std::cout << std::endl;
            validSetCount++;
        }
        return;
    }

    for (int i = start; i < 20; ++i) {
        combination[depth] = numbers[i];
        generateCombinations(numbers, combination, i + 1, depth + 1, validSetCount);
    }
}

int main() {
    int numbers[20];
    for (int i = 0; i < 20; ++i) {
        numbers[i] = i + 1;
    }

    int validSetCount = 0;
    int combination[5];

    generateCombinations(numbers, combination, 0, 0, validSetCount);

    std::cout << "Number of valid sets: " << validSetCount << std::endl;

    return 0;
}
