# Vectors
General array is defined as `int a[5] = {1,2,3,4,5}` here we cannot modify the size of the array.  
Vectors containers used when we do not know the size of the particular data structure.  

## Defination
Library `#include <vector>`  
Defining `vector<int> v;` or `vector<int> v(5);`

## Adding Element to Vectors
`v.push_back(2);` or `v.emplace_back(2);`
### Inserting the Element to the vector of Pairs
`v.push_back({1,2});` or `v.emplace_back(1,2);`
### Initialising a container filled with  lots of similar element
`vector<int>v(5,100);` where **5 is size** and **100 is the instace** of vector
Will create `{100,100,100,100,100}`

