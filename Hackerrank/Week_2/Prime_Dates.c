#include <stdio.h>
#include <stdlib.h>

int daysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12)
        return 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    // February case
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 29;
    return 28;
}

int findPrimeDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int ans = 0;

    while (1) {
        // create concatenated number
        long num = d1;
        num = num * 100 + m1;
        num = num * 10000 + y1;

        if (num % 4 == 0 || num % 7 == 0) {
            ans++;
        }

        if (d1 == d2 && m1 == m2 && y1 == y2) {
            break;
        }

        d1++;
        if (d1 > daysInMonth(m1, y1)) {
            d1 = 1;
            m1++;
            if (m1 > 12) {
                m1 = 1;
                y1++;
            }
        }
    }

    return ans;
}

int main() {
    char start[11], end[11];
    scanf("%s %s", start, end);

    int d1, m1, y1;
    int d2, m2, y2;

    sscanf(start, "%d-%d-%d", &d1, &m1, &y1);
    sscanf(end, "%d-%d-%d", &d2, &m2, &y2);

    int result = findPrimeDates(d1, m1, y1, d2, m2, y2);
    printf("%d\n", result);

    return 0;
}
