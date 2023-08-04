#include<iostream>
#include <string>
using namespace std;
int main()
{
	float  W;
    float  H;
	float  bmi;
	int    age;
	string sex;
	
	cout << "Enter Age : " ;
	cin  >> age ;
	cout << "Enter Gender : " ;
    cin  >> sex ;
    cout << "Enter Weight : " ;
    cin  >>  W  ;
    cout << "Enter Height : " ;
    cin  >>  H  ;
    
	bmi = W / (H/100 * H/100)  ;

	cout << "====================================\n" ;
	
	cout << "Age    : " << age << endl ;
	cout << "Gender : " << sex << endl ;
	cout << "Height : " << H   << endl ;
	cout << "Weight : " << W   << endl ;
	cout << "BMI    : " << bmi << endl ;

	if (bmi < 18.5 ) cout << "Underweight"    << endl ;
	else if (bmi >= 18.5) cout << "Nomal"     << endl ;
	else if (bmi >= 25  ) cout << "Overwight" << endl ;
	else if (bmi >= 30  ) cout << "Obesity"   << endl ;
	

	system("pause") ;
	return(0)       ;

 } 