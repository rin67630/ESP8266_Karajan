/*
Karajan is a collaborative scheduler for the ESP 8266 and the Arduino IDE
Since it is specialised to do things in a coordinated way, like a symphonic orchestra, it is dedicated to Herbert von Karajan, 
the famous classical music director.

It is above all written for clarity: C++ and POSIX might be powerful but with increased complexity becomes more and more 
hard to read. 
It is also written for flexibility: it works intensively with computer directives to adapt the code to different 
situations.
It makes use of the Tabs features of the Arduino IDE to split the code like an orchestral partition into clear subparts 
for each instrument (purpose):
-Configuration
-Credentials (not to be published)
-Libraries and global variables
-Network functions
-User functions
-Setup
-Menu for user interaction
-Fast data (to be processed at 125mS pace)
-Slow data (to be processed at 1S pace)
-Statistics (to be processed at 1S pace)
-Display (to be processed at 1S pace)
-Serial communiction (to be processed at 1S pace)
-Wireless comminucation (to be processed at 1S pace)
and finally the scheduler itself.
With that organisation the developer can easily jump to the desired part of the code to make correction without searching 
pages of code for the right place.
All jobs to be processed at 1S pace are distributed in 125mS slices, so to dispatch the processing time and avoid to do 
everything at the same time.
Karajan provides a measuring/reporting function for the time taken by every task.

It provides all initializations for WiFi and time synchronization, so you can just start with your part.

It provides variables to do a lot of stuff at given times and gives global variables as e.g.
Bytes:
- Second, Minute, Hour...
Boolean:
- NewMinute, MinuteExpiring, NewHour, HourExpiring and so forth..
so you can write code to be executed at given times in natural language.

*/
