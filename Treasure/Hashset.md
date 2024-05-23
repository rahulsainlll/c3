### What is `unordered_map`?
`unordered_map` is an associative container that stores elements formed by the combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys. Internally, the elements are not sorted, but organized into buckets to allow fast access to individual elements directly by their key values.

### Key Characteristics:
- **Fast Access**: Average time complexity for insertions, deletions, and access is O(1).
- **Unordered**: Elements are stored in no particular order.
- **Unique Keys**: Each key is unique; if you insert a key that already exists, the previous value associated with that key will be replaced.

### Basic Operations:
1. **Insertion**
2. **Access**
3. **Deletion**
4. **Iteration**

### Header File
To use `unordered_map`, you need to include the `<unordered_map>` header.

### Basic Syntax

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // Declare an unordered_map
    unordered_map<string, int> ageMap;

    // Insert elements into the unordered_map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access elements
    cout << "Alice's age: " << ageMap["Alice"] << endl;

    // Check if a key exists and access it
    if (ageMap.find("Bob") != ageMap.end()) {
        cout << "Bob's age: " << ageMap["Bob"] << endl;
    }

    // Iterate over all elements
    for (const auto& pair : ageMap) {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }

    // Delete an element
    ageMap.erase("Charlie");

    // Check size of the unordered_map
    cout << "Number of elements: " << ageMap.size() << endl;

    return 0;
}
```

### Detailed Explanation:

1. **Declaration**:
    ```cpp
    unordered_map<string, int> ageMap;
    ```
    Declares an `unordered_map` where the keys are of type `string` and the values are of type `int`.

2. **Insertion**:
    ```cpp
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;
    ```
    Inserts key-value pairs into the map. If the key already exists, the value is updated.

3. **Access**:
    ```cpp
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    ```
    Accesses the value associated with the key "Alice".

4. **Check Existence**:
    ```cpp
    if (ageMap.find("Bob") != ageMap.end()) {
        cout << "Bob's age: " << ageMap["Bob"] << endl;
    }
    ```
    Uses `find` to check if "Bob" exists in the map. `find` returns an iterator to the element if it is found, or `ageMap.end()` if it is not.

5. **Iteration**:
    ```cpp
    for (const auto& pair : ageMap) {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }
    ```
    Iterates over all elements in the map and prints them.

6. **Deletion**:
    ```cpp
    ageMap.erase("Charlie");
    ```
    Removes the element with the key "Charlie" from the map.

7. **Size**:
    ```cpp
    cout << "Number of elements: " << ageMap.size() << endl;
    ```
    Returns the number of key-value pairs in the map.

### Example of More Complex Operations:

#### Counting Frequencies of Words

```cpp
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words = {"apple", "banana", "apple", "cherry", "banana", "apple"};

    unordered_map<string, int> wordCount;

    for (const auto& word : words) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        cout << pair.first << " appears " << pair.second << " times." << endl;
    }

    return 0;
}
```

In this example:
- We use an `unordered_map` to count the frequency of each word in a vector.
- The key is the word, and the value is the count of how many times the word appears.

### Performance Considerations
- **Average Complexity**: O(1) for insert, delete, and find operations.
- **Worst Case Complexity**: O(n) if many elements hash to the same bucket, leading to collisions.

### When to Use `unordered_map`:
- When you need fast access to elements using keys.
- When the order of elements is not important.
- When you have a large number of insertions, deletions, and lookups.

### When Not to Use `unordered_map`:
- When you need to maintain elements in a sorted order (consider `map` for that purpose).
- When you have a small dataset and the overhead of hashing is not justified.

By understanding these basics and applying them, you can effectively utilize `unordered_map` in your C++ programs for efficient key-value storage and retrieval.



































# unordered_set

n C++, a hash set is implemented using the unordered_set container from the Standard Template Library (STL). The unordered_set is a collection that contains unique elements, which means no duplicate values are allowed, and it provides average time complexity of O(1) for insertion, deletion, and lookup operations.

### Key Characteristics of `unordered_set`:
- **Unique Elements**: Each element in the `unordered_set` must be unique.
- **Unordered**: The elements are stored in no particular order.
- **Fast Operations**: Average time complexity of O(1) for insertions, deletions, and lookups.

### Header File
To use `unordered_set`, you need to include the `<unordered_set>` header.

### Basic Syntax

```cpp
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    // Declare an unordered_set
    unordered_set<string> mySet;

    // Insert elements into the unordered_set
    mySet.insert("apple");
    mySet.insert("banana");
    mySet.insert("cherry");

    // Attempt to insert a duplicate element
    mySet.insert("apple"); // This will not be inserted as "apple" is already in the set

    // Check if an element exists in the set
    if (mySet.find("banana") != mySet.end()) {
        cout << "banana is in the set." << endl;
    } else {
        cout << "banana is not in the set." << endl;
    }

    // Iterate over all elements
    cout << "Elements in the set:" << endl;
    for (const auto& element : mySet) {
        cout << element << endl;
    }

    // Remove an element
    mySet.erase("cherry");

    // Check the size of the set
    cout << "Number of elements: " << mySet.size() << endl;

    return 0;
}
```

### Detailed Explanation:

1. **Declaration**:
    ```cpp
    unordered_set<string> mySet;
    ```
    Declares an `unordered_set` where the elements are of type `string`.

2. **Insertion**:
    ```cpp
    mySet.insert("apple");
    mySet.insert("banana");
    mySet.insert("cherry");
    ```
    Inserts elements into the set. If an element already exists, it will not be inserted again.

3. **Check Existence**:
    ```cpp
    if (mySet.find("banana") != mySet.end()) {
        cout << "banana is in the set." << endl;
    }
    ```
    Uses `find` to check if an element exists in the set. `find` returns an iterator to the element if it is found, or `mySet.end()` if it is not.

4. **Iteration**:
    ```cpp
    for (const auto& element : mySet) {
        cout << element << endl;
    }
    ```
    Iterates over all elements in the set and prints them.

5. **Deletion**:
    ```cpp
    mySet.erase("cherry");
    ```
    Removes the element with the value "cherry" from the set.

6. **Size**:
    ```cpp
    cout << "Number of elements: " << mySet.size() << endl;
    ```
    Returns the number of elements in the set.

### Example of a More Complex Operation:

#### Removing Duplicates from a Vector

```cpp
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> removeDuplicates(const vector<int>& nums) {
    unordered_set<int> uniqueElements(nums.begin(), nums.end());
    return vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};

    vector<int> uniqueNums = removeDuplicates(nums);

    cout << "Unique elements: ";
    for (int num : uniqueNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

In this example:
- We use an `unordered_set` to remove duplicates from a vector.
- The `unordered_set` automatically handles duplicates because it only allows unique elements.
- We convert the `unordered_set` back to a vector to return the result.

### Performance Considerations
- **Average Complexity**: O(1) for insert, delete, and find operations.
- **Worst Case Complexity**: O(n) if many elements hash to the same bucket, leading to collisions.

### When to Use `unordered_set`:
- When you need a collection of unique elements.
- When the order of elements is not important.
- When you need fast insertions, deletions, and lookups.

### When Not to Use `unordered_set`:
- When you need to maintain elements in a sorted order (consider `set` for that purpose).
- When you have a small dataset and the overhead of hashing is not justified.

### Summary
`unordered_set` is a powerful tool in C++ for managing collections of unique elements with efficient operations. By understanding its characteristics and common usage patterns, you can leverage `unordered_set` for a wide range of applications requiring fast and unique element management.