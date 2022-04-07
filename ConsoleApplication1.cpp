#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <numeric>
#include <cmath>
using namespace std;
ofstream output("plik.txt");

void Sortowanie(vector <float> tablica)
{
	int temp;
	for (int i = 0; i < tablica.size(); i++) {
		for (int j = 0; j < tablica.size() - 1; j++) {
			if (tablica[j] > tablica[j + 1]) {
				temp = tablica[j];
				tablica[j] = tablica[j + 1];
				tablica[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < tablica.size(); i++)
	{
		cout << tablica[i]<<" ";
		output << tablica[i] << " ";
	}
}


int main()
{
	
	int i;
	int n;
	float sum = 0;
	
	float srednia;

	vector <float> tablica;
	

	ifstream input("liczby1.txt");

	cout << "liczby z pliku tekstowego";
	cout << endl;
	while (input >> n)
	{
		
		sum += n;
		tablica.push_back(n);
	}
	Sortowanie(tablica);
	

	

	for (int i = 0; i < tablica.size(); i++)
	{
		srednia = sum / tablica.size();
	}
	cout << endl;
	cout << ceil(srednia);
	cout << endl;
	cout << "Srednia liczb = " << srednia;
	
	cout << endl;
	cout <<"Suma liczb = " << sum;
	
	cout << endl;
	cout << endl;
	output << endl;
	output << "Suma liczb = " << sum << endl;
	
	output << "Srednia liczb = " << srednia << endl;


	input.close();

	output.close();
}


