#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_game_rules();
double get_bank_balance();
double get_wager_amount();
int check_wager_amount(double wager, double balance);
int roll_die();
int calculate_sum_dice(int die1, int die2);
int is_win_loss_or_point(int sum_dice);
int is_point_loss_or_neither(int sum_dice, int point_value);
double adjust_bank_balance(double balance, double wager, int add_or_sub);
void chatter_messages(int num_rolls, int win_loss_neither,
	double init_bank_balance, double cur_bank_balance);
