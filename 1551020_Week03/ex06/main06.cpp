// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	float dtb;
	cout << "Please input your GPA " ;
	cin >> dtb;
	cout << " Your Rating in ALphabet is : " ;
	if ( dtb >10 )
	{
		cout << " Impossible ";
	}
	else if (( 10 >= dtb) && (dtb >= 8.5 ))
	{
		cout <<" A ";
	}
	else if ( (8.5 > dtb) && (dtb >=7) ) 
	{
		cout << " B ";
	}
	else if ( (7 > dtb) && (dtb >= 5.5))
	{
		cout<<" C";
	}
	else if ( (5.5 > dtb)&&(dtb >= 4))
	{
		cout <<" D ";
	}
	else
	{
		cout << " F ";
	}
	cout <<  " \n " ;
	return 0;
}