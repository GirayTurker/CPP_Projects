#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

string myNameVar = "GirayTurker";
string* ptr = &myNameVar;

cout<<"\nMemory stored address: "<<ptr;
cout<<"\nSame memory stored variable: "<<*ptr;
//Change stored memory variable
*ptr="SomebodyElse";
cout<<"\nSame memory modify stored variable: "<< *ptr;
cout<<"\nThis should same as first memory stored address: "<<ptr<<"\n";

return 0;

}