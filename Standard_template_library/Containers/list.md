# List
Similar to [Vector](Vectors.md), difference is it provide front operations.  

## Defination
`list<int> ls;`
## Operation
`ls.push_back(2);` or `ls.emplace_back(4);`  : Back Opertions   
`ls.push_front(2);` or `ls.emplace_front(4);`  : front Opertions    
Reason: Insert in vector is much more costly in terms of space and time complexity   
### Other Operations
```
begin
end
rbegin
rend
clear
insert
size
swap
```


