template <typename ARR, typename EL>
int linear_search(ARR *a, int len, EL elem)
{
    for (int i = 0; i < len; i++)
        if (a[i] == elem)
            return i;
    return -1;
}