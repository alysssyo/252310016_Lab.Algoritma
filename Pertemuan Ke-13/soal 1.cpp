#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int data[3][8] = {{2,5,2,3,1,0,0,1}, {2,5,2,3,1,0,0,2}, {2,5,2,3,1,0,0,3}};
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<8;j++)
		{
			if(i == 3 || i == 8) {
				cout << data[i][j]*3 <<" ";
			}else{
				cout<<data[i][j];
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
