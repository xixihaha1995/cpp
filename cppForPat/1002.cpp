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
	char inNum[100];
	char * pChar;
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


	cin.getline(inNum, 100);
	
	for (int n = 0; n < char_traits<char>::length(inNum); n++)
	{
		r = (int)(inNum[n] - '0');
		sum += r;
	}

	while (sum > 0)
	{
		r = sum % 10;
		rMystr = pinyinMap[r];
		mystr = rMystr + " " + mystr;
		sum /= 10;
	}

	cout << mystr << endl;

	return 0;

}