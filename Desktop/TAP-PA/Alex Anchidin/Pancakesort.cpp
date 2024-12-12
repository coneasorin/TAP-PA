#include <iostream>
#include <vector>
#include <algorithm>

int findMaxIndex(const std::vector<int>& arr, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void flip(std::vector<int>& arr, int k) {
    std::reverse(arr.begin(), arr.begin() + k + 1);
}

void pancakeSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int currSize = n; currSize > 1; --currSize) {
        int maxIndex = findMaxIndex(arr, currSize);

        if (maxIndex != currSize - 1) {
            if (maxIndex != 0) {
                flip(arr, maxIndex);
                std::cout << "Flip până la index " << maxIndex << ": ";
                for (int num : arr) std::cout << num << " ";
                std::cout << "\n";
            }

            flip(arr, currSize - 1);
            std::cout << "Flip până la index " << currSize - 1 << ": ";
            for (int num : arr) std::cout << num << " ";
            std::cout << "\n";
        }
    }
}

int main() {
    std::vector<int> arr = {3, 6, 1, 9, 7, 2, 4};

    std::cout << "Array inițial: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << "\n";

    pancakeSort(arr);

    std::cout << "Array sortat: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
