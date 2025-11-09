# String
- Anything thats enclosed in double quotes is string "strings"
- Before String comes the concept of character Array (C-String)
- ```cpp
 char str[] = {'a','b','c'}
```
- There is a special property in C++ that we can store the string, pharases etc into character arr in c++ under special format
```cpp
 char str[] = {'a','b','c','\0'}
 cout << str << endl; //constant pointer
 cout << strlen(str) << endl; //prints the string length
```
- here the character array will convert into the single string through the `\0`, which is an special null character

