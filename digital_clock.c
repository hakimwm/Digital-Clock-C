#include <stdio.h>
#include <time.h>
#include <unistd.h>   // for sleep() on Unix/Linux
#include <stdlib.h>   // for system()

int main() {
    while (1) {
        // Clear screen
        system("cls"); // Use "cls" if you're on Windows

        // Get current time
        time_t now = time(NULL);            // Get current time in seconds
        struct tm *local = localtime(&now); // Convert to local time

        // Display the clock
        printf("G-SHOCK (Real Time)\n");
        printf("%02d : %02d : %02d\n",

            local->tm_hour,
            local->tm_min,
            local->tm_sec);

        fflush(stdout); // Force output immediately

        sleep(1); // Wait for 1 second
    }

    return 0;
}
