/**
 * Quick Sort algorithm for array of elements with arbitrary type.
 * This recursive algorithm splits an array into two parts (big values and small values)
 * Then algorithm recursively calls for each part.
 * When array splits into N parts with one element, array is sorted.
 *
 * For better understanding algorithm splitted into two functions - partition and calls.
 *
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of elements
 * @param   len    Length of provided array
 *
 * Speed: O(n*log(n)) !(In rare cases could be O(n^2))!
 * Type: Exchange
 *
 * USFCA Visualisation:     https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * VisuAlgo Visualisation:  https://visualgo.net/en/sorting
 */

/**
 * qs_partition splits array into two parts with "big" and "small" values (relatively for "pivot")
 * @tparam  T    Arbitrary type of element
 * @param   arr  Array of elements
 * @param   l    Pointer to start of subarray
 * @param   r    Pointer to end of subarray
 * @return       Index of last "small" element
 */
template <typename T>
int qs_partition(T *arr, int l, int r)
{
    int pivot = arr[(l + r) / 2];
    int i = l;
    int j = r;
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i >= j)
            break;
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return j;
}

template <typename T>
void quick_sort(T *arr, int l, int r)
{
    if (l < r)
    {
        int q = qs_partition(arr, l, r);
        quick_sort(arr, l, q);
        quick_sort(arr, q + 1, r);
    }
}