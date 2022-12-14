#include <stdio.h>
#include "basic.h"
#define DISCOUNT 0.0

static float chips = 2.4,
	     coffee = 4.5,
	     sprite = 3.0,
	     coke = 3.0,
	     happy_meal = 7.0;


int main() {
	while (1) {
		clear();
		char command[255];
		printf("--- Customer Billing System --- \n");
		printf("- Type n to start transaction - \n");
		printf("-   Type q to quit system     - \n"); 
		printf("Command: ");
		fgets(command, 255, stdin);
	}
}
