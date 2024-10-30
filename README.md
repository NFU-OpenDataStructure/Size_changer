# Size_changer

執行階段改變陣列大小示範程式。

```cpp
void change_size(int *&arr, int size, int new_size) {
    int *new_arr = new int[new_size];
    int *recycler = arr;
    copy(arr, arr + size, new_arr);

    // Increase every elements by size.
    for (int i = 0; i < new_size; i++) new_arr[i] += new_size;

    delete[] recycler;
    arr = new_arr;
}
```

## Build

```shell
g++ main.cpp size_changer.cpp -O2 --std=c++20
```

## License

Licenced under the [MIT licnese](./LICENSE).
