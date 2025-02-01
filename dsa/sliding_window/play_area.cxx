#include <iostream>
#include <unordered_set>
#include "utils.cxx"
using namespace std;

int main() {
	unordered_set<int> s {1, 2, 3, 4};
	printUnorderedSet(s);
	auto f = s.find(3);
	printUnorderedSet(s);
}
