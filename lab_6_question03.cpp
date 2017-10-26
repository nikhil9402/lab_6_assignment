#include <iostream>
using namespace std;

int main () {

int arr[10],*p;

cout << "Enter the elements of the array; \n";

for (int i=0;i<10;i++)
  {
    cin >> arr[i];
  }

cout << "The array is : \n";

//using normal index method
for (int i=0;i<10;i++)
  {
    cout << arr[i] << endl;
  }

cout << "The array is : \n";

//using pointer method
for (int i=0;i<10;i++)
  {
    p=&arr[i];
    cout << *p << endl;
  }

return 0;
}
