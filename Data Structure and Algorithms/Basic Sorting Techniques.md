# Basic Sorting Techiniques
## Selection Sort
find the min element in the unsorted array and swap it with element in the beginning
```
int main()
{
    int t;
    int arr[5] = {5, 3, 6, 2, 4};

    int n = 5;
    cout << n << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])

            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}
```
