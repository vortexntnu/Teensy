#include "imxrt.h"
#ifdef SERIAL_DEBUG
#include "Arduino.h"
#endif

namespace timer {

typedef void (*void_function_ptr)(void);

void ISR();
void setUpPeriodicISR(void_function_ptr function);
void setUpPeriodic();
void startPeriodic();

} //timer 