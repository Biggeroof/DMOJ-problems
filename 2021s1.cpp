#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double total = 0;
    cin >> n;
    double height[n+1];
    for(int i = 0; i <= n; i++)
    {
        double x;
        cin >> x;
        height[i] = x;
    }
     for(int i = 0; i < n; i++)
    {
        double y;
        cin >> y;
        double a = y * (height[i] + height[i+1])/2;
        total += a;

    }
    cout << fixed << total << endl;
}