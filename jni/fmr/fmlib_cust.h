#ifndef __FMLIB_CUST_H__
#define __FMLIB_CUST_H__

#define FM_CHIP_MT6616 0x6616
#define FM_CHIP_MT6620 0x6620
#define FM_CHIP_MT6626 0x6626
#define FM_CHIP_MT6628 0x6628
#define FM_CHIP_MT6627 0x6627
#define FM_CHIP_MT6580 0x6580
#define FM_CHIP_MT6630 0x6630
#define FM_CHIP_MT6631 0x6631
#define FM_CHIP_MT6632 0x6632
#define FM_CHIP_MT6635 0x6635

#define FM_CHIP_UNSUPPORTED -1

#define FM_JNI_SCAN_SPACE_50K 5
#define FM_JNI_SCAN_SPACE_100K 1
#define FM_JNI_SCAN_SPACE_200K 2

/*implement fm scan by soft mute tune
 change to 0 will scan by orginal way*/
#define FMR_SOFT_MUTE_TUEN_SCAN 1
#define FMR_NOISE_FLOORT_DETECT 1
#define RSSI_TH -296
#define FM_SEVERE_RSSI_TH -107  // 67dBuV
#define FM_NOISE_FLOOR_OFFSET 10

#endif  // __FMLIB_CUST_H__
