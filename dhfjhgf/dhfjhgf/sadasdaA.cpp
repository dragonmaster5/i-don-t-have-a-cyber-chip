#include <iostream>
#include <string>
#include <chrono>
#include <random>
#include <vector>
#include <fstream>
using namespace std;
/*void selection_sort(vector<int>&);

void swap(int&, int&);

int main(int argc, char** argv) {
	random_device generator;
	uniform_int_distribution<int> dist(0, 100000000);
	vector<int> list;
	for (int i = 0; i < 10; ++i) {
		list.push_back(dist(generator));
		cout << list[i] << ",";
	}
	cout << endl;
	selection_sort(list);
	for (int i = 0; i < 10; ++i) {
		cout << list[i] << ",";
	}
	system("pause");
	return 0;
}
*/

int main(int argc, char** argv) {
	ofstream fout;
	fout.open("output.txt");
	if (fout.fail()) {
		return 1;
	}
	fout << "Sebastion is good at coding" << endl;
	fout.close();
	ifstream fin;

	fin.open("input.txt");
	if (fin.fail()) {
		return 1;
	}
	string a;
	fin >> a;
	cout << a << endl;
	system("pause");
	return 1;
		
}
void selection_sort(vector<int>& in) {
	int mindex = 0;
	for (  size_t i = 0; i < in.size() - 1; ++i) {
		mindex = i;
		for (size_t j = i + 1; j < in.size(); ++j) {
			if (in[j] < in[mindex]) {
				mindex = j;
			}
		}
		if (mindex != i) {
			swap(in[i], in[mindex]);
		}
	}
}
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}