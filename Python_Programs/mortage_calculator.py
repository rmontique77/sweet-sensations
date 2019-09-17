#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Oct 22 20:52:17 2016

@author: djscreechie
"""
#Get information about the loan

monthly_payments = 0
loan_amount = 0
interest_rate = 0
#For an interest rate of 5% i=(5/100)
n_of_payments = 0
# This represents the number of payments.
loanDurationInYears = 0

#Request input from the usrs

str_loan_amount = input('How much is your desired loan amount? \n')
str_interest_rate = input('What is the interest rate for this loan? \n')
str_loanDurationInYears = input('How many years would you like to repay this loan in? \n')

#Convert strings into float numbers

loan_amount = float(str_loan_amount)
interest_rate = float(str_interest_rate)

loanDurationInYears = float(str_loanDurationInYears)
n_of_payments = loanDurationInYears*12

#Calculate the payment using formula.

monthly_payments = loan_amount * (interest_rate * (1 + interest_rate) * n_of_payments) / ((1 + interest_rate) * (n_of_payments - 1))

print('Your monthly payment is equal to %d' % monthly_payments)