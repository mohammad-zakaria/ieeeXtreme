/*  U iuxx nq mf ftq eqzmfq fapmk fa tqmd m bqfufuaz rday Fuxxuge. Omeeuge mzp Ndgfge tmhq nqqz mofuzs efdmzsq. Etagxp nq nmow uz fuyq rad puzzqd. */

// Write a program to convert avobe text to I will be at the senate today to hear a petition from Tillius. Cassius and Brutus have been acting strange. Should be back in time for dinner.

#include<bits/stdc++.h>
using namespace std;


int iscapital(char x)
{
       if (x >='A' && x <= 'Z')    return 1;
       else  return 0;
}

int main()
{
    string s;
    getline(cin,s);
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(isalpha(s[i]) && iscapital(s[i]))
        {
            if(s[i]-12 > 'A')
            {
                s[i] = s[i]-12;
            }
            else
            {
                if(s[i]+14 > 'Z')
                {
                    s[i] = s[i]+14 - 26;
                }
                else
                {
                    s[i] = s[i]+14;
                }
            }
            
        }
        else if(isalpha(s[i]) && !iscapital(s[i]))
        {
            if(s[i]-12 > 'a')
            {
                s[i] = s[i]-12;
            }
            else
            {
                if(s[i]+14 > 'z')
                {
                    s[i] = s[i]+14-26;
                }
                else
                {
                    s[i] = s[i]+14;
                }
            }
        }
        else
        {
            s[i] = s[i];
        }
    }
    cout<<s;



    
    return 0;
}
