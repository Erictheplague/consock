#ifdef Win32
// Windows-specific headers
      #ifndef _WINSOCKAPI_
      #define _WINSOCKAPI_
      #endif
      #include <windows.h>
      #include <winsock2.h>
#else
// Unix-specific headers
        #include <memory.h>
        #include <errno.h>
        #include <sys/ioctl.h>
        #include <sys/socket.h>
        #include <sys/time.h>
        #include <netinet/in.h>
        #include <arpa/inet.h>
#endif

// Common headers
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "consock.h"
#include "consockLog.h"