#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, count=1;
	double measure_med = 0.0, measure_quadMed = 0.0;
	int d1=20, d2=30;
	
	cout << "T1 - Enter the number of measures to be made: ";
	cin >> n;
	cout << endl;
	vector< double > measures;
	
	for(int i=0; i<n; i++)								
	{
		double xi;
		cout << "Enter measure " << count << ": ";
		cin >> xi;
		cout << endl;
		
		measures.push_back(xi);
		measure_med += xi;
		measure_quadMed += pow(xi, 2);
		
		count++;
	}
	
	measure_med = measure_med/n;
	measure_quadMed = measure_quadMed/n;
	
	count =1;
	cout << "For t1:" << endl;
	cout << "-----------------------------------" << endl;
	for(int i=0; i<measures.size(); i++)
	{
		cout << "| Measure " << count << ": " << measures.at(i) << endl;
		count++;
	}	
	double variance_amostral, variance_experimental, variance_total;
	
	variance_amostral = sqrt((n*(measure_quadMed - pow(measure_med, 2)))/(n-1));
	variance_experimental = variance_amostral/sqrt(n);
	variance_total = sqrt(pow(variance_experimental, 2)+pow(0.001, 2));
	
	cout << "| Measure med = " << measure_med << endl;
	cout << "| Measure^2 med = " << measure_quadMed << endl;
	cout << "| Amostral variance = " << variance_amostral << endl;
	cout << "| Experimental variance = " << variance_experimental << endl;
	cout << "| Total variance = " << variance_total << endl;
	cout << "-----------------------------------" << endl << endl;
	
	ofstream file("relatorio.txt", std::ios::in | std::ios::out | std::ios::ate);
	if(file.is_open())
	{
		file << "t1 med = ";
		for(int i=0; i<measures.size(); i++)
		{
			file << measures.at(i) << " + "; 
		}
		file  << " = " << measure_med << endl << endl;
		
		file << "t1 quad med = ";
		for(int i=0; i<measures.size(); i++)
		{
			file << measures.at(i) << "^2" << " + "; 
		}
		file  << " = " << measure_quadMed << endl << endl;
	}

	cout << endl << endl;

	count=1;
	double measure_med2 = 0.0, measure_quadMed2 = 0.0;
	
	cout << "T2 - Enter the number of measures to be made: ";
	cin >> n;
	cout << endl;
	vector< double > measures2;
	
	for(int i=0; i<n; i++)								
	{
		double xi;
		cout << "Enter measure " << count << ": ";
		cin >> xi;
		cout << endl;
		
		measures2.push_back(xi);
		measure_med2 += xi;
		measure_quadMed2 += pow(xi, 2);
		
		count++;
	}
	
	measure_med2 = measure_med2/n;
	measure_quadMed2 = measure_quadMed2/n;
	
	count =1;
	cout << "For t2:" << endl;
	cout << "-----------------------------------" << endl;
	for(int i=0; i<measures2.size(); i++)
	{
		cout << "| Measure " << count << ": " << measures2.at(i) << endl;
		count++;
	}	
	double variance_amostral2, variance_experimental2, variance_total2;
	
	variance_amostral2 = sqrt((n*(measure_quadMed2 - pow(measure_med2, 2)))/(n-1));
	variance_experimental2 = variance_amostral2/sqrt(n);
	variance_total2 = sqrt(pow(variance_experimental2, 2)+pow(0.001, 2));
	
	cout << "| Measure med = " << measure_med2 << endl;
	cout << "| Measure^2 med = " << measure_quadMed2 << endl;
	cout << "| Amostral variance = " << variance_amostral2 << endl;
	cout << "| Experimental variance = " << variance_experimental2 << endl;
	cout << "| Total variance = " << variance_total2 << endl;
	cout << "-----------------------------------" << endl << endl;
	
	if(file.is_open())
	{
		file << "t2 med = ";
		for(int i=0; i<measures2.size(); i++)
		{
			file << measures2.at(i) << " + "; 
		}
		file  << " = " << measure_med2 << endl << endl;
		
		file << "t2 quad med = ";
		for(int i=0; i<measures2.size(); i++)
		{
			file << measures2.at(i) << "^2" << " + "; 
		}
		file  << " = " << measure_quadMed2 << endl << endl;
	}
	file.close();

	double g;

	g = (2*((d2/measure_med2)-(d1/measure_med)))/(pow(measure_med2, 2) - measure_med);

	cout << endl << "With that we can estimate the gravity" << endl;
	cout << "g = " << g << endl;
	
	return 0;
}
