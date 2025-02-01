#include <iostream>
#include <unordered_set>
#include "utils.cxx"

int longest_subarr_sw(std::string s) {
	auto max_length = 0;
	auto slen = s.length();
	auto left = 0;
	std::unordered_set < char > seen;

	for (auto right = 0; right < slen; right++) {
		while (seen.find(s[right]) != seen.end())
			seen.erase(s[left++]);
		seen.insert(s[right]);
		printUnorderedSet(seen);
		max_length = std::max(max_length, right - left + 1);
	}
	return max_length;
}

int main() {
	std::string s = "abcdee";
	std::cout<< "Longest subarray unique is \n\n" << longest_subarr_sw(s);
	return 0;
}
