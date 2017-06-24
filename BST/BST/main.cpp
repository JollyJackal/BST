#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
	string testIt = "";
	cout << "Hello World!" << endl;
	//cin >> testIt;
	//cout << testIt;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
