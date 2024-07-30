//Aryaman Pathak EntcA2 o31 exp3d reverse number
#include <iostream>

using namespace std;

int main() {
int n,x,y;
cout<<"Enter the number "<<endl;
cin>>n;

while(n>0){
  x = n%10;
  cout<<x;
  n = n/10;
}
}
/*output
Enter the number 
58393905
50939385*/
