# Object Oriented Programming
Binding the data and Function together and operate on them

## Type of Object Oriented Programming
  - 1. **Class**: It is a user defined datatype has its own (Data Member and Member Function), Which can be accessed and used by creating an instance of that class.
  - 2. **Object**:instance of class,  
                  memory get allocated when object of class is created.
  - 3. **Encapsulation**: Binding the data and functions that manipulate them
  - 4. **Abstraction**: Displaying only essential information and hinding the details.
  - 5. **Polymorphism**: Ability of a message to be displaced in more than one form  
        Operator Overloading  
        Function Overloading  

   - 6. **Inheritance:** derive properties and characterstics from another class is called inheritance

## Construtor and Destructor
Member function named as class, called when obj is created or destroyed.

## Acess Modifier
1. Public
2. Private
3. Protected

## Structure VS Class
_Class_: Members and base classes are **private by default**.  
_Structure_: Members and base classes are **public by default**.  
Note: Structure: Collection of dissimilar data

## Local Classes in C++
A class declared inside a function, (loacl to that function)

## C vs C++
1. C supports procedural programming, C++ is hybird (procedural and object oriented)
2. C dont have oops(polymorphism,encapsulation,inheritance), C++ has all of them
3. C contains 32 keywords, C++ Contains 52 keywords
4. C is Function driven language, C++ Object driven language
5. C doesnt have function and operator overloading, C++ supports both of them
6. C does'nt have exceptional handeling, C++ has it.

## Virtual Function and Runtime Polymorphism
**Virtual Function:** virtual keyword is used in a base class to indicate that a function is meant to be overridden in derived classes

**Runtime Polymorphism/dynamic polymorphism:** used with virtual function, allows function to behave differently based on the object that invokes it.

## Inline Function
it is a request not command, code is inserted to the line where it is called.
```
inline int example()
       {
         //code
       }
```
## Static Members in C++
### Static Variable 
1. **In Function:** Avariable declared as static, space for it get allocated for the life time of the program, even if the function is called multiple time the space for it is allocated once.  
2. **In Class:** initialised outside and declared inside the class, it belongs class as whole and not just obj.
```
class Account
{
  private:
      int balance; 
      static float roi;    //Declared inside the class
  public:
      void setBalance(int b)
           {
             balance = b;
           }

}

float Account:: roi = 3.5;  //Initialised outside the class
void main()
{
 Account a1
}
```

### Static Funtion in Class
Static members functions are allowed to use only static data member or other static member function 

### Static Object
Object can also be declared as static `static Account a1;`

   


