//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: SPD_EVENTLOG_INFORMATION
//
// MessageText:
//
// %1: %2
//
#define SPD_EVENTLOG_INFORMATION         0x60000001L

//
// MessageId: SPD_EVENTLOG_WARNING
//
// MessageText:
//
// %1: %2
//
#define SPD_EVENTLOG_WARNING             0xA0000001L

//
// MessageId: SPD_EVENTLOG_ERROR
//
// MessageText:
//
// %1: %2
//
#define SPD_EVENTLOG_ERROR               0xE0000001L

