#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>

// Function to print a vector
template <typename T>
void printVector(const std::vector<T>& vec, const std::string& label = "Vector") {
    std::cout << label << ": [ ";
    for (const auto& val : vec) {
        std::cout << val << " ";
    }
    std::cout << "]\n";
}

// Function to print an unordered_set
template <typename T>
void printUnorderedSet(const std::unordered_set<T>& uset, const std::string& label = "Unordered Set") {
    std::cout << label << ": { ";
    for (const auto& val : uset) {
        std::cout << val << " ";
    }
    std::cout << "}\n";
}

// Function to print a set
template <typename T>
void printSet(const std::set<T>& s, const std::string& label = "Set") {
    std::cout << label << ": { ";
    for (const auto& val : s) {
        std::cout << val << " ";
    }
    std::cout << "}\n";
}

// Function to print an unordered_map
template <typename K, typename V>
void printUnorderedMap(const std::unordered_map<K, V>& umap, const std::string& label = "Unordered Map") {
    std::cout << label << ": {\n";
    for (const auto& [key, value] : umap) {
        std::cout << "  " << key << " -> " << value << "\n";
    }
    std::cout << "}\n";
}

// Function to print a map (ordered)
template <typename K, typename V>
void printMap(const std::map<K, V>& m, const std::string& label = "Map") {
    std::cout << label << ": {\n";
    for (const auto& [key, value] : m) {
        std::cout << "  " << key << " -> " << value << "\n";
    }
    std::cout << "}\n";
}

// Function to print a pair
template <typename T1, typename T2>
void printPair(const std::pair<T1, T2>& p, const std::string& label = "Pair") {
    std::cout << label << ": (" << p.first << ", " << p.second << ")\n";
}
