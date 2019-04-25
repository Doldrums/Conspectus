/**
 * Comb Sort algorithm for array of elements with arbitrary type.
 * This is mod of Bubble Sort, which got "gap" between compared elements.
 * Gap decreases every iteration with "shrink factor", which commonly equals 1.3
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
void comb_sort(T* array, int len) {
    double shrink_factor = 1.3;
    int gap = len - 1;

    while (gap >= 1) {
        for (int i = 0; i < len - gap; i++)
            if (array[i] > array[i + gap])
                std::swap(array[i], array[i + gap]);
        gap = gap / shrink_factor;
    }
}