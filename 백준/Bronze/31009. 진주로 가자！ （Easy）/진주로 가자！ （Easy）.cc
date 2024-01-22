#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, i, jinju, cnt = 0, arr[1010] = { 0 }, cost;
    string s;

    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> s >> cost;
        if (s == "jinju") jinju = cost;
        arr[i] = cost;
    }
    for (i = 0; i < N; i++)
        if (arr[i] > jinju)
            cnt++;

    cout << jinju << "\n" << cnt;
}