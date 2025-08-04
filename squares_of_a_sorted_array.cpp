/*
	Task:
	Given an integer array nums sorted in non-decreasing order,
	return an array of the squares of each number sorted in non-decreasing order.
*/

#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> sortedSquares(std::vector<int>& nums) {
	
	std::vector<int> anserw;
	int left = 0;
	int right = nums.size() - 1;

	while (left <= right) {
		if (abs(nums[left]) <= abs(nums[right])) {
			anserw.insert(anserw.begin(), pow(nums[right], 2));
			right--;
		}
		else {
			anserw.insert(anserw.begin(), pow(nums[left], 2));
			left++;
		}
	}

	return anserw;
}

int main(void) {
	// Test vectors
	std::vector<int> nums = { -4,-1,0,3,10 };
	std::vector<int> nums2 = { -10000, -1, 0, 3, 10000};


	// Print original vector 1
	std::cout << "Original vector : " << std::endl;

	for (int i : nums)
		std::cout << i << ' ';

	std::cout << std::endl;

	// Called one problem solve function
	std::vector<int> ans = sortedSquares(nums);

	// Print solved vector
	std::cout << "Anserw vector one : " << std::endl;

	for (int j : ans)
		std::cout << j << ' ';

	std::cout << std::endl;

	// Print original vector 2
	std::cout << "Original vector two : " << std::endl;

	for (int k : nums2)
		std::cout << k << ' ';

	std::cout << std::endl;

	// Called two problem solve function
	std::vector<int> ans2 = sortedSquares(nums2);

	// Print solved vector
	std::cout << "Anserw vector two : " << std::endl;

	for (int l : ans2)
		std::cout << l << ' ';
}