#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cout << "order? " << endl;
        cin >> m >> n;
        int a[m][n];
        cout << "elements: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int rows = m;
        int cols = n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 0)
                {
                    // col me -1 dalo
                    int index = i + 1;
                    while (index < cols)
                    {
                        if (a[index][j] != 0)
                        {
                            a[index][j] = -1;
                        }
                        index++;
                    }
                    // row me -1

                    index = j + 1;
                    while (index < rows)
                    {
                        if (a[i][index] != 0)
                        {
                            a[i][index] = -1;
                        }
                        index++;
                    }
                    // for rest col, ex- run upper part only and observe thus,-
                    index = i - 1;
                    if (index >= 0)
                    {
                        while (index >= 0)
                        {
                            if (a[index][j] != 0)
                            {
                                a[index][j] = -1;
                            }
                            index--;
                        }
                    }

                    index = j - 1;
                    if (index >= 0)
                    {
                        while (index >= 0)
                        {
                            if (a[i][index] != 0)
                            {
                                a[i][index] = -1;
                            }
                            index--;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] <= 0)
                {
                    a[i][j] = 0;
                }
            }
        }
        cout << "result: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}