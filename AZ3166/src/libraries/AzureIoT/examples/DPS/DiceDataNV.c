#include "DiceCore.h"

#if defined(__GNUC__)
const DICE_UDS __attribute__((section(".nvdata_protected_data"))) DiceUDS = { DICE_UDS_TAG,
                                                                            { 0x19, 0xe2, 0x5a, 0x25, 0x9d, 0x0c, 0x2b, 0xe0,
                                                                              0x3a, 0x02, 0xd4, 0x16, 0xc0, 0x5c, 0x48, 0xcc,
                                                                              0xd0, 0xcc, 0x7d, 0x17, 0x43, 0x45, 0x8a, 0xae,
                                                                              0x1c, 0xb4, 0x88, 0xb0, 0x74, 0x99, 0x3e, 0xae } };

#else
const DICE_UDS DiceUDS = { DICE_UDS_TAG, 
                         { 0x19, 0xe2, 0x5a, 0x25, 0x9d, 0x0c, 0x2b, 0xe0,
                           0x3a, 0x02, 0xd4, 0x16, 0xc0, 0x5c, 0x48, 0xcc,
                           0xd0, 0xcc, 0x7d, 0x17, 0x43, 0x45, 0x8a, 0xae,
                           0x1c, 0xb4, 0x88, 0xb0, 0x74, 0x99, 0x3e, 0xae }};
#endif 
