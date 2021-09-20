#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dollars;
    int n;
    double p;
    cin >> n;
    cin >> dollars;
    for(int i =0; i < n; i++)
    {
        cin >> p;
        dollars -=p;
    }
    if(dollars < 0)
    {
        cout << "Fardin's broke" << endl;
    }
    else
    {
        cout << fixed;
        cout << setprecision(2);
        cout << dollars << endl;
    }
}