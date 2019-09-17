# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import random
y = random.randint(1,7)
print(y)
while True:
    x = int(input("Enter a number"))
    if y == x:
        print('You won')
        break
    else:
        print(str(y) + '\nTry again')