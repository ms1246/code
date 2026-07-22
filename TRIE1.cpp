#include "lazy/utils.hpp"

class Trie
{
public:
    Trie *children[26] = {nullptr}; // for 26 letters in the alphabet (we are only using lowercase)
    bool isLeaf;
    Trie()
    {
        isLeaf = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr; // defaults to nullptr
        }
    }
    void Insert(std::string word)
    {
        Trie *curr = this;
        for (auto &&c : word)
        {
            if (curr->children[c - 'a'] == nullptr)
            {
                Trie *newTrie = new Trie();
                curr->children[c - 'a'] = newTrie;
            }
            curr = curr->children[c - 'a'];
        }

        curr->isLeaf = true;
    }
    bool Seach(std::string word)
    {
        Trie *curr = this; // we start from the null root
        for (auto &&c : word)
        {
            if (curr->children[c - 'a'] == nullptr)
                return false;
            curr = curr->children[c - 'a'];
        }

        return curr->isLeaf;
    }
    bool StartsWith(std::string word)
    {
        Trie *curr = this; // we start from the null root
        for (auto &&c : word)
        {
            if (curr->children[c - 'a'] == nullptr)
                return false;
            curr = curr->children[c - 'a'];
        }

        return true;
    }

    void printTree(Trie *node, std::string prefix = "", char ch = '*')
    {
        if (node == nullptr)
            return;

        std::cout << prefix << ch;
        if (node->isLeaf)
            std::cout << " (word)";
        std::cout << '\n';

        for (int i = 0; i < 26; i++)
        {
            if (node->children[i])
                printTree(node->children[i], prefix + "  ", 'a' + i);
        }
    }
};

int main(int argc, char const *argv[])
{
    out("Initializing the trie");
    Trie trie = Trie();
    out("Inserting apple in the trie");
    // trie.Insert("app");
    trie.Insert("apple");
    // trie.Insert("dog");
    // trie.Insert("dogod");
    // trie.Insert("doggy");
    // trie.Insert("desk");
    // trie.Insert("desktop");
    out("Searching for apple in the trie");
    out(yesno(trie.Seach("apple")));
    out("Searching for app in the trie with StartsWith");
    out(yesno(trie.StartsWith("app")));

    // trie.printTree(&trie);
    return 0;
}