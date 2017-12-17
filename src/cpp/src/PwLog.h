
//******************************************************
// Simple little logger.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************


#ifndef PW_LOG_H
#define PW_LOG_H

#include <iostream>
#include <sstream>


enum LogLevel {
    INFO,
    ERROR
};
extern LogLevel logLevel;

class PwLog {
    public:
        void info(std::string fileName, std::string functionName);
        void info(std::string fileName, std::string className, std::string functionName);
        void error(std::string fileName, std::string functionName);
        void error(std::string fileName, std::string className, std::string functionName);
    private:
        void printMsg(std::string fileName, std::string className, std::string functionName);
};
extern PwLog pwLog;
extern std::ostringstream logoss;

#endif

