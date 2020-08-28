#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    int x, y;
};

void printStruct(Point a[], int i)
{
    cout << a[i].x << " " << a[i].y << "   -> Line: " << i+1 << endl;
};

int main()
{
START:
    int n, sum = 0;
    int t;
    
        cout << "Enter first number: ";
        cin >> n;
        cout << "Enter second number: ";
        cin >> t;
    
        struct Point arr[50];
        if (n == t) {
            cout << "Cannot enter same number." << endl;
            goto START;
        }
    for (int z = 0; z < 3;z++) 
    {
        if (t < n) {
            for (int a = 0;a < t;a++)
            {
                if (t < n) {
                    arr[a].x = t ;
                    arr[a].y = t + 1 ;

                    printStruct(arr, a);
                    t++;
                    if (a % 2 == 0)
                    {
                        sum += arr[a].x + arr[a].y;
                    }
                    if (t == n)
                    {
                        t = arr[0].x;
                    }
                }

            }
            cout << "sum is " << sum << endl;
            sum = 0;
        }
        if (n < t) {
            for (int a = 0;a < n;a++)
            {
                if (n < t) {
                    arr[a].x = n ;
                    arr[a].y = n + 1 ;

                    printStruct(arr, a);
                    n++;
                    if (a % 2 == 0)
                    {
                        sum += arr[a].x + arr[a].y;
                    }
                    if (n == t)
                    {
                        n = arr[0].x;
                    }
                }
            }
            cout << "sum is " << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
