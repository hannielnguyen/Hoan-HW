#include<iostream>
#include<vector>
#define MAX 8
using namespace std;

int A[MAX][MAX] = { 0 };
int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2 };
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1 };
int s = 0;
int n;

void output() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
             cout << " " << A[i][j];
         cout << endl;
         }
    cout << endl;
    }

void move(int x, int y) {
    ++s;
    A[x][y] = s;
    for (int i = 0; i < 8; i++) {

        if (s == n * n) {
            cout << "steps: \n";
            output();
            exit(0);
        }

        int u = x + X[i];
        int v = y + Y[i];
        if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
            move(u, v);
    }

    --s;
    A[x][y] = 0;
}
int main() {
    cout << "enter n: ";
    cin >> n;
    int a, b;
    cout << "enter original location\nx: ";
    cin >> a;
    cout << "y: ";
    cin >> b;
    move(a, b);

    cout << "Can't find the way.";
}
 