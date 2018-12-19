// TestStrftime.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <memory>
#include <time.h>


int _tmain(int argc, _TCHAR* argv[])
{
    int nMonthNow = -1;     // 当前月
    int nDayNow = -1;       // 当前日
    int nDayOfWeekNow = -1; // 当前周（年度中第几周）
    int nHour = -1;         // 当前小时
    time_t tmNow = ::time(0);
    struct tm stTm;
    errno_t err = ::localtime_s(&stTm, &tmNow);
    char szTimeDay[64];
    memset(szTimeDay, 0, sizeof(szTimeDay));
    strftime(szTimeDay, sizeof(szTimeDay), "%W", &stTm);
    if (strlen(szTimeDay) == 0)
    {
        int i = 0;
    }
    
    return 0;
}

