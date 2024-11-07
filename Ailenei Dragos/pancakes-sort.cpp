#include <iostream>
#include <vector>
#include <algorithm>

void flip(std::vector<int>& p, int k) { std::reverse(p.begin(), p.begin() + k); }

void pancakeSort(std::vector<int>& p) {
    for (int size = p.size(); size > 1; size--) {
        int maxIndex = std::distance(p.begin(), std::max_element(p.begin(), p.begin() + size));
        if (maxIndex != size - 1) {
            if (maxIndex != 0) flip(p, maxIndex + 1);
            flip(p, size);
        }
    }
}

int main() {
    std::vector<int> pancakes = {3, 6, 2, 7, 4, 5, 1};
    pancakeSort(pancakes);
    for (int p : pancakes) std::cout << p << " ";
}
