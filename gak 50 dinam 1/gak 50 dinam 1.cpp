#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string t;
	int* n;
	int sum=0;
	n = new int[30];
	cout << "romeli tve? : ";
	cin >> t;
	cout << endl;
	for (int i = 0; i < 30; i++) {
		n[i] = rand() % 50;
		sum += n[i];
	}
	cout << "sashvalo naleqi= " << sum / 30. << endl;
	delete[]n;
}
