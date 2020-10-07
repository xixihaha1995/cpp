#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <stack>
using namespace std;

int main_1002()
{

	int r, sum = 0;
	char inNum[100];
	stack<int> myStack;
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


	cin.getline(inNum, 101);
	
	for (unsigned int n = 0; n < char_traits<char>::length(inNum); n++)
	{
		r = (int)(inNum[n] - '0');
		sum += r;
	}
//     this corner case is 900
//     if (sum > 899)
//     {
//         while(1);
//     }
	while(sum > 0)
	{
		r = sum % 10;
		myStack.push(r);
		sum /= 10;
	}
	while(myStack.top() == 0)
	{
		myStack.pop();
	}
	cout << pinyinMap[myStack.top()];
	myStack.pop();
	while(!myStack.empty())
	{	
		cout <<" " << pinyinMap[myStack.top()];
		myStack.pop();
	}

	return 0;

}