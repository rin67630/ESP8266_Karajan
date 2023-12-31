void menuRun()
{
  switch (TelnetStream.read())
  {
    case 'Z':   // Reset ESP
      TelnetStream.stop();
      delay(100);
      ESP.reset();
      break;
    case 'Q':   // Quit Telnet
      TelnetStream.println("bye bye");
      TelnetStream.flush();
      TelnetStream.stop();
      break;
    case 'S':  // Swap Serial
      TelnetStream.println("Swapping Serial");
      Serial.flush();
      Serial.swap();
      break;
     case 'A':  //A0 Report
      TelnetStream.printf ("\nA0 Report\n");
      wirelessPage = 'A';
      break; 
      case 'J':  //Debug Report
      TelnetStream.printf ("\nJob Timing\n");
      wirelessPage = 'J';
      break;
    case 'j':  //Reset Job Maxes
      TelnetStream.printf ("\nReset Job Timings \n");
      for (int i = 14; i < 21; i++) RunMillis[i] = 0;  // Reset job timing stats
      break;
  }
}
