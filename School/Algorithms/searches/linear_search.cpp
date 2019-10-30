/**
 * @brief Typical search algorithm 
 * Speed: O(n)
 * 
 * @tparam T    Arbitrary type of elements
 * @param a     Array of elements
 * @param len   Length of array
 * @param elem  Searching element
 * @return int  Position of element in array
 */

template <typename T>
int linear_search(T* a, int len, T elem) {
    for (int i = 0; i < len; i++)
        if (a[i] == elem)
            return i;
    return -1;
};