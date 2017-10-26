#include <iostream>
using namespace std;

//Q.Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
int main() {

cout << "Enter the size of the your name\n";
int n;
cin >> n;

cout << "Enter your name \n";
char name[n];
cin >> name;

cout << "Name character by character are\n";
//using normal index method 
for (int i=0;i<n;i++)
 {
  cout << name[i] << endl;
 }

cout << "Name character by character are\n";
//using pointer method
char *p;
p=name;
for (int i=0;i<n;i++)
 {
  cout << *(p+i) << endl;
 }

return 0;
}
