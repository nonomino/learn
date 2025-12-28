// include/op/array_rotate.hxx
#pragma once
#include <vector>

namespace array {

inline void array_rotate(std::vector<int>& a, int k) {
    k %= a.size();
    std::reverse(a.begin(), a.end());
    std::reverse(a.begin(), a.begin() + k);
    std::reverse(a.begin() + k, a.end());
}

}