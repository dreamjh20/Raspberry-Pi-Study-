from picamera import PiCamera
from time import sleep

camera = PiCamera()

camera.rotation = 0

for i in range(0, 360, 90):
    camera.start_preview()
    sleep(1)
    camera.rotation = i


sleep(3)
camera.stop_preview()