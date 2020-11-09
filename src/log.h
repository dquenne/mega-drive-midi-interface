#pragma once
#include <stdint.h>
#include <types.h>

#define MSG_MAX_LEN 40

typedef enum LogLevel LogLevel;

enum LogLevel { Info, Warn };

typedef struct Log Log;

struct Log {
    LogLevel level;
    u16 msgLen;
    char msg[MSG_MAX_LEN];
};

void log_init(void);
void log_info(const char* fmt, u16 val1, u16 val2, u16 val3);
void log_warn(const char* fmt, u16 val1, u16 val2, u16 val3);
Log* log_dequeue(void);
