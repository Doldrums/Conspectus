/**
 * Selection sort splits source array into two parts: sorted and unsorted. 
 * Initial size of unsorted part is 0. 
 * Every iteration sorted part increases by 1 with minimal value in unsorted part.
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

template<typename T>
void selection_sort(T *array, T len) {
    for (int i = 0; i < len - 1; i++) {
        int minIndex = i;

        for (int k = i + 1; k < len; k++)
            if (array[k] < array[minIndex])
                minIndex = k;
        
        if (minIndex != i)
            std::swap(array[minIndex], array[i]);
    }

}