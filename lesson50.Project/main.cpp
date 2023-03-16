#include<iostream>
#include "logic.h"
using namespace std;

int main() {
	int a, b;

	cout << "Input a, b and c: ";
	cin >> a >> b;

	int c = 1;

	cout << "a + b = " << sum(a, b, c) << endl;
	cout << "a - b = " << sub(a, b, c) << endl;
}