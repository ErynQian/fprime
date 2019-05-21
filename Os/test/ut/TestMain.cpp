#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

extern "C" {
    void startTestTask(int iters);
    void qtest_block_receive(void *p);
    void qtest_nonblock_receive(void *p);
    void qtest_nonblock_send(void *p);
    void qtest_block_send(void *p);
    void qtest_performance(void *p);
    void qtest_concurrent(void *p);
    void intervalTimerTest(void *p);
    void fileSystemTest(void);
    void validateFileTest(void);
}

int main(int argc, char* argv[]) {

        if( argc != 2 ) {
           fprintf(stderr, "Run test with test number as argument!\n");
           exit(1);
        }

	int testNum = atoi(argv[1]);

	switch(testNum) {
		case 0:
			startTestTask(10);
            vTaskStartScheduler();
			// sleep(15);
			break;
		case 1:
        xTaskCreate(qtest_block_receive, (const char*) "qtest_block_receive", 2048, 0, 1, 0);
        vTaskStartScheduler();
			// qtest_block_receive();
			break;
		case 2:
            xTaskCreate(qtest_nonblock_receive, (const char*) "qtest_nonblock_receive", 2048, 0, 1, 0);
            vTaskStartScheduler();
			// qtest_nonblock_receive();
			break;
                case 3:
                        xTaskCreate(qtest_nonblock_send, (const char*) "qtest_nonblock_send", 2048, 0, 1, 0);
                        vTaskStartScheduler();
                        // qtest_nonblock_send();
                        break;
                case 4:
                        xTaskCreate(qtest_block_send, (const char*) "qtest_block_send", 2048, 0, 1, 0);
                        vTaskStartScheduler();
                        // qtest_block_send();
                        break;
		case 5:
            xTaskCreate(qtest_performance, (const char*) "qtest_performance", 2048, 0, 1, 0);
            vTaskStartScheduler();
			// qtest_performance();
			break;
                case 6:
                        xTaskCreate(qtest_concurrent, (const char*) "qtest_concurrent", 2048, 0, 1, 0);
                        vTaskStartScheduler();
                        // qtest_concurrent();
                        break;
		case 7:
            xTaskCreate(intervalTimerTest, (const char*) "intervalTimerTest", 2048, 0, 1, 0);
            vTaskStartScheduler();
			// intervalTimerTest();
			break;
		case 8:
			fileSystemTest();
			break;
		case 9:
			validateFileTest();
			break;
		default:
			printf("Huh? %d\n", testNum);
			break;
	}

    return 0;
}

