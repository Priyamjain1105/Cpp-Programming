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
