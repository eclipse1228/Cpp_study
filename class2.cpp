#include <iostream>
using namespace std;

class ThreeMatrices {
	int a[3][5] = { {5,10,2,7,5},{4,6,2,2,9},{1,9,2,8,4} };
	int b[3][5] = { {5,2,7,4,5},{10,6,9,2,3},{2,6,4,7,1} };
	int c[3][5];
public:
	ThreeMatrices();
	void printC();
	void biggerC();
	void smallerC();
};


ThreeMatrices::ThreeMatrices() {
	for (int w = 0; w < 3; w++)
	{
		for (int u = 0; u < 5; u++) {
			c[w][u] = 0;
		}
	}
}

void ThreeMatrices::printC() {
	for (int b = 0; b < 3; b++)
	{
		for (int x = 0; x < 5; x++) {
			cout << c[b][x] << " ";
		}
		cout << endl;
	}
}

void ThreeMatrices::biggerC() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] > b[i][j])
			{
				c[i][j] = a[i][j];
			}

			else
			{
				c[i][j] = b[i][j];
			}
		}
	};
}
void ThreeMatrices::smallerC() {
	for (int k = 0; k < 3; k++)
	{
		for (int l = 0; l < 5; l++)
		{
			if (a[k][l] < b[k][l])
			{
				c[k][l] = a[k][l];
			}
			else
			{
				c[k][l] = b[k][l];
			}
		}
	};

}

int main()
{
	ThreeMatrices m;
	cout << "inital..." << endl;	m.printC();
	cout << "bigger..." << endl;	m.biggerC();	m.printC();
	cout << "smaller..." << endl;	m.smallerC();	m.printC();
}
