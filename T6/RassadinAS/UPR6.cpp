// UPR6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stack>
#include <stdio.h>
#include <iostream>


int main()
{
	std::stack<int> stek;
	int N;
	
	std::cin >> N;
	while (N != 0) {
		stek.push(N % 2);
		N /= 2;
	}
	while (stek.size()!= 0) {
		std::cout << stek.top();
		stek.pop();
	}
	std::cout << "\n";
	system("pause");
    return 0;
}

