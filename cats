# 1. Take input from user
# 2. Generate random number
# 3. Ask user for input if number doesnt equal input


import random

print('What is your name?')
name = input()

print('Hello ' + name + ', I am thinking of a number between 1 and 10')
number = random.randint(1,10)

print('Make a guess')

for numberOfGuesses in range(1,6):
    try:
        guess = int(input())
        if  guess < number:
            print('Too low..Try again')
        elif guess > number:
            print('Too high..Try again')
        else:
            break
    except ValueError:
        print('You need to enter a numeric value, punk')
if guess == number:
    print('Congratulations ' + name + ' you guess correctly with ' + str(numberOfGuesses) + ' tries!')
    
else:
    print('You did not get the number in 5 tries, maybe next time..')

