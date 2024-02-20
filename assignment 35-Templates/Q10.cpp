// Write a C++ program to implement Hash Table using Template Class.

#include <iostream>
#include <vector>

// Define the HashNode class to store key-value pairs
template <typename K, typename V>
class HashNode
{
public:
    K key;
    V value;
    HashNode *next;

    HashNode(const K &k, const V &v) : key(k), value(v), next(nullptr) {}
};

// Define the HashTable class
template <typename K, typename V>
class HashTable
{
private:
    std::vector<HashNode<K, V> *> table;
    size_t tableSize;

    // Helper function to calculate the hash index for a given key
    size_t getHashIndex(const K &key) const
    {
        std::hash<K> hasher;
        return hasher(key) % tableSize;
    }

public:
    HashTable(size_t size) : tableSize(size)
    {
        table.resize(tableSize, nullptr);
    }

    ~HashTable()
    {
        for (size_t i = 0; i < tableSize; ++i)
        {
            HashNode<K, V> *current = table[i];
            while (current)
            {
                HashNode<K, V> *temp = current;
                current = current->next;
                delete temp;
            }
        }
    }

    // Function to insert a key-value pair into the hash table
    void insert(const K &key, const V &value)
    {
        size_t index = getHashIndex(key);
        HashNode<K, V> *newNode = new HashNode<K, V>(key, value);

        if (!table[index])
        {
            table[index] = newNode;
        }
        else
        {
            HashNode<K, V> *current = table[index];
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to retrieve the value associated with a given key
    bool get(const K &key, V &value) const
    {
        size_t index = getHashIndex(key);
        HashNode<K, V> *current = table[index];

        while (current)
        {
            if (current->key == key)
            {
                value = current->value;
                return true;
            }
            current = current->next;
        }

        return false;
    }

    // Function to remove a key-value pair from the hash table
    bool remove(const K &key)
    {
        size_t index = getHashIndex(key);
        HashNode<K, V> *current = table[index];
        HashNode<K, V> *prev = nullptr;

        while (current)
        {
            if (current->key == key)
            {
                if (prev)
                    prev->next = current->next;
                else
                    table[index] = current->next;

                delete current;
                return true;
            }
            prev = current;
            current = current->next;
        }

        return false;
    }
};

int main()
{
    // Example usage of the HashTable with integer keys and string values
    HashTable<int, std::string> myHashTable(10);

    myHashTable.insert(1, "Alice");
    myHashTable.insert(2, "Bob");
    myHashTable.insert(11, "Charlie"); // Hash collision with key 1

    std::string value;
    if (myHashTable.get(2, value))
    {
        std::cout << "Value for key 2: " << value << std::endl;
    }
    else
    {
        std::cout << "Key 2 not found." << std::endl;
    }

    myHashTable.remove(1);

    return 0;
}
