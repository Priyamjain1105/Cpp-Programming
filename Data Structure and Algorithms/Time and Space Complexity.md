# Time Complexity 
θ = Rate of increase in time takes with respect to input size.    
Time complexity is return in terms of Big-O Notation `O( total steps)`  
Example
```
for(int i =1; i<=5;i++)
   {
     cout<<"Raj";
   }
```
```
STEP 1: i = 1
STEP 2: i <= 5
STEP 3: Raj
STEP 4: i++       i = 2
STEP 5: i <= 5
STEP 6: Raj
STEP 7: i++       i = 3
STEP 8: i<=5
STEP 9: Raj
STEP 10: i++      i = 4
STEP 11: i<=5
STEP 12: Raj
STEP 13: i++      i = 5
STEP 14: i <= 5
STEP 15: Raj
```
Formula:  `No of loop its running x Steps per loop`  
In above example: 5 x 3 = 15 => `O(15)`  

## NOTE
1. Time Complexity is measured in worst case seneraio
2. Avoid Constants    (With large input size constants have no value)
3. Avoid Lower Values (The values which does not have much significance)

Example: `O( N x 10^15 + N x 10^10 + 8)`  
Here Constant `8` has no value and `N x 10^10` has much less value compared to **N x 10^15** so the answer will be: `O(N x 10^15)`

