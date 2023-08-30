#include <bits/stdc++.h>
using namespace std;

int main()
{
    string donate;
    int n, in, count=1;
    cin >> n;

    while (n--)
    {   
        cout<<"Case " <<count <<":" <<endl;
        count++;
        long long int total=0;
        cin >> in;

        while (in--)
        {
            getline(cin>>ws, donate);

            if (donate == "report")
                cout << total << endl;
            else{
                donate.erase(0, 7);
                total += stoi(donate);
            }
        }
    }
    return 0;
}