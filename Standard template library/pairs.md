# Pairs
Pairs are utility class template provided by standerd library, that allows you to store pair of values, values can be of different types.

Normal Pair
```
pair<int,int>p = {1,3};
cout<<p.first<<" "p.second;

Output:
1 3
```
Pair inside a Pair
```
pair<int,pair<int,int>>p = {1,{3,4}};
cout<<p.first<<" "<p.second.second<<" "<<p.second.first;

Output:
1 4 3
```

Pair Array
```
pair<int,int>arr[] = {{1,2},{2,5},{5,1}};
cout << arr[1].second;

Output:
5
```
