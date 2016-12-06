#include "rcstring.h"

int main()
{
	rcstring a, b, c;
	a = "10";
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
	cout << a.myAtoi() << endl;
	// a jest rcstringiem zawieraj¹cym 10, wystarczy go podpi¹c pod atooi() i 
	// wydrukuje przetworzonego stringa do inta


	system("PAUSE");

	return 0;
}
//http://wklej.to/dovxf