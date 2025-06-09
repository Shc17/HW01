#include <iostream>

using namespace std;

int gettot(int num[], int  in)
{
	int sum = 0;
	for (int i = 0; i < in; i++)
	{
		sum += num[i];
	}
	return sum;
}

int getavg(int num[], int in)
{
	int sum = gettot(num, in);
	return sum / in;
}

int main()
{
	int num[5];
	int in = 5;

	for (int i = 0; i < in; i++)
	{
		cout << "number:";
		cin >> num[i];
	}

	int tot = gettot(num, in);
	int avg = getavg(num, in);

	cout << "tot:" << tot << " agv:" << avg << endl;

	return 0;
	
}