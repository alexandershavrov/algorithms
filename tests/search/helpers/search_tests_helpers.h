#ifndef ALGORITHMS_TESTS_SEARCH_SEARCH_TESTS_HELPERS_H
#define ALGORITHMS_TESTS_SEARCH_SEARCH_TESTS_HELPERS_H

#include "../../tests_helpers.h"

template<typename T>
requires std::integral<T>
auto get_value(const std::vector<T>& data)
{
    auto index = get_random_value<T>(0, data.size() - 1);
    auto value = data[index];

    return value;
}

#endif // ALGORITHMS_TESTS_SEARCH_SEARCH_TESTS_HELPERS_H
