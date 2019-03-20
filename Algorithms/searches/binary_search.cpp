template <typename ARR, typename EL>
int binary_search(ARR *a, int len, EL elem)
{
    int l, r, m;
    l = 0;
    r = len - 1;
    m = (l + r) / 2;
    while (l != r)
    {
        if (a[m] < elem)
            l = m + 1;
        else
            r = m;

        m = (l + r) / 2;
    }
    return l;
}