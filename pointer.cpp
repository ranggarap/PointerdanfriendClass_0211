#include <iostream>
using namespace std;

int main ()
{
 //dereference
 int a =10;
 int b = 6;
 int y = 20;
 int *c= &a;
 cout << "Alamat memori:" << c << endl;
 cout << "nilai dari c :" << *c <<endl;
 c= &y;
 cout << "Alamat memori :" << c<< endl;
 cout << "Nilai dari C :" << *c<< endl;

 //reference
 int &d =b;  
cout << "nilai" << d << endl;
cout  << "reference" << &d << endl;

int f = 5;
int g = f;
}