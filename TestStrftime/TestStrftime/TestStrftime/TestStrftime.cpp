// TestStrftime.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <memory>
#include <time.h>


int _tmain(int argc, _TCHAR* argv[])
{
    int nMonthNow = -1;     // ��ǰ��
    int nDayNow = -1;       // ��ǰ��
    int nDayOfWeekNow = -1; // ��ǰ�ܣ�����еڼ��ܣ�
    int nHour = -1;         // ��ǰСʱ
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

