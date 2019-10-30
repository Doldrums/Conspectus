/**
 * Insertion Sort algorithm for array of elements with arbitrary type
 * Main idea is to split array into "sorted" and "unsorted" part.
 * Every iteration "sorted" part increases and "unsorted" decreases by one;
 * 
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Insertion
 *
 * USFCA Visualisation:          https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * Algostructure Visualisation:  http://www.algostructure.com/sorting/insertionsort.php
 */
template <typename T>
void insertion_sort(T *array, int len)
{
    for (int i = 1; i < len; i++)
    {
        T KEY = array[i];
        int j = i;
        while (j >= 1 && array[j - 1] > KEY)
        {
            array[j] = array[j - 1];
            j -= 1;
        }
        array[j] = KEY;
    }
}