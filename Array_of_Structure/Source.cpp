#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    int x, y;
};

void printStruct(Point a[],int i)
{
    cout << a[i].x << " " << a[i].y << endl;
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

    struct Point arr[50];
    if (n == t) {
        cout << "Cannot enter same number."<< endl;
        goto START;
    }
    for(int a=0;a<t;++a) {
        if (n < t) {
            arr[a].x = n ;
            arr[a].y = n + 1;
            //cout << arr[a].x << " " << arr[a].y << endl;
            printStruct(arr,a);
            n++;
        }
        if (t < n) {
            arr[a].x = t;
            arr[a].y = t + 1;
            //cout << arr[a].x << " " << arr[a].y << endl;
            printStruct(arr,a);
            t++;
        }
    }
    return 0;
}
