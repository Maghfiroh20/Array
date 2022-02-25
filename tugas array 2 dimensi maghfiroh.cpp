#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a[4][2]={{2,20},{4,40},{8,80},{12,100}};
	
	for (int b=0;b<4;b++){
		for (int c=0;c<2;c++){
			cout<<a[b][c]<<" ";
		}
		cout << endl;
	}
getch();

}
