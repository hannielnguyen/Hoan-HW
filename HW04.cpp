#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;
int main(){
    vector<int>a;
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        int x;
        cin>> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
{
 cout<<a[i]<<" ";
}

}