//Aryaman Pathak EntcA2 o31 exp3b quadrant of a point(x,y)
#include <iostream>

using namespace std;

int main()
{
int x,y;
cout<<"enter the x coordinate:"<<endl;
cin>>x;
cout<<"enter the y coordinate:"<<endl;
cin>>y;
    
if(x > 0 &&  y > 0)
{
    cout<<"the number is in first quadrant"<<endl;
}
else if(x < 0 && y < 0)
cout<<"the number is in fourth quadrant"<<endl;
    
else if(x < 0 && y > 0)
cout<<"the number is in second quadrant"<<endl;

else 
cout<<"the number is in third quadrant"<<endl;
    
}
/*output
enter the x coordinate:
5
enter the y coordinate:
-8
the number is in third quadrant
enter the x coordinate:
5
enter the y coordinate:
9
the number is in first quadrant
enter the x coordinate:
-5
enter the y coordinate:
2
the number is in second quadrant
enter the x coordinate:
-1
enter the y coordinate:
-6
the number is in fourth quadrant*/
