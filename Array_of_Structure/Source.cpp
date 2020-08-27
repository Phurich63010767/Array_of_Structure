#include<iostream> 
#include<math.h>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
START:
    int n;
    int t;
    cout << "Enter first number: ";
    cin >> n;
    cout << "Enter second number: ";
    cin >> t;
    int a = 0;
    struct Point arr[50];
    if (n == t) {
        cout << "Cannot enter same number." << endl;
        system("pause");
        system("CLS");
        goto START;
    }
    while (a <= t ) {
        if (n < t) {
            arr[a].x = n;
            arr[a].y = n + 1;
            cout << arr[a].x << " " << arr[a].y << endl;
            n++;
        }
        if (t < n) {
            arr[a].x = t;
            arr[a].y = t + 1;
            cout << arr[a].x << " " << arr[a].y << endl;
            t++;
        }
        a++;
    }
    system("pause");
    return 0;
}