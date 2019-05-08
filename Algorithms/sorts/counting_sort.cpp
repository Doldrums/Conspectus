/**
 * Main idea of Counting Sort is creation of array, that contains, how often element appears in array. 
 * For example, array  [1,7,3,6,7,3,6,7] can be descriped in array  [1,0,2,0,0,2,3]
 * 
 * But if we use simple array, we can't contain negative number. Another idea is to use `std::map` for negative number.
 * 
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Selectional
 * 
 * USFCA Visualisation:     https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * Algostructure:           http://www.algostructure.com/sorting/selectionsort.php
 */

template <typename T>
void counting_sort(T *arr, T len)
{
    std::map<T, int> cnts;
    for (int i = 0; i < len; i++)
    {
        cnts[arr[i]]++;
    }

    int pos = 0;
    for (std::pair<T, int> elem : cnts)
    {
        for (int i = 0; i < elem.second; i++)
        {
            arr[pos] = elem.first;
            pos++;
        }
    }
}