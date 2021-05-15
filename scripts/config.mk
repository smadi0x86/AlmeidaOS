#--------------------
# Project directories
#--------------------
DIR_SRC		:= $(DIR_ROOT)/src

DIR_BUILD		:= $(DIR_ROOT)/build
DIR_SCRIPTS	:= $(DIR_ROOT)/scripts
DIR_INCLUDE	:= $(DIR_ROOT)/include

#--------------------
# Key files
#--------------------
OUTPUT_RAW_DISK := $(DIR_BUILD)/disk.img

#-------------------
# Tool configuration
#-------------------
TARGET		:= x86_64-elf

CC				:= $(TARGET)-gcc

CCFLAGS		:= -std=c99 -I$(DIR_INCLUDE) -Qn -g \
		   				-m64 -mno-red-zone -mno-mmx -masm=intel \
		   				-ffreestanding -fno-asynchronous-unwind-tables \
		   				-Wall -Wextra -Wpedantic -mcmodel=large

AS				:= nasm

ASFLAGS		:= -f bin


LD				:= $(TARGET)-ld

LDFLAGS		:= -nostdlib -z max-page-size=0x1000

OBJCOPY		:= $(TARGET)-objcopy

MAKE_FLAGS	:= --quiet --no-print-directory

QEMU		:= qemu-system-x86_64

GDB			:= gdb
