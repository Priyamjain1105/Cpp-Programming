# Deque (Double ended Queue)
Similar to Vector and List, different fearture is front pop, dq.back(), dq.front()

## Defination
`deque<int>dq`  
## Operation's
Push Operation    
`dq.push_back(1);` and `dq.emplace_back(2);`  
`dq.push_front(1);` and `dq.emplace_front(2);`  

Pop Operation  
`dq.pop_back();`  
`dq.pop_front();`  

Front and Back reference  
`dq.front();`  : is the reference of deque front element, which can also be changed with `dq.front = 5;`  
`dq.back();`   : is the reference of deque last element, which can also be chaged with `dq.back = 1;`  

### Other Operation's
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
