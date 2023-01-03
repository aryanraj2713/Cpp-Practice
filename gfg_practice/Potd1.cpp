class Solution
{
public:
    void precompute()
    {
        //blank
    }

    long long solve(long long l, long long r, long long num = 0, int set_bits = 0, int pos = 0)
    {
        if (set_bits > 3)
            return 0;
        if (pos == 60)
            return (set_bits == 3 && num >= l && num <= r);
        return solve(l, r, num | (1LL << pos), set_bits + 1, pos + 1) + solve(l, r, num, set_bits, pos + 1);
    }


};