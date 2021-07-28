#include "gansta_delay.h"

static void ganstaDelay(unsigned long ms)
{
  unsigned long start = millis();
  do
  { 

  } while (millis() - start < ms);
}
static void ganstaDelaymic_(unsigned long mc)
{
  unsigned long start = micros();
  do
  { 

  } while (micros() - start < mc);
}