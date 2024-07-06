# Priority Queue
Inside the priority queue a tree data structure is maintained, the data is not stored in linear fashion

## Max Priority Queue/ Max Heap
The element with larger value (lexographically) will stay on the top
### Defination
`priority_queue<int>pq;`
### Example 
{2,5,8,10}  
`cout<<pq.top()` will print `10`
## Min Priority Queue/ Min Heap
The elements with min value (lexographically) will stay on the top
### Defination 
`priority_queue< int,vector<int>,greater<int> >pq;`
**### Example 
{2,5,8,10}  
`cout<<pq.top()` will print `2`
