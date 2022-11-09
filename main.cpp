// write your code here
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a,b,c,d
    cout<<"Enter the value of a (coefficent"
    <<"of square of X):";
  cin<<a;
  cout<<"Enter the variable of b (coefficent"
    <<"of X):";
  cin>>b
    cout<<"Enter the constant term c:";
  cin>>c;
  d=((pow(b,2))-(4*a*c));
  if(d<0)
    cout<<"the roots are imaginary."<<endl;
  else
  {
    if(d==0)
      cout<<"The roots are real and equal"
      <<endl;
    cout<<"the roots are"<<(-b/2*a))
      <<"and"<<(-b/2*a))<<endl;
  }
  else
  {
    cout<<"The roots are real and unequal.\n";
    d=pow(d, 0.5);
    cout<<"The roots are"
      <<((-b+d)/(2*a))
      <<"and"<<((-b-d)/(2*a))
      <<endl;
  }
}
system("pause")
  return 0;
}
    
    
