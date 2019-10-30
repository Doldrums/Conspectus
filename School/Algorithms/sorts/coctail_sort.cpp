/**
 * Coctail Sort algorithm for array of elements with arbitrary type.
 * This is mod of Bubble Sort, which every iteration "ligher" element goes to end and "heaviest" goes to begin
 *
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Exchange
 *
 * Algostructure Visualisation:  http://www.algostructure.com/sorting/cocktailsort.php
 */
template <typename T>
void coctail_sort(T* array, int len) {
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        for (int i = left; i < right; i++)
            if (array[i] > array[i + 1])
                std::swap(array[i], array[i + 1]);
        right--;
        for (int i = right; i > left; i--)
            if (array[i] < array[i - 1])
                std::swap(array[i], array[i - 1]);
        left++;
    }
}
