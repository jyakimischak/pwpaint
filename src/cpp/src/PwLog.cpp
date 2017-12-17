
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

//***********************************************************************************************
// Log
//***********************************************************************************************

void PwLog::info(string source, string msg) {
    if(logLevel == ERROR) {
        return;
    }
    cout << "INFO - " << source << ": " << msg << endl;
}

void PwLog::error(string source, string msg) {
    cout << "ERROR - " << source << ": " << msg << endl;
}

