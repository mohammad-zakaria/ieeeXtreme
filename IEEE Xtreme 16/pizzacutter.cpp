/* Pizza Cutter
Time limit: 1000 ms
Memory limit: 256 MB

The slicematic is a pizza cutting robot. The robot takes a series of degree offsets as inputs and uses these to slice the pizza along the diameter starting at each offset. Your task is to count the number of pieces of pizza that will result after the robot is done cutting. The image below shows some example offsets. The first image results in 4 pieces, and the second has 6 pieces.
Notes:

As shown in the image above, the slicematic robot can take degree values that are more than 360360 degrees.
The positive degree value represents clockwise rotation, as shown in the images. The robot can also take a negative value as a degree, representing counterclockwise rotation.
If the robot makes two equivalent slicing offsets, e.g., 00 and 180180, only one cut will be made.
All slices will intersect in the center of the pizza.

Standard input
The first line of input contains a single integer TT, the number of test cases.

Each test case is a single line of space-separated integers. The testcase begins with an integer NN, which is the number of slicing offsets in the test, followed
by NN integers, D1, D2 ... Dn, each describing an offset the robot will use to slice a pizza.

Standard output
For each test case, output a single line containing the number of pieces of pizza that will result after the slicematic makes all of the slices.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if (n == 1)
            {
                int d;
                cin >> d;
                cout << 2 << endl;
                continue;
            }

            else{
                int arr[n];
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                int totalcut = 1;

                // the values of the arr is degree
                // we need to check if the degree is exactly opposite to each other
                // if no then we need to add 1 to the totalcut
                // if yes then we need to add 0 to the totalcut
                int sample1 = arr[0];
                for(int i = 1; i<n; i++)
                {
                    int sample2 = arr[i];
                    if(sample1 + sample2 == 180)
                    {
                        continue;
                    }
                    else
                    {
                        totalcut++;
                    }
                }
                cout << totalcut + 1 << endl;


            }
        }
    }

    return 0;
}