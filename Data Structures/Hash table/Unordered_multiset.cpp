#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_multiset<int> multiSet = {1, 2, 2, 3, 4};
    std::cout << "Count of 2: " << multiSet.count(2) << std::endl;
    return 0;
}
