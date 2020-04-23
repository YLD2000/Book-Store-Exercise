#include <iostream>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
	Sales_data data1, data2;
	double price1 = 0.0, price2 = 0.0;
	std::cout << "enter transaction info 1" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price1;
	std::cout << "enter transation info 2" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price2;

	data1.revenue = data1.units_sold * price1;
	data2.revenue = data2.units_sold * price2;
	std::string apple(34, 'ab');
	std::cout << apple.size() << std::endl;
	if (data1.bookNo == data2.bookNo) {
		int totalUnits = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		if (totalUnits != 0)
			std::cout << data1.bookNo << " " << totalUnits << " " << totalRevenue << std::endl;
		else
			std::cout << "No Sales :(" << std::endl;
		return 0;
	}
	else {
		std::cout << "Book transaction must match" << std::endl;
		return -1;
	}
}
