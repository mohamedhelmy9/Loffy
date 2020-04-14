################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Button_ECU.c \
../GPIO_MCAL.c \
../KeyPad_ECU.c \
../LCD_ECU.c \
../LED_ECU.c \
../Loffy.c \
../Seven_Segment_ECU.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Button_ECU.o \
GPIO_MCAL.o \
KeyPad_ECU.o \
LCD_ECU.o \
LED_ECU.o \
Loffy.o \
Seven_Segment_ECU.o


OBJS_AS_ARGS +=  \
Button_ECU.o \
GPIO_MCAL.o \
KeyPad_ECU.o \
LCD_ECU.o \
LED_ECU.o \
Loffy.o \
Seven_Segment_ECU.o


C_DEPS +=  \
Button_ECU.d \
GPIO_MCAL.d \
KeyPad_ECU.d \
LCD_ECU.d \
LED_ECU.d \
Loffy.d \
Seven_Segment_ECU.d


C_DEPS_AS_ARGS +=  \
Button_ECU.d \
GPIO_MCAL.d \
KeyPad_ECU.d \
LCD_ECU.d \
LED_ECU.d \
Loffy.d \
Seven_Segment_ECU.d


OUTPUT_FILE_PATH +=Loffy.elf

OUTPUT_FILE_PATH_AS_ARGS +=Loffy.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR32/GNU C Compiler















./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -funsigned-char -funsigned-bitfields -O1 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -mmcu=atmega32   -o"$@" "$<" 
	@echo Finished building: $<



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : (AVR_8_bit_GNU_Toolchain_3.4.1_830) 4.6.2
	$(QUOTE)D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="Loffy.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group  -mmcu=atmega32  
	@echo Finished building target: $@
	"D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "Loffy.elf" "Loffy.hex"
	"D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "Loffy.elf" "Loffy.eep" || exit 0
	"D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objdump.exe" -h -S "Loffy.elf" > "Loffy.lss"
	"D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "Loffy.elf" "Loffy.srec"
	"D:\Atmel stadio\extensions\Atmel\AVRGCC\3.4.1.95\AVRToolchain\bin\avr-size.exe" "Loffy.elf"
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) 
	rm -rf "Loffy.elf" "Loffy.a" "Loffy.hex" "Loffy.lss" "Loffy.eep" "Loffy.map" "Loffy.srec"
	