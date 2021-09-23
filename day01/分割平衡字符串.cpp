class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int curSum = 0, cnt = 0;
        for (string ::iterator i = s.begin(); i != s.end(); i++)
        {
            *i == 'L' ? curSum++ : curSum--;
            if (!curSum)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
