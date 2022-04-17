//вводятся число, знак (+/-) и ещё число. Нужно вывести результат операции.

#include <iostream>

using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 4, b = 11;
    cout << "sum =" << sum(a,b);
    return 0; 
}


int main()
{
    int a,b;
    char s;
    cin >> a >> s >> b;
    if(s == '+');
    cout << a + b;
    return 0;
}

//вводятся кол-во элементов массива, первый массив, знак операции(+/-) и второй массив. Нужно вывести результат операции. Операцию производить поэлементно

int main()
{
    char s;
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    cout << (a,b,s,n);
    return 0;
}
