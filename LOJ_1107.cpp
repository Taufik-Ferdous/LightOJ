#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=1;
    cin>>n;
    while(n--)
    {
        cout << "Case " << count << ':' << endl;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int a;
        cin >> a;
        while (a--)
        {
            int x3, y3, check = 0;
            cin >> x3 >> y3;
            if (x3 > x1 && y3 > y1)
            {
                if (x3 < x2 && y3 < y2)
                {
                    cout<<"Yes" << endl;
                    check++;
                }
            }
            if (check == 0)
                cout<<"No" << endl;

            check = 0;
        }
        count++;
    }
    return 0;
}