/**
 * @brief Main idea of this algorithm is to cut off a half of *SORTED* array every iteration. 
 * Speed: O(log(n))
 * 
 * @tparam T    Arbitrary type of elements
 * @param a     Array of items
 * @param len   Length of array
 * @param elem  Searching element
 * @return int  Index of element in array
 */
template <typename T>
int binary_search(T *a, int len, T elem){
    int l, r, m;
    l = 0;
    r = len - 1;
    m = (l + r) / 2;
    while (l != r)
    {
        if (a[m] < elem)
            l = m + 1;
        else
            r = m;

        m = (l + r) / 2;
    }
    return l;
}