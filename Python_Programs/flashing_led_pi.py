# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

from gpiozero import LED
from time import sleep

led = LED(17)

while True:
    led.on()
    sleep(1)
    led.off()
    sleep(1)
    print("Flashing LED")