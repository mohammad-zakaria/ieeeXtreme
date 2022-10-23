/* n this challenge, we will create a dancing ASCII man. You will be given a series of commands that indicate either the moves the man makes or the things the man says.

If an input line starts with the command "say ", you will output the rest of the line.

The other commands cause the current position of the man to be output. The man starts facing forward in the following position:



 o
/|\
/ \


There are four commands cause the man to move his left hand. If he is in the starting position, facing forward, they will result in the following output:

"left hand to head"
 o)
/|
/ \

"left hand to hip"
 o
/|>
/ \

"left hand to start"
 o
/|\
/ \

Note that you would output the exact same output if the man was facing backwards and the commands referred to the "right hand" instead of the "left hand". You would output the mirror image if the man was facing backwards and given the same commands, or if the man is facing forwards and the commands referred to the "right hand" instead of the "left hand".

The command "turn" causes the ASCII man to change the way he is facing, for example, facing backwards if he was facing forwards, or facing forwards if he was facing backwards.

There are two commands cause the man to move his right leg. If he is in the starting position, facing forward, they will result in the following output:

"right leg in"

 o
/|\
< \
"right leg out"
 o
/|\
/ \

If a previous limb has moved, it stays in the same position until it moves again. That allows for sequences of moves like the one below. Here we are starting from the starting position, facing forwards:

"right hand to hip"
 o
<|\
/ \

"left hand to head"
 o)
<|
/ \

"left leg in"
 o)
<|
/ >

Standard input
The input begins with an integer TT giving the number of test cases.

Each test case begins with an integer dd that gives the number of commands in the dance.

The next dd lines give a command in from the following list:

"left hand to head"
"left hand to hip"
"left hand to start"
"left leg in"
"left leg out"
"right hand to head"
"right hand to hip"
"right hand to start"
"right leg in"
"right leg out"
"turn"
"say [words]", where [words] is a string of made up of letters, numbers, punctuation, and spaces.
Standard output
Output consists of either three lines, with three characters each, in response to a movement command, or one line in response to a "say" command.

Constraints and notes
1 \leq T \leq 101≤T≤10
3 \leq d \leq 4003≤d≤400
The number of characters to be output in any "say" command will be between 1 and 80, inclusive.

It is possible that a move command will not change the position of the ASCII Man, for example if the same command is given twice in a row. Even if the position does not change as a result of a movement command, you still should produce the output showing the current position.

The input will never ask to have both the left leg in and the right leg in.



*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        for (int i = 0; i < d; i++)
        {
            string s;
            getline(cin, s);

            // check if the string start with say
            if (s.substr(0, 4) == "say ")
            {
                cout << s.substr(4, s.length() - 4) << endl;
            }
            else
            {
                string top = " o ";
                string mid = "/|\\";
                string bot = "/ \\";

                if (s == "left hand to head")
                {
                    if (bot[2] != '>')
                    {
                        top[2] = ')';
                        mid[2] = ' ';
                    }

                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "left hand to hip")
                {
                    if (bot[2] != '>')
                    {
                        top[2] = ' ';
                        mid[2] = '>';
                    }

                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "left hand to start")
                {
                    bot[2] = '\\';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "left leg in")
                {
                    bot[2] = '>';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "left leg out")
                {
                    bot[2] = '\\';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "right hand to head")
                {
                    if (bot[0] != '<')
                    {
                        top[0] = '(';
                        mid[0] = ' ';
                    }
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "right hand to hip")
                {
                    if (bot[0] != '<')
                    {
                        top[0] = ' ';
                        mid[0] = '<';
                    }
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "right hand to start")
                {
                    top[0] = ' ';
                    mid[0] = '/';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "right leg in")
                {
                    bot[0] = '<';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "right leg out")
                {
                    bot[0] = '/';
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
                else if (s == "turn")
                {
                    cout << top << endl;
                    cout << mid << endl;
                    cout << bot << endl;
                }
            }
        }
    }

    return 0;
}