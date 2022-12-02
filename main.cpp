// write your code here
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a,b,c,d;
    cout<<"Enter the value of a (coefficient"<<"of square of X):";
  cin>>a;
  if(a==0)
      cout<<"Invalid entry"<<endl;
  else {
      cout << "Enter the variable of b (coefficient" << "of X):";
  }
  cin>>b;
    cout<<"Enter the constant term c:";
  cin>>c;
  d=((pow(b,2))-(4*a*c));
  if(d<0)
    cout<<"Complex roots"<<endl;
  else
  {
    if(d==0)
    {
    cout<<"the single root is "<<(-b/(2*a))<<endl;
  }
    else
  {
    cout<<"Two real roots\n";
    d=pow(d, 0.5);
    cout<<"- First root "<<((-b+d)/(2*a))<<endl;
    cout<<"- Second root "<<((-b-d)/(2*a))<<endl;
  }
}
  return 0;
}
