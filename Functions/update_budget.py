
print("Hello and welcome to your finacial calculator")
income = float(input("What is your montly income?:\n"))
rent = float(input("What is your monthly rent?:\n"))
utilitties = float(input("What is your monthly utilitties?:\n"))
groceries = float(input("What is your monthly groceries?:\n"))
transp = float(input("What is your monthly transportation cost?:\n"))
savings = income * .2
expenses = rent+utilitties+groceries+transp
spending = income-expenses-savings
def percent(type, amount):
    per = amount/income *100

    return f"your {type} is {per}% income."

print(f"Your monthly income is ${income:.2f}\n")
print(f"Your monthly expenses are ${expenses:.2f}\n")
print(f"Your monthly savings is ${savings:.2f}\n")
print(f"Your monthly spending money is ${spending:.2f}\n")
print(percent("rent", rent))
print(percent("utilities", utilitties))
print(percent("groceries", groceries))
print(percent("transportation", transp))
print(percent("savings", savings))
print(percent("expenses", expenses))