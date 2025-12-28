#include <vector>
#include <cassert>
#include "array/array_rotate.hxx"

int main() {
    std::vector<int> v{1,2,3,4,5};
    array::array_rotate(v, 2);
    assert((v == std::vector<int>{4,5,1,2,3}));
}