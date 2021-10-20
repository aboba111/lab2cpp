
#include<iostream>
#include "versyera.h"

int main() {
	Versyera V(2, 4);
	Versyera V2(3, 5);
	Versyera V3(3, 7);
	int c = -1;
	while (c != 9) {
		std::cout << "Enter number 1,2,3,4,5" << std::endl;
		std::cout << "1:return y" << std::endl;
		std::cout << "2:return points" << std::endl;
		std::cout << "3:return S" << std::endl;
		std::cout << "4:return V" << std::endl;
		std::cout << "5:formula" << std::endl;
		std::cout << "6:change X" << std::endl;
		std::cout << "7:change Y" << std::endl;
		std::cout << "8:change A" << std::endl;
		std::cout << "9:Exit" << std::endl;
		std::cin >> c;
		switch (c) {
		case 1: {
			std::cout << V.getYByX(V.getX()) << std::endl;
			break;
		}
		case 2: {
			std::vector<std::pair<double, double>> point = V.points();
			for (int i = 0;i < 2;i++) {
				std::cout << point[i].first << ' ' << point[i].second << std::endl;
			}
			break;
		}
		case 3: {
			std::cout << V.space() << std::endl;
			break;
		}
		case 4: {
			std::cout << V.volume() << std::endl;
			break;
		}
		case 5: {
			std::vector<char> formula = V.getEquation();
			for (int i = 0;i < formula.size();i++) {
				std::cout << formula[i] << ' ';
			}
			std::cout << std::endl;
		}
		case 6: {
			int x;
			std::cin >> x;
			V.setX(x);
			break;
		}
		case 7: {
			int y;
			std::cin >> y;
			V.setY(y);
			break;
		}
		case 8: {
			int a;
			std::cin >> a;
			V.setA(a);
			break;
		}

		}
	}
	return 0;
}