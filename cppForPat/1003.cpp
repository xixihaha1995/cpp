#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string myStr;
	int i;
	getline(cin, myStr);
	stringstream(myStr) >> i;
	while (i > 0)
	{
		getline(cin, myStr);
		cout << "Your entered num: " << myStr << endl;
		i--;
	}

	return 0;

}