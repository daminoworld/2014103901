#include <iostream>
using namespace std;

int main()
{
	int i = 0; // 변수초기화
	int j = 0; // 변수초기화
	int v = 0; // 변수초기화

	for (i = 2; i < 9; i++)
	{
		cout << i << "단" << '\t';           
                                               
			for (j = 1; j < 9; j++)         
			{
				v = i * j;                     
                
				cout << i << "x" << j << "=" << v << '\t';   
			}
            
			cout << endl; 
	}
	return 0;
}