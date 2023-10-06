<h1> 0x1A. C - Hash tables </h1>
 
 A dictionary is a general concept that maps keys to values. There are many ways to implement such a mapping.

 A hashtable is a specific way to implement a dictionary.
 Hash tables, also known as hash maps, are data structures that allow you to store and retrieve data quickly based on a key. They are used for efficient data storage, retrieval, and searching. Hash tables use a technique called hashing to map keys to indices in an array, where the associated values are stored. This mapping allows for fast access to values based on their keys.
 Here's a basic overview of how hash tables work:

Hashing: Hashing is a process of converting a key (e.g., a string or number) into an index within the array. This index is typically computed using a hash function, which takes the key as input and produces a unique or near-unique index as output.

Array: Hash tables use an array to store key-value pairs. Each element of the array is often referred to as a "bucket" or a "slot."

Collision Handling: Since multiple keys can sometimes hash to the same index (collision), hash tables need a mechanism to handle collisions. There are various collision resolution strategies, such as chaining (using linked lists) or open addressing (probing techniques).

Here's a basic example of a hash table in Python using a dictionary:
# Creating a simple hash table (dictionary) in Python
hash_table = {}

# Inserting key-value pairs
hash_table['name'] = 'John'
hash_table['age'] = 30
hash_table['city'] = 'New York'

# Retrieving values based on keys
print(hash_table['name'])  # Output: John
print(hash_table['age'])   # Output: 30
print(hash_table['city'])  # Output: New York
In this example, a Python dictionary is used as a hash table. The keys ('name', 'age', 'city') are hashed to unique indices, and the associated values can be quickly retrieved using these keys.

Now, let's differentiate between hash tables and dictionaries:

Hash Table:

A general data structure concept that refers to the underlying data structure that uses hashing for efficient data retrieval.
In some programming languages, you may need to implement your own hash table from scratch.
Provides the basic building blocks for creating associative arrays (key-value pairs).
Dictionary:

A specific implementation of a hash table in Python and some other programming languages.
In Python, dictionaries are built-in and easy to use, allowing you to work with key-value pairs without implementing your own hash table.
Dictionaries are highly flexible and widely used in Python for tasks like storing configuration settings, caching data, and more
    
<h2>what is djb2 Algorithm</h2>
The DJB2 (Dan Bernstein's hash function, version 2) algorithm is a widely used non-cryptographic hash function designed by Daniel J. Bernstein. It's a simple and efficient algorithm that takes an input string and produces a hash code, which is typically a 32-bit or 64-bit unsigned integer. DJB2 is known for its simplicity and good distribution properties, making it suitable for various applications such as hash tables and data indexing.

Here's the DJB2 hash function in C:

c
Copy code
unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }

    return hash;
}
Here's how the DJB2 hash function works:

It initializes a hash value (hash) to an arbitrary constant (5381 is a commonly used constant).

It processes each character in the input string one by one. For each character c, it updates the hash as follows:

Left-shift the current hash value by 5 bits (hash << 5).
Add the current hash value to the result of the left shift.
Add the ASCII value of the character c to the updated hash value.
Repeat this process for each character in the input string.

Finally, return the resulting hash value.

The DJB2 algorithm is known for its simplicity and speed, making it a popular choice for implementing hash tables and other data structures. However, it's important to note that DJB2 is not suitable for cryptographic purposes, as it's designed for speed rather than security. For cryptographic applications, you should use cryptographic hash f
