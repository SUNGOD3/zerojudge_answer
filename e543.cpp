#include <iostream>
#include <string>
using namespace std;
char lookupTable[256];
void Initialize() {
	lookupTable['A'] = 'A';
	lookupTable['E'] = '3';
	lookupTable['H'] = 'H';
	lookupTable['I'] = 'I';
	lookupTable['J'] = 'L';
	lookupTable['L'] = 'J';
	lookupTable['M'] = 'M';
	lookupTable['O'] = 'O';
	lookupTable['S'] = '2';
	lookupTable['T'] = 'T';
	lookupTable['U'] = 'U';
	lookupTable['V'] = 'V';
	lookupTable['W'] = 'W';
	lookupTable['X'] = 'X';
	lookupTable['Y'] = 'Y';
	lookupTable['Z'] = '5';
	lookupTable['0'] = '0';
	lookupTable['1'] = '1';
	lookupTable['2'] = 'S';
	lookupTable['3'] = 'E';
	lookupTable['5'] = 'Z';
	lookupTable['8'] = '8';
}
void Regulate(string &input) {
	for (int i = 0; i != input.size(); ++i)
		if (input[i] == '0')
			input[i] = 'O';
}
bool IsMirrored(string input) {
	for (int i = 0; i <= (input.size() >> 1); ++i)
		if (lookupTable[input[i]] != input[input.size() - i - 1])
			return false;
	return true;
}
bool IsPalidrome(string input) {
	for (int i = 0; i <= (input.size() >> 1); ++i)
		if (input[i] != input[input.size() - i - 1])
			return false;
	return true;
}
int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	Initialize();
	string input;
	while (cin >> input) {
		cout << input << " -- is ", Regulate(input);
		if (IsMirrored(input))
			cout << "a mirrored " << (IsPalidrome(input) ? "palindrome.\n" : "string.\n");
		else
			cout << (IsPalidrome(input) ? "a regular palindrome.\n" : "not a palindrome.\n");
		cout << '\n';
	}
}
