#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};
    if (numbers.find(3) != numbers.end())
        std::cout << "Found 3 in set." << std::endl;
    return 0;
}
