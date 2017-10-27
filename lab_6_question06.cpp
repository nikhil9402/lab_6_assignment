#include <iostream>
using namespace std;

int main() {
  
char str[20],*p;

cout << "Input about 10 characters of string \n";
cin >> str;

//Pointer variable refers to address of string \n";

p=str ;

// Show string by shifting top character of string to left

int j=0;
for (j=0 ; *(p+j) != '\0'; j++)
 {
  
 }  

for (int i=j; i>=0 ; --i )
  {
   cout << (p+i);
   cout << endl; 
 } 
 


return 0;
}

