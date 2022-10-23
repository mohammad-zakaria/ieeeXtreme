#include<bits/stdc++.h>
using namespace std;


/* 
This problem was co-authored by Huawei.

There is an array of nn integers a_1,a_2,a_3,...,a_{n}a 
1
​
 ,a 
2
​
 ,a 
3
​
 ,...,a 
n
​
 . This array follows mm rules. In each rule, you are given three integers ll, rr, and kk, indicating that (\sum^{r}_{i=l}{a_i}) \% p = k(∑ 
i=l
r
​
 a 
i
​
 )%p=k. You need to find an array satisfying all rules.

Standard Input
The first line contains 3 integers nn, mm and pp, indicating the length of the array, the number of rules and the modulo.

The next mm lines each contain 3 integers ll, rr and kk, for the rule: (\sum^{r}_{i=l}{a_i}) \% p = k(∑ 
i=l
r
​
 a 
i
​
 )%p=k.

Standard Output
Output an array of nn integers a_1,a_2,a_3,...,a_{n}a 
1
​
 ,a 
2
​
 ,a 
3
​
 ,...,a 
n
​
  satisfying all rules. This array must be the lexicographically smallest array out of all arrays satisfying the previous conditions. If there is no solution, output NoneNone.

Constraints and notes
1 \leq m \leq 30001≤m≤3000
1 \leq l \leq r \leq n \leq 10^51≤l≤r≤n≤10 
5
 
p \leq 10^9 + 7p≤10 
9
 +7
0 \leq k \lt p0≤k<p

 */
int main()
{
    int n,m,p;
    cin>>n>>m>>p;

    int arr[n];

    int modulo[m];
    for(int i = 0; i<m; i++)
    {
        int l, r,k;
        cin>>l>>r>>k;



    }
}