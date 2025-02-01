#include <iostream>
#include <unordered_set>
using namespace std;

int longest_uniq_substr(string s) {
	int slen = s.length();
	int max_length = 0;
	for (int i = 0; i < slen; i++) {
		unordered_set<char> seen;
		for (int j = i; j < slen; j++) {
			if(seen.find(s[j]) != seen.end()) {
				break;
			}
			seen.insert(s[j]);
			max_length = max(max_length, j - i + 1);
		}
	}
	return max_length;
}

int main()  {
	string s = "ababaaab";
	cout << "Longest substring is of size " << longest_uniq_substr(s) << endl;
	return 0;
}
