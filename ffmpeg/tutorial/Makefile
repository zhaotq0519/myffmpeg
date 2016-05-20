####################################################

#################Makefile for ffmpeg################

####################################################
TARGET = player
TOP = .
ROOT = ..

CC = gcc

INCLUDES += -I$(ROOT)
INCLUDES += -I$(ROOT)/libavcodec
INCLUDES += -I$(ROOT)/libavformat
INCLUDES += -I$(ROOT)/libswscale
INCLUDES += -I$(ROOT)/libavutil
INCLUDES += -I$(ROOT)/libswresample

LD_LIB_PATH += -L$(ROOT)/libavcodec
LD_LIB_PATH += -L$(ROOT)/libavformat
LD_LIB_PATH += -L$(ROOT)/libswscale
LD_LIB_PATH += -L$(ROOT)/libavutil
LD_LIB_PATH += -L$(ROOT)/libswresample

LDFLAGS += $(LD_LIB_PATH) -lavutil -lavformat -lavcodec -lz -lavutil -lswscale -lswresample -lm -lpthread -llzma

CXXSOURCES += $(shell find . -maxdepth 1 -name '*.c')

OBJECTS = $(CXXSOURCES:.c=.o)
OUTPUT_DIR = .
CC_FLAG += $(INCLUDES)

.PHONY: clean all

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $(OUTPUT_DIR)/$@

.c.o:
	$(CC) -c $(CC_FLAG) -o $(OUTPUT_DIR)/$@ $<

clean:
	rm -f $(OBJECTS) $(OUTPUT_DIR)/$(TARGET)
