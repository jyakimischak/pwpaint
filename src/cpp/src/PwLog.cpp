
//******************************************************
// Simple little logger.
// Author: Jonas Yakimischak - Poorwill Games
//******************************************************

#include "PwLog.h"

using namespace std;

#ifdef LOG_LEVEL_INFO
    LogLevel logLevel = INFO;
#else
    LogLevel logLevel = ERROR;
#endif

PwLog pwLog;
ostringstream logoss;

//***********************************************************************************************
// Log
//***********************************************************************************************

void PwLog::info(string fileName, string functionName) {
    if(logLevel == ERROR) {
        return;
    }
    printMsg(fileName, "", functionName);
}

void PwLog::info(string fileName, string className, string functionName) {
    if(logLevel == ERROR) {
        return;
    }
    printMsg(fileName, className, functionName);
}

void PwLog::error(string fileName, string functionName) {
    printMsg(fileName, "", functionName);
}

void PwLog::error(string fileName, string className, string functionName) {
    printMsg(fileName, className, functionName);
}

void PwLog::printMsg(string fileName, string className, string functionName) {
    if(className.empty()) {
        cout << "INFO => " << fileName << "." << functionName << "(): " << logoss.str() << endl;
    } else {
        cout << "INFO => " << fileName << "." << className << "." << functionName << "(): " << logoss.str() << endl;
    }
    logoss.str("");
    logoss.clear();
}


