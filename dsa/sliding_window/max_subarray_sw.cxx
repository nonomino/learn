#include <iostream>
#include <unordered_set>

int longest_subarr_sw(std::string s) {
	int max_length = 0;
	int slen = s.length();
	int left = 0;
	std::unordered_set < char > seen;
	for (int right = 0; right < s.length(); right++) {
		while (seen.find(s[right]) != seen.end()) {
			seen.erase(s[left]);
			left++;
		}
		seen.insert(s[right]);
		max_length = std::max(max_length, right - left + 1);
	}
	return max_length;
}

int main() {
	std::string s = "abcdedfffaguusgg";
	std::cout<< "Longest subarray unique is " << longest_subarr_sw(s);
	return 0;
}