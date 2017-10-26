#include <iostream>
using namespace std;

int main (){


int a=2,b=3;
int *p;
 
p = &a;
b = *p;

cout << a << endl;
cout << b << endl;
cout << *p << endl;
  


return 0;
}
