# Vectors
Generally array is defined as `int a[5] = {1,2,3,4,5}` here we cannot modify the size of the array.  
Vectors containers used when we do not know the size of the particular data structure.  

## Defination
Library `#include <vector>`  
Defining `vector<int> v;` or `vector<int> v(5);`

## Adding Element to Vectors
### 1. General 
`v.push_back(2);` or `v.emplace_back(2);`
### 2. Inserting the Element to the vector of Pairs
`v.push_back({1,2});` or `v.emplace_back(1,2);`
### 3. Initialising a container filled with  lots of similar element
`vector<int>v(5,100);` where **5 is size** and **100 is the instace** of vector, will create `v = {100,100,100,100,100}`  
**Without any instance**: `vector<int> v(5);` -> `v = {0,0,0,0,0}`  
### 4. Copying/Appending one container to another container
Old vector: `vector<int> v(5,20);`  
New Vector with copy of old: `vector<int> v2(v);`

