#include <iostream>
using namespace std;
 
 
int main() {
  int a[5]={35,23,41,89,12};
  for(int i=0; i<sizeof(a)/sizeof(a[0]) ;i++)
  {
      for(int j=0; j<=i; j++)
      {
          if(a[j+1]>a[j])
        {
          int c=a[j];
          a[j]=a[j+1];
          a[j+1]=c;
        }
      }
  }
  cout<< "List=>"<<endl;
  for(int i=0; i<sizeof(a)/sizeof(a[0]) ;i++)
  {
      cout<<a[i]<<endl;
  }
  return 0;
}