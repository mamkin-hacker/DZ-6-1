#include <iostream>
using namespace std;

int main () 
{
	setlocale(LC_ALL, "RU");
	int i = 0;

	while (i < 10) 	
	{
		i++;
		printf("%02d", i);
		cout << " ������  ";
		int j = 1;

		while (j < 11) 
		{	
			j++;
			cout << "* ";			
		}
		cout << " " << (j-1) << " ��������" << endl;
	}
	return 0;
}