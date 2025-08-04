#include <iostream>
#include <vector>

void reverseString(std::vector<char>& s) {
    //Implement Logic

    char temp;
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < s.size(); i++) {
        std::cout << s[i];
    }
}

int main() {
    std::vector<char> hello = { 'H', 'e' ,'l', 'l', 'o'};

    std::cout << "\n";

    reverseString(hello);
}

