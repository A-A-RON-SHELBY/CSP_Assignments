video 4:15
print("Hello and welcom to your finacial calculator")
income = float(input("hWhat is your montly income?:\n"))
rent = float(input("What is your monthly rent?:\n"))
utilitties = float(input("What is your monthly utilitties?:\n"))
groceries = float(input("What is your monthly groceries?:\n"))
transp = float(input("What is your monthly transportation cost?:\n"))
savings = income * .2
expenses = rent+utilitties+groceries+transp
spending = income-expenses-savings
prent = rent/income *100
putilitties = utilitties/income *100
pgroceries = groceries/income *100
ptransp = transp/income *100
psavings = savings/income *100
pexpenses = expenses/income *100
def percent

print("your savings is", savings)
print("your spending money is", spending)
prent=(float(rent)/float(income))*100
putilitties=(float(utilitties)/float(income))*100
pgroceries=(float(groceries)/float(income))*100
ptransp=(float(transp)/float(income))*100
print("your rent takes up this percent of your income;", prent)
print("your utilitties take up this percent of your income;", putilitties)
print("your groceries take up this percent of your income;", pgroceries)
print("you transportation takes up this percent of your income;", ptransp)