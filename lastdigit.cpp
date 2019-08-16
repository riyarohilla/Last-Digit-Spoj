#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		int d=1;
		while(b)
		{
			if(b%2)
				d=(d*a)%10;
			b/=2;
			a=(a*a)%10;
		}
		cout<<d<<endl;
	}

	return 0;
}
