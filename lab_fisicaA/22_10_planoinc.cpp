#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n, count=1;
	double measure_med = 0.0, measure_quadMed = 0.0;
	
	
	cout << "Enter the number of measures to be made: ";
	cin >> n;
	cout << endl;
	vector< double > measures;
	
	for(int i=0; i<n; i++)								
	{
		double xi;
		cout << "Enter measure " << count << ": ";													//Pega N valores de medidas
		cin >> xi;
		cout << endl;
		
		measures.push_back(xi);
		measure_med += xi;																			//Soma N valores de Xi
		measure_quadMed += pow(xi, 2);																//Soma N valores de Xi^2
		
		count++;
	}
	
	measure_med = measure_med/n;																	//Faz a média dos Xi
	measure_quadMed = measure_quadMed/n;															//Faz a média dos Xi^2
	
	count =1;
	cout << "-----------------------------------" << endl;
	for(int i=0; i<measures.size(); i++)															//Laço para imprimir os valores Xn
	{
		cout << "| Measure " << count << ": " << measures.at(i) << endl;
		count++;
	}	
	double variance_amostral, variance_experimental, variance_total;
	
	variance_amostral = sqrt((n*(measure_quadMed - pow(measure_med, 2)))/(n-1));					//Calcula a variança amostral para calcular a experimental
	variance_experimental = variance_amostral/sqrt(n);												//Calcula a variancia experimental
	variance_total = sqrt(pow(variance_experimental, 2)+pow(0.001, 2));								//Ajustar segundo pow conforme o experimento
	
	


	cout << "| Measure med = " << measure_med << endl;													//Measure avarage
	cout << "| Measure^2 med = " << measure_quadMed << endl;
	cout << "| Amostral variance = " << variance_amostral << endl;
	cout << "| Experimental variance = " << variance_experimental << endl;
	cout << "| Total variance = " << variance_total << endl;											//Total variance 
	cout << "-----------------------------------" << endl << endl;
	
	return 0;
}
