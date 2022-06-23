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
#include <iomanip>

using namespace std;

void item_calc(float a1, float a2, float a3) {
	float cost_before_tax;
	float tax_amount;
	float cost_after_tax;

	cost_before_tax = (a1 * a2);
	tax_amount = (cost_before_tax * a3 / 100);
	cost_after_tax = (cost_before_tax + tax_amount);

	cout << "\nCost before tax: $" << fixed << setprecision(2) << cost_before_tax << endl;
	cout << "Tax amount: $" << fixed << setprecision(2) << tax_amount << endl;
	cout << "Cost after tax: $" << fixed << setprecision(2) << cost_after_tax << endl;
}

void item_data() {
	const int SIZE = 80;
	char item_name[SIZE];
	float cost;
	int quantity;
	float tax_percent;
	char item_type[SIZE];

	cout << "Item name: ", cin.getline(item_name, SIZE);
	cout << "Cost: ", cin >> cost;
	cout << "Quantity: ", cin >> quantity;
	cout << "Tax percent: ", cin >> tax_percent;
	cout << "Item type: ", cin.ignore(), cin.getline(item_type, SIZE);

	item_calc(cost, quantity, tax_percent);
}

int main() {
	item_data();
	return 0;
}

/* Item name: Ground beef
 * Cost: 7.55
 * Quantity: 4
 * Tax percent: 8.75
 * Item type: Meat
 * 
 * Cost before tax: $30.20
 * Tax amount: $2.64
 * Cost after tax: $32.84
 */
