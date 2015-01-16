########## DEFINITIONS ##########
TARGET		:= mapper

SUBDIRS		:= src lib lib/storage
#SUBDIRS		:= src $(shell find lib -mindepth 1 -type d)
INCLUDES	:= -Ilib
LIBRARIES	:= -pthread
DEFINES		:= -D_FILE_OFFSET_BITS=64
OBJECTS		:=

########## OPTIONS ##########
CXX			:= clang++
CXXFLAGS	:= -std=c++11 -O2 -Wall

include makefile_tgt.mk
