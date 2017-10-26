#include <iostream>
using namespace std;

int main() { 

//declare variables of all predefined sizes
int i,*ptrI;
float f,*ptrF;
double d,*ptrD;
bool b,*ptrB;
char x,*ptrX;
long l,*ptrL;


//declare corresponding pointers (of all predefined types)
ptrI = &i;
ptrF = &f;
ptrD = &d;
ptrB = &b;
ptrX = &x;
ptrL = &l;

cout << "Sizes of the variables int,float,double,bool,char and long respectively are \n";

cout << sizeof(i) <<endl;
cout << sizeof(f) <<endl;
cout << sizeof(d) <<endl;
cout << sizeof(b) <<endl;
cout << sizeof(x) <<endl;
cout << sizeof(l) <<endl;

cout << "Sizes of the pointer variables int,float,double,bool,char and long respectively are \n";
cout << sizeof(ptrI) <<endl;
cout << sizeof(ptrF) <<endl;
cout << sizeof(ptrD) <<endl;
cout << sizeof(ptrB) <<endl;
cout << sizeof(ptrX) <<endl;
cout << sizeof(ptrL) <<endl;
return 0;
}
