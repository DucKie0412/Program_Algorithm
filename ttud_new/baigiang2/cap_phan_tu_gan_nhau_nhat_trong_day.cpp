#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <chrono>
#include <limits.h>

// Function to parse input string into a vector of integers
std::vector<int> parseInput(const std::string& input) {
    std::vector<int> result;
    std::stringstream ss(input);
    std::string item;
    while (std::getline(ss, item, ',')) {
        result.push_back(std::stoi(item));
    }
    return result;
}

// Function to find and display all pairs with the smallest difference
void findClosestPairs(const std::vector<int>& A) {
    if (A.size() < 2) {
        std::cout << "Not enough elements to find pairs." << std::endl;
        return;
    }

    std::vector<int> sortedA = A;
    std::sort(sortedA.begin(), sortedA.end());

    int minDiff = INT_MAX;
    std::vector<std::pair<int, int>> closestPairs;

    for (size_t i = 1; i < sortedA.size(); ++i) {
        int diff = sortedA[i] - sortedA[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
            closestPairs.clear();
            closestPairs.push_back({sortedA[i - 1], sortedA[i]});
        } else if (diff == minDiff) {
            closestPairs.push_back({sortedA[i - 1], sortedA[i]});
        }
    }

    std::cout << "The closest pairs are: ";
    for (const auto& pair : closestPairs) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter the sequence of numbers separated by commas: ";
    std::getline(std::cin, input);

    auto start = std::chrono::high_resolution_clock::now();

    std::vector<int> A = parseInput(input);
    findClosestPairs(A);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Time taken to run: " << duration.count() << " seconds" << std::endl;

    return 0;
}