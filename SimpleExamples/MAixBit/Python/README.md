# Sipeed MAix BiT for RISC-V AI+IoT

My starting point is: https://github.com/sipeed/MaixPy/. Ok, I downloaded kflash for windows and the binaries, 
plugged the board in and started the program. Start flashing and Error!!!! "Unable to enter ISP mode".

The alternative is to download the python program kflash.py. From the kendryte github page https://github.com/kendryte/kflash.py. 
This did the trick.

To connect to the device I used putty. Use the same port as for the flashing (in my case COM9 at 115200). 
Afterwards press the reset button (the right one) and you should get a repl.
