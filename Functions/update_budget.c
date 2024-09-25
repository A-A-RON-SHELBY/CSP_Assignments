#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;

float input(char type[], float var){
    printf("Monthly %s:\n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("Your %s type is %d%% of your income.\n", type, per);
}


int main(void){
    printf("This is a budget calculator.\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);

    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("You expenses are $%.2f\n", expenses);
    printf("You savings are $%.2f\n", savings);
    printf("You spending money is $%.2f\n", spend);

    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("expenses", expenses);
    percent("savings", savings);
    percent("spend", spend);

    return 0;
}