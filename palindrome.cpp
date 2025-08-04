#include <iostream>
#include <string>

bool checkIfPalindrome(std::string s)
{   
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
	    return false;

	left++;
	right--;
    }

    return true;

}

int main(void)
{
    std::string palindrome = "racecar";
    std::string anserw_true = checkIfPalindrome(palindrome) == 0 ? "False" : "True"; //Convert anserw to string
    std::cout << palindrome  + " is palindrome: " + anserw_true << std::endl;

    std::string no_palindrome = "unreal";
    std::string anserw_false = checkIfPalindrome(no_palindrome) == 0 ? "false" : "true";
    std::cout << no_palindrome + " is palindrome?: " + anserw_false << std::endl;

    return 0;
}

