#include <iostream>
using namespace std;




int main()
{
    int T, m, n, cnt, ans, tmpI, tmpJ;
    cin >> T;

    while(T--)
    {
        cnt = 0;
        ans = 0;
        cin >> m >> n;
        int brd[m][n];

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> brd[i][j];
            }

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                tmpI = i, tmpJ = j;
                while (tmpI != m - 1 && tmpJ != n - 1)
                {
                    cnt += brd[i][j];
                    tmpI++;
                    tmpJ++;
                }
                tmpI = m - i, tmpJ = m - j;
                while (tmpI != m - 1 && tmpJ != n - 1)
                {
                    cnt += brd[i][j];
                }
                tmpI = i, tmpJ = j;
                while (tmpI != m - 1 && tmpJ != n - 1)
                {
                    cnt += brd[i][j];
                }
                tmpI = i, tmpJ = j;
                while (tmpI != m - 1 && tmpJ != n - 1)
                {
                    cnt += brd[i][j];   
                }







            }
    }
}