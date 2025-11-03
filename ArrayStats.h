#pragma once
#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>

class ArrayStats {
public:
    static int min(const std::vector<int>& arr) {
        if (arr.empty()) throw std::invalid_argument("Array cannot be empty");
        return *std::min_element(arr.begin(), arr.end());
    }

    static int max(const std::vector<int>& arr) {
        if (arr.empty()) throw std::invalid_argument("Array cannot be empty");
        return *std::max_element(arr.begin(), arr.end());
    }

    static double average(const std::vector<int>& arr) {
        if (arr.empty()) throw std::invalid_argument("Array cannot be empty");
        return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
    }

    static bool isSorted(const std::vector<int>& arr) {
        return std::is_sorted(arr.begin(), arr.end());
    }
};