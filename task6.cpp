#include <iostream>
using namespace std;
int main() {

float matric_marks;
float intermediate_marks;
float ecat_marks;

float percentageOfMatric;
float percentageOfInter;
float percentageOfEcat;
float TenPercentOfMatric;
float FortyPercentOfInter;
float FiftyPercentOfEcat;
float Totalaggregate;

cout << "enter matric marks ";
cin >> matric_marks;
cout << "enter intermediate marks ";
cin >> intermediate_marks;
cout << "enter ecat marks ";
cin >> ecat_marks;

percentageOfMatric = (matric_marks / 1100) * 100;
percentageOfInter = (intermediate_marks / 550) * 100;
percentageOfEcat = (ecat_marks/400) * 100;
TenPercentOfMatric = (percentageOfMatric) * (0.1);
FortyPercentOfInter = (percentageOfInter) * (0.4); 
FiftyPercentOfEcat = (percentageOfEcat) * (0.5);
Totalaggregate =  (TenPercentOfMatric + FortyPercentOfInter + FiftyPercentOfEcat);
cout << "your aggregate is: " << Totalaggregate ;
}