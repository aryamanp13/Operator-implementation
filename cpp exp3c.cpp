//Aryaman Pathak EntcA2 o31 exp3c student grading
#include <iostream>

using namespace std;

int main() {
    int m1,m2,m3,m4,m5,avg;
    cout<<"Enter the marks for 5 subjects:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    avg = (m1+m2+m3+m4+m5)/5 ;
    if(avg>=90)
    cout<<"the grade is O"<<endl;
    else if(80<avg<90)
    cout<<"the grade is A+"<<endl;
    else if(70<avg<80)
    cout<<"the grade is A"<<endl;
    else if(60<avg<70)
    cout<<"the grade is B"<<endl;
    else 
    cout<<"the grade is F"<<endl;
    
}

/*output
Enter the marks for 5 subjects:
70
80
40
90
78
the grade is A+
Enter the marks for 5 subjects:
97
98
95
90
98
the grade is O
*/
