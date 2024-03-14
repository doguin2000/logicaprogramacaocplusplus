/*
*/

#include <iostream>
#include <string>
#include <math.h>
#include <locale>

using std::setlocale; using std::getline; using std::endl; using std::cin; using std::cout; using std::string;
int main()
{
	setlocale(LC_ALL, "pt-BR.UTF-8");
	int x;
	int r;
	cout << "Digite o número: ";
	cin >> x;
	r = x % 2;
	if (r == 0) {
		cout << "O número " << x << " É par\n";
	}
	else {
		cout << "O número " << x << " É impar\n";
	}
}

