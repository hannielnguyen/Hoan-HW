 //реализовать программу для деления двух чисел(вводятся с клавиатуры), при попытке поделить на 0 необходимо обработать исключение без if.

include<iostream> 
using namespace std; 
 

int main() 
{ 
 int first; 
 int second; 
 int result; 
 cout << "Enter first number" << endl; 
 cin >> first; 
 cout << "Enter second number" << endl; 
 cin >> second; 
 try 
 { 
  if (second == 0) 
  { 
   throw second; 
  } 
  result = first / second; 
 } 
 catch (const int &ex) 
 { 
  cout << "Error division" << endl; 
 
 } 
 
 return 0; 
}




// создать небольшую программу для проверки логина и пароля одного конкретного пользователя



#include<iostream> 
#include<string> 
using namespace std; 
 

struct User 
{ 
 string login; 
 string password; 
 
 User() 
 { 
  login = "Hoan_Nguyen"; 
  password = "1506"; 
 } 
}; 
 
bool request(string login, string user_login, string user_password) 
{ 
 try 
 { 
  string password; 
  int counter = 0; 
  cout << "Enter password" << endl; 
  cin >> password; 
  while (true) 
  { 
   if (login == user_login && password == user_password) 
   { 
    return true; 
   } 
   if ((login != user_login || password != user_password) && counter == 3) 
   { 
    throw password; 
   } 
   else { 
    cout << "Wrong, let's try again" << endl; 
    cout << endl; 
    cout << "Enter password" << endl; 
    cin >> password; 
    counter++; 
   } 
  } 
 } 
 catch(const string str) 
 { 
  cout << "Wrong attempts no more, goodbye" << endl; 
  return false; 
 } 
 
} 
 
int main() 
{ 
 User us; 
 bool result; 
 string login; 
 cout << "Enter login information" << endl; 
 cin >> login; 
 result = request(login, us.login, us.password); 
 if (result == true) 
 { 
  cout << "Congratulations, you've entered" << endl; 
 } 
 return 0; 
}
