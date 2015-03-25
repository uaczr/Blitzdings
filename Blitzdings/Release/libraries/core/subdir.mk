################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../libraries/core/CDC.cpp \
../libraries/core/HID.cpp \
../libraries/core/HardwareSerial.cpp \
../libraries/core/HardwareSerial0.cpp \
../libraries/core/HardwareSerial1.cpp \
../libraries/core/HardwareSerial2.cpp \
../libraries/core/HardwareSerial3.cpp \
../libraries/core/IPAddress.cpp \
../libraries/core/Print.cpp \
../libraries/core/Stream.cpp \
../libraries/core/Tone.cpp \
../libraries/core/USBCore.cpp \
../libraries/core/WMath.cpp \
../libraries/core/WString.cpp \
../libraries/core/abi.cpp \
../libraries/core/main.cpp \
../libraries/core/new.cpp 

C_SRCS += \
../libraries/core/WInterrupts.c \
../libraries/core/hooks.c \
../libraries/core/wiring.c \
../libraries/core/wiring_analog.c \
../libraries/core/wiring_digital.c \
../libraries/core/wiring_pulse.c \
../libraries/core/wiring_shift.c 

C_DEPS += \
./libraries/core/WInterrupts.c.d \
./libraries/core/hooks.c.d \
./libraries/core/wiring.c.d \
./libraries/core/wiring_analog.c.d \
./libraries/core/wiring_digital.c.d \
./libraries/core/wiring_pulse.c.d \
./libraries/core/wiring_shift.c.d 

CPP_DEPS += \
./libraries/core/CDC.cpp.d \
./libraries/core/HID.cpp.d \
./libraries/core/HardwareSerial.cpp.d \
./libraries/core/HardwareSerial0.cpp.d \
./libraries/core/HardwareSerial1.cpp.d \
./libraries/core/HardwareSerial2.cpp.d \
./libraries/core/HardwareSerial3.cpp.d \
./libraries/core/IPAddress.cpp.d \
./libraries/core/Print.cpp.d \
./libraries/core/Stream.cpp.d \
./libraries/core/Tone.cpp.d \
./libraries/core/USBCore.cpp.d \
./libraries/core/WMath.cpp.d \
./libraries/core/WString.cpp.d \
./libraries/core/abi.cpp.d \
./libraries/core/main.cpp.d \
./libraries/core/new.cpp.d 

LINK_OBJ += \
./libraries/core/CDC.cpp.o \
./libraries/core/HID.cpp.o \
./libraries/core/HardwareSerial.cpp.o \
./libraries/core/HardwareSerial0.cpp.o \
./libraries/core/HardwareSerial1.cpp.o \
./libraries/core/HardwareSerial2.cpp.o \
./libraries/core/HardwareSerial3.cpp.o \
./libraries/core/IPAddress.cpp.o \
./libraries/core/Print.cpp.o \
./libraries/core/Stream.cpp.o \
./libraries/core/Tone.cpp.o \
./libraries/core/USBCore.cpp.o \
./libraries/core/WInterrupts.c.o \
./libraries/core/WMath.cpp.o \
./libraries/core/WString.cpp.o \
./libraries/core/abi.cpp.o \
./libraries/core/hooks.c.o \
./libraries/core/main.cpp.o \
./libraries/core/new.cpp.o \
./libraries/core/wiring.c.o \
./libraries/core/wiring_analog.c.o \
./libraries/core/wiring_digital.c.o \
./libraries/core/wiring_pulse.c.o \
./libraries/core/wiring_shift.c.o 


# Each subdirectory must supply rules for building sources it contributes
libraries/core/CDC.cpp.o: ../libraries/core/CDC.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HID.cpp.o: ../libraries/core/HID.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HardwareSerial.cpp.o: ../libraries/core/HardwareSerial.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HardwareSerial0.cpp.o: ../libraries/core/HardwareSerial0.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HardwareSerial1.cpp.o: ../libraries/core/HardwareSerial1.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HardwareSerial2.cpp.o: ../libraries/core/HardwareSerial2.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/HardwareSerial3.cpp.o: ../libraries/core/HardwareSerial3.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/IPAddress.cpp.o: ../libraries/core/IPAddress.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/Print.cpp.o: ../libraries/core/Print.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/Stream.cpp.o: ../libraries/core/Stream.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/Tone.cpp.o: ../libraries/core/Tone.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/USBCore.cpp.o: ../libraries/core/USBCore.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/WInterrupts.c.o: ../libraries/core/WInterrupts.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/WMath.cpp.o: ../libraries/core/WMath.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/WString.cpp.o: ../libraries/core/WString.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/abi.cpp.o: ../libraries/core/abi.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/hooks.c.o: ../libraries/core/hooks.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/main.cpp.o: ../libraries/core/main.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/new.cpp.o: ../libraries/core/new.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/wiring.c.o: ../libraries/core/wiring.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/wiring_analog.c.o: ../libraries/core/wiring_analog.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/wiring_digital.c.o: ../libraries/core/wiring_digital.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/wiring_pulse.c.o: ../libraries/core/wiring_pulse.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/core/wiring_shift.c.o: ../libraries/core/wiring_shift.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


