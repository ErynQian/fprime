#include <Os/IntervalTimer.hpp>
#include <Os/Task.hpp>
#include <cstdio>

extern "C" {
    void intervalTimerTest(void* p);
}

void intervalTimerTest(void* p) {
    Os::IntervalTimer timer;
    timer.start();
    Os::Task::delay(5000);
    timer.stop();

    printf("Usec: %d\n",timer.getDiffUsec());

    while(1);
}
