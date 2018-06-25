import os
from time import sleep
import RPi.GPIO as GPIO

indexPin = 17
indexPin2 = 27

video1 = "Welcome.mov"
video2 = "RedSnow.mp4"

GPIO.setmode(GPIO.BCM)
GPIO.setup(indexPin, GPIO.IN)
GPIO.setup(indexPin2, GPIO.IN)

def my_callback(channel):
    print("GPIO" + str(channel) + " changed to " + str(GPIO.input(channel)))

GPIO.add_event_detect(indexPin, GPIO.FALLING, callback=my_callback)
GPIO.add_event_detect(indexPin2, GPIO.FALLING, callback=my_callback)

while True:
    sleep(100)
