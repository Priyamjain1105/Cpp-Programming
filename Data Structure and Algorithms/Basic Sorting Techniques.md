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

## Bubble Sort
```
int main()
{
    int t;
    int arr[5] = {5, 2, 4, 1, 0};
    int n = 5;
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }

        }
        count++;
    }
}
```
## Insertion Sort
```
int main()
{
    int arr[5] = {2, 5, 1, 6, 3};
    int n = 5;
    int t;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (arr[j - 1] > arr[j] && j > 0)
        {
            t = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = t;
            j--;
        }
    }
```
