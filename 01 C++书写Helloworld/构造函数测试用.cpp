#include<iostream>
using namespace std;
class Stock {
	public:
	Stock(double value)
	{
		total_val = value;
	}
	Stock(const Stock& p)
	{
		total_val = p.total_val;
	}
	double total_val;
	const Stock & topval(const Stock & s) 
	{
		if (s.total_val > total_val)
			return s;
		else
			return *this;
	}
	};
int main()
{
	Stock ONE(30);
	Stock TWO(40);
	Stock Three(ONE.topval(TWO));
	cout << Three.total_val << endl;
	
}