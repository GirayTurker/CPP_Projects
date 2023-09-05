#include <stdio.h>
#include <iostream>
using namespace std;
 
 int main(){
  cout<<"\n";
  printf("Hello World\n");
  string firstName = "Cananmis";
  string lastName = "Turker";
  //Concatenate Strings with append
  string fullName = firstName.append(lastName);
  cout <<"Lenght of the Cananmis Turker Name: "<<fullName.length();
  cout<<"\nThe lenght is EXCLUDE space between First and Last name";
  cout<<"\n";
  /*cout << "Type your full name: ";
  cin >> fullName;
  cout << "Your name is: " << fullName;
  cout<<"\ncin terminating whitespace,tabs,etc\n";*/
  string full_Name;
  cout << "Type your full name Again: ";
  getline(cin, full_Name);
  cout << "Your name is(with getline function): " << full_Name;


  /*cout << fullName;
    int x;
    cout << "Type a number: ";
    cin>>x;
    cout<<"You Typed: " <<x;*/
 }