#include <iostream>
using namespace std;

const int ALPHABET_SIZE = 26;

class TrieNode
{
public:
    TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;

    TrieNode()
    {
        isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            children[i] = nullptr;
    }
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string key)
    {
        TrieNode *node = root;
        for (char c : key)
        {
            int index = c - 'a';
            if (!node->children[index])
                node->children[index] = new TrieNode();
            node = node->children[index];
        }
        node->isEndOfWord = true;
    }

    bool search(string key)
    {
        TrieNode *node = root;
        for (char c : key)
        {
            int index = c - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return node->isEndOfWord;
    }

    bool startsWith(string prefix)
    {
        TrieNode *node = root;
        for (char c : prefix)
        {
            int index = c - 'a';
            if (!node->children[index])
                return false;
            node = node->children[index];
        }
        return true;
    }
};

int main()
{
    Trie trie;
    trie.insert("apple");
    trie.insert("app");

    cout << "Search 'apple': " << trie.search("apple") << endl;
    cout << "Search 'app': " << trie.search("app") << endl;
    cout << "Search 'appl': " << trie.search("appl") << endl;
    cout << "Starts with 'app': " << trie.startsWith("app") << endl;
    cout << "Starts with 'apl': " << trie.startsWith("apl") << endl;

    return 0;
}
