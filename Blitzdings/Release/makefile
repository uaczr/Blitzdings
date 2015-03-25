################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include libraries/fastled/subdir.mk
-include libraries/core/subdir.mk
-include Patterns/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/arduino.ar \

ELF += \
Blitzdings.elf \

EEP += \
Blitzdings.eep \

FLASH_IMAGE += \
Blitzdings.hex \


# All Target
all: Blitzdings

# Tool invocations
Blitzdings: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-size" -A "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.elf"
	@echo 'Finished building target: $@'
	@echo ' '

C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-ar" rcs  "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

Blitzdings.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-gcc" -w -Os -Wl,--gc-sections -mmcu=atmega2560  -o "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.elf"   $(LINK_OBJ) $(AR)  "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/arduino.ar" "-LC:/Users/Christoph/git/Blitzdings/Blitzdings/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

Blitzdings.eep: $(ELF)
	@echo 'Create eeprom image'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.elf" "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.eep"
	@echo 'Finished building: $@'
	@echo ' '

Blitzdings.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-objcopy" -O ihex -R .eeprom  "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.elf" "C:/Users/Christoph/git/Blitzdings/Blitzdings/Release/Blitzdings.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELF)$(C++_DEPS)$(AR)$(C_DEPS)$(CC_DEPS)$(FLASH_IMAGE)$(AR_OBJ)$(CPP_DEPS)$(LINK_OBJ)$(EEP)$(CXX_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) Blitzdings
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
