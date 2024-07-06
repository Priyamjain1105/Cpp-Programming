# Hashing
Problem: find how many times partcular element reapeats in an array
Brute force
```
   for( int i = 0; i <n; i++)
     {
      if( i == e)
         {
           count++;
         }
      }
   cout<< count;
```
Now what if there are 10^5 elements in an array then `O(10^5 x 10^5) = O(10^10)`  
In general cal speed in 10^8 /s so total time taken to perform these calculation is: 100 Seconds.  
_TO REDUCE THS TIME WE USE HASHING_

## Solving the Problem Through Hashing
`Hashing = Pre Storing  + Fetching`  
Pre-Storing
```
Example Array  = { 0, 2, 1, 2, 1, 1, 3}

Hash Array = { 0, 3, 2, 1}
Index:         0  1  2  3
```
Fetching is just printing the value of required index.  
The value stored in that particular index, represnts the no of times values have been repeated
