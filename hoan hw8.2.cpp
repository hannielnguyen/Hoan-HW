#include<iostream> 
#include<string> 
using namespace std;


struct User
{
    string login;
    string password;
};

bool request(string login, string user_login, string user_password)
{
    string password;
    int counter = 1;
    cout << "Enter password" << endl;
    cin >> password;
    while (true)
    {
        if (login == user_login && password == user_password)
        {
            return true;
        }
        else
        {
            cout << "Wrong, let's try again" << endl;
            cout << endl;
            cout << "Enter password" << endl;
            cin >> password;
            counter++;
        }
        if (counter == 3)
        {
            throw password;
        }
    }
}
int main()
{
    User us;
    us.login = "Hoan_Nguyen";
    us.password = "1506";
    try
    {
        bool result;
        string login;
        cout << "Enter login information" << endl;
        cin >> login;
        result = request(login, us.login, us.password);
        if (result == true)
        {
            cout << "Congratulations, you've entered" << endl;
        }
    }
    catch (const string str)
    {
        cout << "Wrong attempts no more, goodbye" << endl;
        return false;
    }
    return 0;
}
