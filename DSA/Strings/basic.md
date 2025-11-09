# String
- Anything thats enclosed in double quotes is string "strings"
- Before String comes the concept of character Array (C-String)
    ```cpp
    char str[] = {'a','b','c'}
    ```

## Character Array
- There is a special property in C++ that we can store the string, pharases etc into character arr in c++ under special format
    ```cpp
    char str[] = {'a','b','c','\0'}
    cout << str << endl; //constant pointer
    cout << strlen(str) << endl; //prints the string length
    ```
- here the character array will convert into the single string through the `\0`, which is an special null character

- We can also assign the strings directly to the char array, here `\0` gets explicitely added to the end
    ```cpp
        char str[] = "hello"
        cout << str << endl; //constant pointer
        cout << strlen(str) << endl; //prints the string length
    ```
    | 0 | 1 | 2  | 3 | 4  | 5
    |:-:|:- |:- | :- |:- |:- |
    |h  |e  |l  |l   |o  |\0 |

 - ### Input and output in char Array
   - If there is no initialisation we just have to assign some size to the char array
    ```cpp
    int main (){
        char str(100);

        cout<< "Enter char array";
        cin >> str;
        cout<< "Output" << str << endl;
        return 0
    }
    ```
    **Notice:** when we take in string input through `cin` then  word after the space gets deleted example "Hello World" -> "Hello" to handle this we use `cin.getline(str,len,delim?)`
    | str | size | delimiter  |
    |:-:  |:-    |:-      | 
    |str variable|100| `\n`|

    ```cpp
     char str(100);
     cout << "Enter Char Array:";
     cin.getline(str, 100, '$');

     cout <<"Output:"<< str << endl;

    ```

    - Delimeter in programming is something that stops the input
    - Here delimeter is nextline char `$`, But the default is `\n`, and when it got that it stopped taking input

    ##### Printing it using loop
    ```cpp
    cout << "enter char array:";
    cin.getline(str,100);
    for(char ch: str){
        cout << ch << " ";
    }
    cout << endl;
    ```

    ##### Measuring the length
    ```cpp
     char str[] = "apna college"
     int len = 0;

     for (int i = 0; i<str[i]!='\0';i++){
        len++;
     }

     cout<< "length of the string:" << len << endl;
     
    ```
    
---
- `strlen(str)` is used to measure the length of the string
---
## Strings in C++
- Above the Char Array there is the advanced version which we call string in c++, cause there are lot of limitations in char that are overcomed through string very easily 
- C++ STL provides us String template ( a class of which we can create the obj)
- Here string are Dynamic in nature cause they can be resized during the runtime, which is not possible in the char array
    ```cpp
    string str;
    str = "Apna College";
    cout << str << endl;
    ```
- Here string also supports lots of operators
  Concatenating
  ```cpp
  string str1;
  string str2;
  string str3 = str1+str2; //concatenation
  cout << str3 << endl;
  ```
  ---
  Checking the equality
  ```cpp
  string str1 = "hello";
  string str2 = "hello";
  cout << (str1 == str2) << endl;
  ```
  Output: `1`
it compares lexigraphically both the strings
