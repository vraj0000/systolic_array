#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ftd2xx.h"

int main() {
    FT_HANDLE h;
    FT_STATUS s;
    DWORD sent     = 0;
    DWORD received = 0;

unsigned char pattern1[8] = {0x1,0x2,0x03,0x4,0x1,0x3,0x2,0x4};


    // ── Open device ───────────────────────────────────────────────
    s = FT_Open(1, &h);
    if (s != FT_OK) {
        printf("Failed to open device\n");
        return 1;
    }

    // ── Configure ─────────────────────────────────────────────────
    FT_SetBaudRate         (h, 12000000);
    FT_SetDataCharacteristics(h, FT_BITS_8, FT_STOP_BITS_1, FT_PARITY_NONE);
    FT_SetFlowControl      (h, FT_FLOW_NONE, 0, 0);
    FT_SetLatencyTimer     (h, 100);
    FT_SetTimeouts         (h, 1000, 1000);
    FT_SetUSBParameters    (h, 64, 64);

    // ── Purge before starting ─────────────────────────────────────
    FT_Purge(h, FT_PURGE_TX | FT_PURGE_RX);

    printf("Sending patterns to FPGA...\n");

    // while (1) {
        // ── Send pattern1 ─────────────────────────────────────────
        s = FT_Write(h, pattern1, 8, &sent);

		// usleep(5000);
		// DWORD queued = 0;
		//             FT_GetQueueStatus(h, &queued);
		// if (queued > 0) {
	 //        DWORD to_read = queued < 32 ? queued : 32;
        s = FT_Read(h, pattern1, 8, &received);
	    // }

        for( int i=0; i<received; i++)
        {
        	printf("%d ", pattern1[i]);
        }
        
    // }

cleanup:
    FT_Close(h);
    return 0;
}
