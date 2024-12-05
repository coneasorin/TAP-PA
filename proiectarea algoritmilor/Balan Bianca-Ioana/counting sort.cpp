#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;

    int maxElement = *std::max_element(arr.begin(), arr.end());


    std::vector<int> count(maxElement + 1, 0);

    for (int num : arr) {
        count[num]++;
    }

    int index = 0;
    for (int i = 0; i <= maxElement; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 9, 5, 2, 3, 7, 1, 0};

    std::cout << "Array initial: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    countingSort(arr);

    std::cout << "Array sortat: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
