; PlatformIO Project Configuration File
;
;   Build options: build flags, source filter
;   Upload options: custom upload port, speed and extra flags
;   Library options: dependencies, extra library storages
;   Advanced options: extra scripting
;
; Please visit documentation for the other options and examples
; https://docs.platformio.org/page/projectconf.html

[env:uno]
platform = atmelavr
board = uno
framework = arduino
lib_deps = 
	wayoda/LedControl@^1.0.6
	arduino-libraries/Servo@^1.1.8
	dfrobot/DFRobotDFPlayerMini@^1.0.5
