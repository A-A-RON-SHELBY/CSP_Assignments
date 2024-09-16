#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, spend;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses;
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much does your rent cost?\n");
    scanf("%f", &rent);
    printf("How much does your utilities cost?\n");
    scanf("%f", &utilities);
    printf("How much do your groceries cost?\n");
    scanf("%f", &groceries);
    printf("How much does your transportation cost?\n");
    scanf("%f", &transportation);
    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("You expenses are $%.2f\n", expenses);
    printf("You savings are $%.2f\n", savings);
    printf("You spending money is $%.2f\n", spend);
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    psavings = savings/income *100;
    pexpenses = expenses/income *100;
    printf("Your rent is %d%% of your income.\n", (int) prent);
    printf("Your utilities are %d%% of your income.\n", (int) putilities);
    printf("Your groceries is %d%% of your income.\n", (int) pgroceries);
    printf("Your transportation is %d%% of your income.\n", (int) ptransportation);
    printf("Your savings is %d%% of your income.\n", (int) psavings);
    printf("Your expenses is %d%% of your income.\n", (int) pexpenses);
    return 0;
}