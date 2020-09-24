#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main()
{
	string mystr;
	string rMystr;
	int i, r, sum = 0;
	map<int, string> pinyinMap;
	pinyinMap[0] = "ling";
	pinyinMap[1] = "yi";
	pinyinMap[2] = "er";
	pinyinMap[3] = "san";
	pinyinMap[4] = "si";
	pinyinMap[5] = "wu";
	pinyinMap[6] = "liu";
	pinyinMap[7] = "qi";
	pinyinMap[8] = "ba";
	pinyinMap[9] = "jiu";


	cout << "Enter a number\n";
	getline(cin, mystr);
	stringstream(mystr) >> i;
	while (i > 0)
	{
		r = i % 10;
		sum += r;
		i /= 10;
	}
	

	mystr.clear();
	while (sum > 0)
	{
		r = sum % 10;
		rMystr = pinyinMap[r];
		mystr = rMystr + " "+ mystr;
		sum /= 10;
	}

	cout << "The sum of digits is: " << mystr << endl;

	return 0;

}