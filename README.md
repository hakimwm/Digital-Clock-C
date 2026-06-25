# Digital-Clock-C
# Real-Time Terminal Digital Clock

A lightweight, console-based digital clock application built in C that displays the system's real-time hours, minutes, and seconds dynamically.

## 🛠️ Technologies Used
* **Language:** C (C11 Standard)
* **Libraries:** `<time.h>`, `<unistd.h>`, `<stdlib.h>`

## 🚀 Key Implementation Features
* **Dynamic Time Fetching:** Utilizes `<time.h>` functions (`time_t` and `localtime`) to pull and decode the accurate local system time directly from the host machine[cite: 2].
* **Active Screen Refreshing:** Employs terminal manipulation commands (`system("cls")`) alongside output buffer clearing (`fflush(stdout)`) to refresh the clock face seamlessly in place instead of spamming new lines[cite: 2].
* **Resource-Efficient Loops:** Implements a controlled infinite loop backed by a 1-second pause interval (`sleep(1)`) to regulate execution timing and minimize CPU usage[cite: 2].

## 📂 Project Structure
* `digital_clock.c` - The core source code containing the system time extraction and terminal rendering loop.

---
*Developed to demonstrate proficiency in system-level libraries, loop control structures, and basic console rendering using C.*
