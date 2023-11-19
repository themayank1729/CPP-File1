class Solution
{ // use #include<climits>
public:
    int reverse(int x)
    {
        long int ans = 0;
        while (x != 0)
        {
            int a = x % 10;
            if ((ans > (INT_MAX / 10)) || (ans < (INT_MIN / 10)))
            {
                return 0;
            }
            ans = (ans * 10) + a;
            x = x / 10;
        }
        return ans;
    }
};
