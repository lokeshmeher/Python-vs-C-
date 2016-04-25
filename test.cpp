#include <iostream>
#include <random>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>


int main()
{
	using namespace std;
	clock_t begin = clock();

	double minValue = 1.00;		// min value of each FP number
	double maxValue = 1000.00;	// max value of each FP number
	const int size = 1000000;	// number of FP numbers to generate

	random_device rd;
	mt19937 mersenne(rd());
	uniform_real_distribution<double> dis{minValue, maxValue};
	
	vector<double> arr_1(size);
	for (int i = 0; i < size; ++i)
		arr_1[i] = dis(mersenne);

	vector<double> arr_2(size);
	for (int i = 0; i < size; ++i)
		arr_2[i] = dis(mersenne);

	ofstream outf("cpp_results.txt");
	if (!outf)
	{
		cerr << "Cannot open file for writing!" << endl;
		exit(1);
	}
	for (int i = 0; i < size; ++i)
		outf << arr_1[i] << "\t/\t" << arr_2[i] << "\t=\t" << arr_1[i] / arr_2[i] << '\n';
	outf.close();

	clock_t end = clock();
	double elapsed_secs = static_cast<double>(end - begin) / CLOCKS_PER_SEC;
	cout << elapsed_secs << " secs."<< endl;
	return 0;
}
