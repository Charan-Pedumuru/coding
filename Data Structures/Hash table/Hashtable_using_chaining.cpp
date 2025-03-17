#include <iostream>
#include <vector>
#include <list>

class HashTable
{
private:
    static const int size = 10;
    std::vector<std::list<int>> table;

    int hashFunction(int key)
    {
        return key % size;
    }

public:
    HashTable() : table(size) {}

    void insert(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    bool search(int key)
    {
        int index = hashFunction(key);
        for (int val : table[index])
            if (val == key)
                return true;
        return false;
    }
};

int main()
{
    HashTable ht;
    ht.insert(15);
    ht.insert(25);

    std::cout << "Exists: " << ht.search(15) << std::endl;
    return 0;
}
