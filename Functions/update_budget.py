def input_value(description):
    return float(input(f"Monthly {description}: "))


def calculate_percentage(type_description, amount, income):
        percentage = (amount / income) * 100
        print(f"Your {type_description} is {percentage:.2f}% of your income.\n")


def main():
    print("This is a budget calculator.")
    income = input_value("income")
    rent = input_value("rent")
    utilities = input_value("utilities")
    groceries = input_value("groceries")
    transp = input_value("transportation")

    savings = income * .2
    expenses = rent + utilities + groceries + transp
    spend = income - expenses - savings

    print(f"You make ${income:.2f}")
    print(f"Your expenses are ${expenses:.2f}")
    print(f"Your savings are ${savings:.2f}")
    print(f"Your spending money is ${spend:.2f}")

    calculate_percentage("rent", rent, income)
    calculate_percentage("utilities", utilities, income)
    calculate_percentage("groceries", groceries, income)
    calculate_percentage("transportation", transp, income)
    calculate_percentage("expenses", expenses, income)
    calculate_percentage("savings", savings, income)
    calculate_percentage("spend", spend, income)

if __name__ == __name__:

    main()