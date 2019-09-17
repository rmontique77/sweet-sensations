#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan 18 12:00:53 2017

@author: raj
"""
from gpiozero import LED
led = LED(17)
led.on()
led.off()