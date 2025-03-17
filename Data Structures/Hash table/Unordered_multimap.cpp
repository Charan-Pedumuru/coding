#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_multimap<std::string, int> multiMap;
    multiMap.insert({"apple", 10});
    multiMap.insert({"apple", 15}); // Duplicate key

    auto range = multiMap.equal_range("apple");
    for (auto it = range.first; it != range.second; ++it)
        std::cout << it->first << ": " << it->second << std::endl;
    return 0;
}
