#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Oct 31 22:25:51 2016

@author: raj
"""

count = 0
while True:
    count+= 1
    if count > 10:
        break
    if count == 5:
        continue
    print(count)