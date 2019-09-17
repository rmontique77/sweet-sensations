#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 18 12:00:53 2017

@author: raj
"""


from gpiozero import LED, Button
from time import sleep

led = LED(17)
button = Button(2)

button.wait_for_press()
led.on()
sleep(3)
led.off()