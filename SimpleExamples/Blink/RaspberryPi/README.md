# Raspberry Pi
Raspberry Pi board

By default the leds on the raspberry pi are used for system purposes. But depending on the model this can be overwritten. On all boards it should be possible to control the green led. The red one can be controlled, too. But it is a bit more complicated.
So lets concentrate on the green one only.

The shell command to remove the operating system control for the green led is

´´´
sudo sh -c 'echo none > /sys/class/leds/led0/trigger'
´´´

To give the controll back to the operating system use:

´´´
sudo sh -c 'echo mmc0 > /sys/class/leds/led0/trigger'
´´´

Now the led con be cntrolled by shell or python, etc.

To turn the led on use 

´´´
sudo sh -c 'echo 1 >/sys/class/leds/led0/brightness'
´´´

to turn it off

´´´
sudo sh -c 'echo 0 >/sys/class/leds/led0/brightness'
´´´
