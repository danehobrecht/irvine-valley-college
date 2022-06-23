/* Copyright 2021 Dane Hobrecht
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>
#include <string>

// Print array
template <class T>
std::string arr_pri(T *a, const int L) {
	std::string str;
	for (int i = 0; i < L; i++) {
		if (i + 1 < L) {
			std::cout << a[i] << " ";
			str = str + std::to_string(a[i]) + " ";
		} else {
			std::cout << a[i];
			str = str + std::to_string(a[i]);
		}
	}
	return str;
}

// Input array elements & output in respective order
template <class T>
std::string arr_inp(T *a, const int L) {
	std::string str;
	for (int i = 0; i < L; i++) {
		std::cout << "(" << i + 1 << "): ", std::cin >> a[i];
	}
	std::cout << "\nRespective order:\t";
	str = "Respective order:\t\t" + arr_pri(a, L);
	return str;
}

// Sort elements in descending order
template <class T>
std::string arr_des(T *a, const int L) {
	std::string str;
	float t;
	for (int i = 0; i < L; i++) {
		for (int j = i + 1; j < L; j++) {
			if (a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	std::cout << "\nDescending order:\t";
	str = "Descending order:\t\t" + arr_pri(a, L);
	return str;
}

// Parse for & print the smallest and second smallest values
template <class T>
std::string arr_sss(T *a, const int L) {
	float s = 2147483647;
	float ss = 2147483647;
	std::string str;
	for (int i = 0; i < L; i++) {
		if (s > a[i]) {
			ss = s;
			s = a[i];
		}
		if (ss > a[i] && a[i] > s) {
			ss = a[i];
		}
	}
	std::cout << "\nSmallest value:\t\t" << s << "\nSecond smallest value:\t" << ss << std::endl;
	str = "Smallest value:\t\t\t" + std::to_string(s) + "\nSecond smallest value:\t" + std::to_string(ss);
	return str;
}

// Output array text to file
template <class T>
void arr_out(T *a, const int L, int f) {
	std::string file = "out(" + std::to_string(f) + ").dat";
	std::ofstream fout(file, std::ofstream::app | std::ofstream::out);
	if (!fout) {
		std::cerr << "Error: file 'out(" + std::to_string(f) + ").dat' failed to open." << std::endl;
	}
	fout << arr_inp(a, L) << std::endl;
	fout << arr_des(a, L) << std::endl;
	fout << arr_sss(a, L) << std::endl;
	fout << std::endl, fout.close();
}

// Initial function
int main() {
	const int L1 = 5, L2 = 7, L3 = 6;
	int i[L1];
	float f[L2];
	char c[L3];
	std::cout << "Input integer elements." << std::endl;
	arr_out(i, L1, 1);
	std::cout << "\nInput float elements." << std::endl;
	arr_out(f, L2, 2);
	std::cout << "\nInput character elements." << std::endl;
	arr_out(c, L3, 3);
	return 0;
}

/* Input integer elements.
 * (1): 1
 * (2): 2
 * (3): 3
 * (4): 4
 * (5): 5
 *
 * Respective order:		1 2 3 4 5
 * Descending order:		5 4 3 2 1
 * Smallest value:			1
 * Second smallest value:	2
 *
 * Input float elements.
 * (1): 1.1
 * (2): 2.2
 * (3): 3.3
 * (4): 4.4
 * (5): 5.5
 * (6): 6.6
 * (7): 7.7
 *
 * Respective order:		1.1 2.2 3.3 4.4 5.5 6.6 7.7
 * Descending order:		7.7 6.6 5.5 4.4 3.3 2.2 1.1
 * Smallest value:			1.1
 * Second smallest value:	2.2
 *
 * Input character elements.
 * (1): H
 * (2): E
 * (3): L
 * (4): L
 * (5): O
 * (6): !
 *
 * Respective order:		H E L L O !
 * Descending order:		O L L H E !
 * Smallest value:			33
 * Second smallest value:	69
 */
