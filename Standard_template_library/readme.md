# Standard Template Library
## Containers
Containers are data structures that are preimplemented in C++
```
                      TYPES

SEQUENTIAL            ORDERED        UNORDERED

 Vector                Map          Unordered map
 Stacks               Multimap      Unordered set
 Queue                 Set
 Pair                Multiset

```
### Nested Containers
Containers Inside Containers
```
Example
vector< vector<int> >
map< int, vector<int> >
set< pair, <int,string>>
vector< map< int, set<int> > >
```

## Iterators
  Points to the memory address of the containers  
  for Beginning: `begin()`  
  for End:`end()`  
  loop: `vector <int> :: iterator it;`  
  
## Algorithms
Predefined algorithms that are used, written in most optimised way.
```
upper_bound
lower_bound
sort(comparator)
max_element
min_element
accumulator (sum of array)
reverse
count
find
```

## Functions
### Functors
classes that can ber used as function
