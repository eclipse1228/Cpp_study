#include <iostream>
using namespace std;

add (int a,int b){
  return a+b; 
}

add(double a,double b){  // function overloading
  return a+b;
}

int main()
{
  int a=1 , b=2;
   double c=1.1, d=2.2;
  
 cout << add(a,b) << endl;
 cout << add(c,d) << endl; // double add 라고 안 써도 알아서 c,d가 double이기 때문에 compiler가 찾아서 들어간다.
  
  
}
