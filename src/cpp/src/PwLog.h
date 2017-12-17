
//******************************************************
// Simple little logger.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************


#ifndef PW_LOG_H
#define PW_LOG_H

#include <iostream>


enum LogLevel {
    INFO,
    ERROR
};
extern LogLevel logLevel;

class PwLog {
    public:
        void info(std::string source, std::string msg);
        void error(std::string source, std::string msg);
};
extern PwLog pwLog;


#endif

