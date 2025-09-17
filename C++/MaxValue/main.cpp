#include <iostream>

int main() {
	int x = 10;
	int y = 5;
	int max_value;
	
	max_value = (x > y) ? x : y; //If x is greater than y, max_value will be equal to x, otherwise it'll be y.
	std::cout << "The maximum value is: " << max_value << std::endl;
	return 0;
	
}
