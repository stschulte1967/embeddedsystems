# Sipeed MAix BiT for RISC-V AI+IoT
Blink example, using the GPIO

The example code from https://maixpy.sipeed.com/en/get_started/led_blink.html

```
from Maix import GPIO

fm.register(board_info.LED_G, fm.fpioa.GPIO0)

led_r=GPIO(GPIO.GPIO0,GPIO.OUT)
led_r.value(0)
```

Here some explanations:

To use a pin you have to register it. This is done using the function fm.register.
This creates a mapping between a functionality and a PIN.

After the PIN can be configured. Here the GPIO pin is defined as output port and 
than its values is set to 1 or 0. 0 here means the led turns on, 1 the led turns of.

Before using a PIN with another functionality, it has to be unregistered.

For further information see: https://maixpy.sipeed.com/en/libs/builtin_py/fm.html

The values of the led are

- LED_R 14
- LED_G 13
- LED_B 12




