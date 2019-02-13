#include "CombinedNumber.hpp"
#include <iterator>

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    std::string result;
    std::vector<int> vec;//(l.size());
    std::copy(l.begin(), l.end(), std::back_insert_iterator<std::vector<int>>(vec));
    std::sort(vec.begin(), vec.end(), [](const auto & a, const auto & b){
        return a > b;
    });

    if (l.empty())
        return "";

    for (const auto & i : vec)
        result += std::to_string(i);
    return result;
}
