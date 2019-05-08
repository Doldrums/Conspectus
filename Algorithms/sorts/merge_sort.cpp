/**
 * Main idea of Merge Sort is literally implementation of "Divide And Conquer", 
 * while source array splits into two subarrays, subarrays splits to another subarrays, and so on. 
 * After splitting subarrays sorts using any simple algorithm 
 * (or not using, if size of subarrays is 1) and merges. 
 * In one call of merge_arrs only 2 subarrays can be splited.
 * 
 * merge_sort
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   l      Start of sequence to sort
 * @param   r      End of sequence to sort
 *
 * merge_arrs
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   lb     Start of merging sequence
 * @param   ub     End of merging sequence
 * @param   split  Point of squences division
 * 
 * Speed: O(n*log(n))
 * Type: Not classified
 * 
 * USFCA Visualisation:     https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * Algostructure:           http://www.algostructure.com/sorting/selectionsort.php
 */

template <typename T>
void merge_arrs(T *array, int lb, int split, int ub) {
    int p1 = lb;        // Pointer to stat of unmerged part in left part
    int p2 = split + 1; //.                             right part
    int pos = 0;        // Pointer to first free position in merged array

    // Temporary array, which will contain array after merge
    T *tmp = new int[ub - lb + 1];

    // Merging arrays, while one of them is not merged
    while (p1 <= split && p2 <= ub) {
        if (array[p1] < array[p2]) {
            tmp[pos] = array[p1];
            p1++;
        } else {
            tmp[pos] = array[p2];
            p2++;
        }
        pos++;
    }

    // Moving last elements into resulting array
    while (p2 <= ub) {
        tmp[pos] = array[p2];
        pos++;
        p2++;
    }
    while (p1 <= split) {
        tmp[pos] = array[p1];
        pos++;
        p1++;
    }

    // Overwriting of source array with merged array
    for (pos = 0; pos < ub - lb + 1; pos++)
        array[lb + pos] = tmp[pos];

    // Free memory, used for tmp
    delete[] tmp;
}

template <typename T>
void merge_sort(T *array, int l, int r) {
    int splitPos;
    if (l < r) {
        // Recursively splits array into small parts
        splitPos = (l + r) / 2;
        merge_sort(array, l, splitPos);
        merge_sort(array, splitPos + 1, r);
        // Merge 2 already sorted parts
        merge_arrs(array, l, splitPos, r);
    }
}