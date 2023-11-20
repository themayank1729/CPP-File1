class Solution
{
public:
    int findComplement(int num)
    {
        // edge case
        if (num == 0)
        {
            return 1;
        }

        int m = num;
        int mask = 0;

        while (num != 0)
        {
            num = num >> 1;
            mask = (mask << 1) | 1;
        }
        int ans = mask & (~m);
        return ans;
    }
};