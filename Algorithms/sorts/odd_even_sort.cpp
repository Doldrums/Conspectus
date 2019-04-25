/**
 * Odd-Even Sort algorithm for array of elements with arbitrary type.
 * This is mod of Bubble Sort, where odd and even elements compares independently
 *
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Exchange
 *
 * Algostructure Visualisation:  http://www.algostructure.com/sorting/oddevensort.php
 */
template <typename T>
void odd_even_sort(T *array, int len)
{
    for (int i = 0; i < len - 1; i++)
        if (i % 2 == 0)
            for (int j = 2; j < len; j += 2)
                if (array[j] < array[j - 1])
                    std::swap(array[j], array[j - 1]);
                else
                    for (int j = 1; j < len; j += 2)
                        if (array[j] < array[j - 1])
                            std::swap(array[j], array[j - 1]);
}