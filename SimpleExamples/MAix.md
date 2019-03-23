# MAix Kendryte

## Global information

to compile a project add the toolchain to the PATH and use the following command:

```
cmake .. -DPROJ=hello_world -DTOOLCHAIN=D:/apps/kendryte-toolchain/bin -G "Unix Makefiles" && make
```

Of course you have to adapt the PROJ and TOOLCHAIN settings to your project/environment.

## K-Flash

Different from the first impression the K-Flash tool works for the MAix Bit. The trick is to press the and hold the Boot button 
(the left one) during the complete flash process.

## Installing the kendryte toolchain

The process is well described in https://hackaday.io/project/162174-kendryte-k210-development-tutorial-for-windows-10.
The screen for the installation of the visual Cpp build tools is different, but the important thing is to install the Windows 8.1 SDK.
The other, but correctly described thing is the use of the option -G "Unix Maskefiles". It is correct, you need unix workfiles,
by default.
