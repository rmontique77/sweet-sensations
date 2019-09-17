#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Oct 31 22:29:43 2016

@author: raj
"""
name = " "
while name.upper() != "JIM":
    name = input('What is your name? \n')
    if name.upper() == 'RAJEEV':
        print('You da one ' + name.capitalize() + ' XOXOXOX')
    elif name.upper() == "FAHAD":
        print("You suck " + name.capitalize())
    else:
        print("You didn't enter the correct response")