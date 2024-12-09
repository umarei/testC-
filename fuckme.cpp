#include <iostream>
#include <string>
#include <algorithm>

void reverseString(std::string &str, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    // Reverse the left half
    reverseString(str, left, mid);

    // Reverse the right half
    reverseString(str, mid + 1, right);

    // Swap the two halves
    std::reverse(str.begin() + left, str.begin() + mid + 1);
    std::reverse(str.begin() + mid + 1, str.begin() + right + 1);
    std::reverse(str.begin() + left, str.begin() + right + 1);
}

int main()
{
    std::string str = "Hello, World!";
    reverseString(str, 0, str.length() - 1);
    std::cout << str << std::endl;
    return 0;
}