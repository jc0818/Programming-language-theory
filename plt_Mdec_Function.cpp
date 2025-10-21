//plt_Mdec Function
#include <iostream>
#include <string>

using namespace std;

int Mdec(string val)
{
	int Mdec_value;
	string fir = val;
	fir.pop_back();
	int last;
	int first;
	last = (int)val[val.length() - 1] - '0';
	
	first = stoi(fir);

	Mdec_value = first * 10;
	Mdec_value += last;

	return Mdec_value;
}
int main()
{
	cout << "Mdec function" << endl << endl;
	string value;
	cin >> value;

	cout << "Mdec Function Process: " << Mdec(value) << endl;
}
