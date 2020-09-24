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
	mystr = string(inNum);	
	//stringstream(mystr) >> i;
	for (string::iterator it = mystr.begin(); it != mystr.end(); ++it)
	{
		cout << int(*it);
	}
	cout << "All digits of your number:" << sum << endl;
	//while (i > 0)
	//{
	//	r = i % 10;
	//	sum += r;
	//	i /= 10;
	//}

	//mystr.clear();
	//while (sum > 0)
	//{
	//	r = sum % 10;
	//	rMystr = pinyinMap[r];
	//	mystr = rMystr + " " + mystr;
	//	sum /= 10;
	//}

	//cout << mystr << endl;

	return 0;

}