# Vectors
Generally array is defined as `int a[5] = {1,2,3,4,5}` here we cannot modify the size of the array.  
Vectors containers used when we do not know the size of the particular data structure.  

## Defination
Library `#include <vector>`  
Defining `vector<int> v;` or `vector<int> v(5);`

## 1. Adding Element to Vectors
### i. General 
`v.push_back(2);` or `v.emplace_back(2);`
### ii. Inserting the Element to the vector of Pairs
`v.push_back({1,2});` or `v.emplace_back(1,2);`
### iii. Initialising a container filled with  lots of similar element
`vector<int>v(5,100);` where **5 is size** and **100 is the instace** of vector, will create `v = {100,100,100,100,100}`  
**Without any instance**: `vector<int> v(5);` -> `v = {0,0,0,0,0}`  
### iv. Copying/Appending one container to another container
Old vector: `vector<int> v(5,20);`  
New Vector with copy of old: `vector<int> v2(v);`

      
## 2. Accessing Elements in a Vector
### i. Same as Array
V [1] = 5
### ii. Iterators
Iterator points to the memory address, similar to pointers.
Syntax: 
```
vector<int>::iterator it = v.begin();
it++;
cout<< *(it) << endl;
```
### iii. Iterating through the Vector
a. Through for loop
   ```
   for(int i = 0; i < 3; i++){
   cout <<v[i];
   }
   ```
b. Through Iterator
   ```
   for(vector<int>::iterator it = v.begin())
   {
      if (it != v.end())
         {
           it++
         }
      cout<<*(it)<<" ";
   }

   ```
   Shortcut
   ```
   TRICK 1:
   for (auto it = v.begin(); it!=v.end();it++){
       cout << *(it) << endl;
   }

   TRICK 2:
   for(auto it:v){
      cout << it << endl;
   }
   ```

## 3. Working on Vector through functions
### 1. Delection in vector
`v.erase(v.begin()+1);`  
`v.erase(v.begin()+2,v.begin()+4);`

### 2. Inserting in vector
`v.insert( start, instances, variable)`

EXAMPLE:-  
`v.insert(v.begin(),300);`   v = {300,100,100}  
`v.insert( v.begin()+1, 2, 10);` v = {300, 10, 10, 100, 100}  

### 3. Extending one vector into another vector  

`v.insert(v.begin(), copied_vector.begin(), copied_vector.end())`
### 4. Getting the size of Vector
`v.size();`
### 5. Pop the element
`v.pop_back();` will pop the last element
### 6. Swapping Two Vector
`v1.swap(v2);`
### 7. Clearing or Empty the Vector
`v.clear()`:  will clear the entire vector  
`v.empty()`:  will check weather vector is empty





