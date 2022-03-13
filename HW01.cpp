#include<iostream>
#include<vector>
#define MAX 8
using namespace std;
void inchtocen() {
    cout << "inch\t" << "centimeter" << endl;
    for (int i = 1; i <= 20; ++i)
        cout <<i<<"\t" <<2.54*i << endl;
}
void rectangulararea(float a,float b){
    
    cout << "rectangular:" << a*b;
}
void Reverse() {
    int n, temp;
    cin >> n;
    int res = 0;
    while (n > 0) {
        temp = n % 10;
        res = res * 10 + temp;
        n = n / 10;
    }
    cout <<"reverse:" << res;
}
void positivenumbers() {
    vector<int> vec;
    int number;
   
    while (cout << "enter number:" &&(cin >> number) && number != 0)
        vec.push_back(number);
    for (int& x : vec)
        if (x > 0)
        {
        cout << x << " ";
        }
}
int main()
{
    
    
    cout << "----------------------------menu----------------------";
    cout << "\n1.inchtocen";
    cout << "\n2.rectangulararea";
    cout << "\n3.Reverse" ;
    cout << "\n4.positivenumbers" ; 
    cout << "\n5.exit"<<endl ;
    int control;
    do
    {
    cout << "\nenter control:";
    cin >> control;
    switch (control)
    {
    case 1:
        inchtocen();
        break;
    case 2:
        float a, b;
        cout << "enter a:";
        cin >> a;
        cout << "enter b:";
        cin >> b;
        rectangulararea(a, b);
        break;
    case 3:
        cout << "enter z:";
        Reverse(); 
        break;
    case 4:
        positivenumbers();
        break;
    default:
        exit(0);
        break;
    }
    } while (control!=6);
    
        
}