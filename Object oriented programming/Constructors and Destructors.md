# Constructors
Class member function (name same as class), automatically called when object is initialised, can be overloaded

## Types of Constructors
1. Default Constructor (without parameter)
2. Parameterized constructor
3. Copy constructor
   
# Destructor
Class member function (name same as class preceded by '~'), called when an object is destroyed

# Creation
```
class Example
{
  public:
      int value;

      // Constructor
      Example(int v)
           {
             value = v;
           }
     // Destructor
      ~Example()
           {
             //cleanup code here
           }
}      
```
