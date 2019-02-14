#include "craps.h"

void print_game_rules() {
	printf("WELCOME TO CRAPS\n");
	printf("Here are the rules\n");
	printf("A player rolls two dice. Each die has the normal six faces.\n");
	printf("After the first roll, if the sum of the dice is 7 or 11, the player wins.\n");
	printf("the player wins. If the sum is 2, 3, or 12 this is \"craps\" and the player loses\n");
	printf("If the sum is 4, 5, 6, 8, 9, or 10 on the first roll\n");
	printf("Then this sum becomes the players \"point\". To win, you must keep rolling\n");
	printf("until you \"make your point\". If a 7 is rolled the player loses.\n");
}

double get_bank_balance() {
	double balance = 0.0;
	printf("Please enter an intial balance to bet with: ");
	scanf("%lf", &balance);
	return balance;
}

double get_wager_amount() {
	double wager = 0.0;
	printf("How much do you want to bet: ");
	scanf("%lf", &wager);
	return wager;
}

int check_wager_amount(double wager, double balance) {
	if (wager <= balance) {
		return 1;
	}
	else {
		return 0;
	}
}

int roll_die() {
	int roll = rand() % 6 + 1;
	return roll;
}

int calculate_sum_dice(int die1, int die2) {
	return die1 + die2;
}

int is_win_loss_or_point(int sum_dice) {
	if (sum_dice == 7 || sum_dice == 11) {
		return 1;
	}
	else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
		return 0;
	}
	else {
		return -1;
	}
}