#include <stdint.h>

#ifndef INC_DWT_DELAY_H_
#define INC_DWT_DELAY_H_

#define DWT_DELAY_NEWBIE 0

void DWT_Init(void);
void DWT_Delay(uint32_t us);

#endif /* INC_DWT_DELAY_DWT_DELAY_H_ */