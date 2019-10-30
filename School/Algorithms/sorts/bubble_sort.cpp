/**
 * Bubble Sort algorithm for array of elements with arbitrary type
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Exchange
 * 
 * USFCA Visualisation:     https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * Visualgo Visualisation:  https://visualgo.net/en/sorting
 */
template <typename T>
void bubble_sort(T *array, int len)
{
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len - i - 1; j++)
            if (array[j] > array[j + 1])
                std::swap(array[j], array[j + 1]);
}
