 //реализовать программу для деления двух чисел(вводятся с клавиатуры), при попытке поделить на 0 необходимо обработать исключение без if.

#include<iostream> 
using namespace std; 
 

int main() 
{ 
 try 
 { 
 int first; 
 int second; 
 int result;
 cout << "Enter first number" << endl; 
 cin >> first; 
 cout << "Enter second number" << endl; 
 cin >> second; 
result = first / second;
cout << "Result: " << first << "/" << second << "=" << result << endl;
}
  
 catch (const int &ex) 
 { 
  cout << "Error division" << endl; 
 
 } 
 
 return 0; 
}


