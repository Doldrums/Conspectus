/**
 * Shell Sort algorithm for array of elements with arbitrary type
 * This is mod of Insertion sort, where array splits into a few parts with "gap" between them.
 *
 * Gap variants:
 * Sequence: g(i) = n / 2^i (gap on each iteration -> half of gap on previous iteration, initial cal - half of size)
 * Knuth Sequence: g(i) = 3 * i + 1
 * Marcin Ciura's Sequence A102549: 1, 4, 10, 23, 57, 132, 301, 701, 1750 
 * !(Numbers are experimentally derived, so defined only 9 elements of sequence)!
 *
 * EXAMPLE of partition (w/o sorting):
 * [9, 8, 7, 6, 5, 4, 3, 2, 1, 0] - Source Array
 *
 * GAP 5 (4 subarrays):
 * [9,  ,  ,  ,  , 4,  ,  ,  ,  ]
 * [ , 8,  ,  ,  ,  , 3,        ]
 * [ ,  , 7,  ,  ,  ,  , 2,  ,  ]
 * [ ,  ,  , 6,  ,  ,  ,  , 1,  ]
 * [ ,  ,  ,  , 5,  ,  ,  ,  , 0]
 *
 * GAP 2 (2 subarrays):
 * [9,  , 7,  , 5,  , 3,  , 1,  ]
 * [ , 8,  , 6,  , 4,  , 2,  , 0]
 *
 * GAP 1 ( 1 subarray:
 * [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
 *
 * For better understanding algorithm parted into 2 functions.
 * shell_sort(..) calls ig_sell_sort(..) with different gaps.
 *
 * @tparam  T      Arbitrary type of elements
 * @param   array  Array of sorting elements
 * @param   len    Length of provided array
 *
 * Speed: O(n^2)
 * Type: Insertion
 *
 * USFCA Visualisation:          https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html
 * Algostructure Visualisation:  http://www.algostructure.com/sorting/shellsort.php
 */
template <typename T>
void ig_sell_sort(T *array, int len, int gap)
{
    for (int i = 1; i < len; i++)
    {
        T KEY = array[i];
        int j = i;
        while (j >= gap && array[j - gap] > KEY)
        {
            array[j] = array[j - gap];
            j -= gap;
        }
        array[j] = KEY;
    }
}

template <typename T>
void shell_sort(T *array, int len)
{
    for (int gap = len / 2; gap > 0; gap /= 2)
    {
        ig_sell_sort(array, len, gap);
    }
}