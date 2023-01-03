long long maxArea(long long A[], int len)
{
    long long max_area = 0;
    int left = 0;
    int right = len - 1;

    while (left < right)
    {
        max_area = std::max(max_area, std::min(A[left], A[right]) * (right - left));
        if (A[left] < A[right])
        {
            left += 1;
        }
        else
        {
            right -= 1;
        }
    }

    return max_area;
}