#include "rcstring.h"

int main()
{
	rcstring a, b, c;
	a = "10xyz";
	b = "ala ma kota";
	cout << a << " " << b << endl; // 10 ala ma ma kota
	c = a + b;
	cout << c << endl; // 10ala ma kota
	c = a + rcstring(" ") + b;
	cout << c << endl; //10 ala ma kota

	rcstring d("3alamaPsa");
	cout << d << endl; //a
	d += "ula";
	cout << d << endl; //aula
	d += "15";
	cout << d << endl; //aula15
	cout << d[3] << endl; //a
	d[3] = 'b';
	cout << d << endl; //aulb15
	d[2] = d[1] = d[0];
	cout << d << endl; //aaab15 
	rcstring e;
	e = "RoZnE Z9NaKi";
	cout << "\n" << "input string: " << e << endl;
	cout<< "\natoi: " << a.myAtoi() << endl;

	cout << "toLower: " << e.tooLower() << endl;

	cout << "left: " << e.left(4) << endl;
	system("PAUSE");

	return 0;
}