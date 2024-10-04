import datetime

currenttime = datetime.datetime.now()

print(currenttime.hour)

if currenttime <= 12:
    print("Good Morning")
elif currenttime <= 18:
    print("Good Afternoon")
else: currenttime
print("Good Evening")