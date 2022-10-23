/* 

    A group of college students has a tradition that when they eat out in a group, one of them pays for everyone's dinners. Now that the students are getting ready to graduate, they want to come up with a schedule to make sure that no one has paid for more dinners than they have received.

Consider an example where Alice has bought dinner for Bob, and Bob has bought dinner for Chuck and Dave. If Chuck buys dinner for Alice and Dave buys dinner for Bob, then everyone has paid for the same number of dinners as they have received.

For each input, you must calculate:

The minimum number of meals that must be bought on behalf of another individual so that everyone has received the same number of dinners that they paid for.
The minimum number of days that it will take to reach the point that no one has paid for more dinners than they have eaten, given that a person can eat at most one dinner per day. Note that a person can buy any number of dinners for others on a single day.
Standard input
The first line of input contains a single integer TT, the number of test cases.

Each test case begins with an integer MM, which gives the number of meals that have been occurred.

Each of the following MM lines describes a meal. The first value is a string that gives the name of the person who paid for the meal. Then there is an integer NN which gives the number of other people who ate at that dinner. The following NN values are the names of the people whose dinner was paid for. Each of the values is separated by a space.

Standard output
For each testcase, output one line with two values, separated by a space:

The minimum number of meals that must be bought so that everyone has received the same number of dinners that they paid for.
The minimum number of days that it will take to reach this point.

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        map<string, int> mp;
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            int n;
            cin >> n;
            for (int j = 0; j < n; j++)
            {
                string s1;
                cin >> s1;
                mp[s1]--;
            }
        }
        int min = INT_MAX;
        int max = INT_MIN;
        for (auto i : mp)
        {
            if (i.second < min)
            {
                min = i.second;
            }
            if (i.second > max)
            {
                max = i.second;
            }
        }
        cout << abs(min) << " " << max << endl;
    }
}