//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND
//Solution - https://www.codechef.com/viewsolution/1130319795

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, comp;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            char base = s[i];
            switch (base)
            {
                case 'A':
                    comp += 'T';
                    break;

                case 'T':
                    comp += 'A';
                    break;

                case 'C':
                    comp += 'G';
                    break;

                case 'G':
                    comp += 'C';
                    break;

            }
        }
        cout << comp << endl;

    }



    return 0;
}