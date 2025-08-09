#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    int checking = 0;
    std::vector<int> anserw;

    for (int i = 0; i < nums.size() - 1; i++)
    {   
        while (checking < nums.size() - 1)
        {
            if (anserw[i] + anserw[checking] == target && i != checking)
            {
                anserw.push_back(i);
                anserw.push_back(checking);
            }
            checking++;
        }
        checking = 0;
    }

    return anserw;
}

int main()
{   
    std::vector<int> nums = { 3, 2, 4};
    std::vector<int> anserw_one = twoSum(nums, 9);

    for (int i : anserw_one) 
    {
        std::cout << anserw_one[i] << std::endl;
    }
}
