// https://leetcode-cn.com/problems/length-of-last-word/
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        istringstream f(s);
        string word;
        while (f >> word)
        {
            // cout << word << " ";
        }
        // cout << endl;
        return word.size();
    }
};

void test01()
{
    string s = "   fly me   to   the moon  ";
    // string s = "w ";
    cout << Solution().lengthOfLastWord(s) << endl;
    ;
};

int main()
{
    test01();
    return 0;
}