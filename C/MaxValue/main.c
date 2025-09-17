#include <stdio.h>

int main() {
	int x = 630;
	int y = 20;
	int max_value;
	
	max_value = (x > y) ? x : y; // If x is greater than y, max_value will be x, otherwise it'll be y
	printf("The maximum value is: %d\n", max_value);
	return 0;
}
