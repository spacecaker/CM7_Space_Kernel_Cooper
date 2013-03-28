/****************************************************************************

**

** COPYRIGHT(C) : Samsung Electronics Co.Ltd, 2006-2010 ALL RIGHTS RESERVED

**

** AUTHOR       : Kim, Geun-Young <geunyoung.kim@samsung.com>			@LDK@

**                                                                      @LDK@

****************************************************************************/

#ifndef __DPRAM_H__
#define __DPRAM_H__

//hsil
//#define DPRAM_16MB
#define DPRAM_32MB

#ifdef DPRAM_16MB	/* if dpram size is 16MB */
#define DPRAM_SIZE									0x4000

#define DPRAM_START_ADDRESS 						0x0000
#define DPRAM_MAGIC_CODE_ADDRESS					(DPRAM_START_ADDRESS)
#define DPRAM_ACCESS_ENABLE_ADDRESS					(DPRAM_START_ADDRESS + 0x0002)

#define DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS		(DPRAM_START_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_FORMATTED_TAIL_ADDRESS		(DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS + 0x0002)
#define DPRAM_PDA2PHONE_FORMATTED_BUFFER_ADDRESS	(DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_FORMATTED_SIZE				1020	/* 0x03FC */

#define DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS			(DPRAM_START_ADDRESS + 0x0404)
#define DPRAM_PDA2PHONE_RAW_TAIL_ADDRESS			(DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS + 0x0002)
#define DPRAM_PDA2PHONE_RAW_BUFFER_ADDRESS			(DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_RAW_SIZE					7152	/*1BF0*/

#define DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS		(DPRAM_START_ADDRESS + 0x1FF8)
#define DPRAM_PHONE2PDA_FORMATTED_TAIL_ADDRESS		(DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS + 0x0002)
#define DPRAM_PHONE2PDA_FORMATTED_BUFFER_ADDRESS	(DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS + 0x0004)
#define DPRAM_PHONE2PDA_FORMATTED_SIZE				1020	/* 0x03FC */

#define DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS			(DPRAM_START_ADDRESS + 0x23F8)
#define DPRAM_PHONE2PDA_RAW_TAIL_ADDRESS			(DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS + 0x0002)
#define DPRAM_PHONE2PDA_RAW_BUFFER_ADDRESS			(DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS + 0x0004)
#define DPRAM_PHONE2PDA_RAW_SIZE					7152	/* 1BF0 */

/* indicator area*/
#define DPRAM_INDICATOR_START						(DPRAM_START_ADDRESS + 0x3FEC)
#define DPRAM_INDICATOR_SIZE						16

#define DPRAM_PDA2PHONE_INTERRUPT_ADDRESS			(DPRAM_START_ADDRESS + 0x3FFE)
#define DPRAM_PHONE2PDA_INTERRUPT_ADDRESS			(DPRAM_START_ADDRESS + 0x3FFC)
#define DPRAM_INTERRUPT_PORT_SIZE					2
#endif

#ifdef DPRAM_32MB 
#define DPRAM_SIZE									0x8000

/* Memory Address */
#define DPRAM_START_ADDRESS 						0x0000
#define DPRAM_MAGIC_CODE_ADDRESS					(DPRAM_START_ADDRESS)
#define DPRAM_ACCESS_ENABLE_ADDRESS					(DPRAM_START_ADDRESS + 0x0002)

#define DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS		(DPRAM_START_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_FORMATTED_TAIL_ADDRESS		(DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS + 0x0002)
#define DPRAM_PDA2PHONE_FORMATTED_BUFFER_ADDRESS	(DPRAM_PDA2PHONE_FORMATTED_HEAD_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_FORMATTED_SIZE				1020	

#define DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS			(DPRAM_PDA2PHONE_FORMATTED_BUFFER_ADDRESS + DPRAM_PDA2PHONE_FORMATTED_SIZE)
#define DPRAM_PDA2PHONE_RAW_TAIL_ADDRESS			(DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS + 0x0002)
#define DPRAM_PDA2PHONE_RAW_BUFFER_ADDRESS			(DPRAM_PDA2PHONE_RAW_HEAD_ADDRESS + 0x0004)
#define DPRAM_PDA2PHONE_RAW_SIZE					7160	/*1BF0*/

#define DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS		(DPRAM_PDA2PHONE_RAW_BUFFER_ADDRESS + DPRAM_PDA2PHONE_RAW_SIZE)
#define DPRAM_PHONE2PDA_FORMATTED_TAIL_ADDRESS		(DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS + 0x0002)
#define DPRAM_PHONE2PDA_FORMATTED_BUFFER_ADDRESS	(DPRAM_PHONE2PDA_FORMATTED_HEAD_ADDRESS + 0x0004)
#define DPRAM_PHONE2PDA_FORMATTED_SIZE				1020	/* 0x03FC */

#define DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS			(DPRAM_PHONE2PDA_FORMATTED_BUFFER_ADDRESS + DPRAM_PHONE2PDA_FORMATTED_SIZE)
#define DPRAM_PHONE2PDA_RAW_TAIL_ADDRESS			(DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS + 0x0002)
#define DPRAM_PHONE2PDA_RAW_BUFFER_ADDRESS			(DPRAM_PHONE2PDA_RAW_HEAD_ADDRESS + 0x0004)
#define DPRAM_PHONE2PDA_RAW_SIZE					23544	/* 1BF0 */

/* indicator area*/
#define DPRAM_INDICATOR_START						(DPRAM_START_ADDRESS + 0x7FEC)					
#define DPRAM_INDICATOR_SIZE						0

#define DPRAM_PDA2PHONE_INTERRUPT_ADDRESS			(DPRAM_START_ADDRESS + 0x7FFC)
#define DPRAM_PHONE2PDA_INTERRUPT_ADDRESS			(DPRAM_START_ADDRESS + 0x7FFE)
#define DPRAM_INTERRUPT_PORT_SIZE					2

#endif /* DPRAM_32MB*/


#ifndef DPRAM_VBASE
#define DPRAM_VBASE 								0xF0000000
#endif	/* DPRAM_VBASE */

/*
 * interrupt masks.
 */
#define INT_MASK_VALID					0x0080
#define INT_MASK_COMMAND				0x0040
#define INT_MASK_REQ_ACK_F				0x0020
#define INT_MASK_REQ_ACK_R				0x0010
#define INT_MASK_RES_ACK_F				0x0008
#define INT_MASK_RES_ACK_R				0x0004
#define INT_MASK_SEND_F					0x0002
#define INT_MASK_SEND_R					0x0001

#define INT_MASK_CMD_INIT_START			0x0001
#define INT_MASK_CMD_INIT_END			0x0002
#define INT_MASK_CMD_REQ_ACTIVE			0x0003
#define INT_MASK_CMD_RES_ACTIVE			0x0004
#define INT_MASK_CMD_REQ_TIME_SYNC		0x0005
#define INT_MASK_CMD_PHONE_START 		0x0008
#define INT_MASK_CMD_ERR_DISPLAY		0x0009
#define INT_MASK_CMD_PHONE_DEEP_SLEEP	0x000A
#define INT_MASK_CMD_NV_REBUILDING		0x000B
#define INT_MASK_CMD_EMER_DOWN			0x000C
// hsil
#define INT_MASK_CMD_PHONE_RESET		0x000F
#define INT_MASK_CMD_CHG_DETECT_NOTI 	0x4000
#define INT_MASK_CMD_CHG_STATE_CHANGED 	0x5000

#define INT_MASK_CP_ONLINE_BOOT			0x0000
#define INT_MASK_CP_AIRPLANE_BOOT		0x1000

#define INT_MASK_CP_AP_ANDROID			0x0100
#define INT_MASK_CP_AP_WINMOBILE		0x0200
#define INT_MASK_CP_AP_LINUX			0x0300
#define INT_MASK_CP_AP_SYMBIAN			0x0400

#define INT_MASK_CP_QUALCOMM			0x0100
#define INT_MASK_CP_INFINEON			0x0200
#define INT_MASK_CP_BROADCOM			0x0300

#define INT_COMMAND(x)					(INT_MASK_VALID | INT_MASK_COMMAND | x)
#define INT_NON_COMMAND(x)				(INT_MASK_VALID | x)

#define FORMATTED_INDEX					0
#define RAW_INDEX						1
#define MAX_INDEX						2

/* ioctl command definitions. */
// hsil
#if 0
#define IOC_MZ_MAGIC				('h')
#define HN_DPRAM_PHONE_ON			_IO(IOC_MZ_MAGIC, 0xd0)
#define HN_DPRAM_PHONE_OFF			_IO(IOC_MZ_MAGIC, 0xd1)
#define HN_DPRAM_PHONE_GETSTATUS	_IOR(IOC_MZ_MAGIC, 0xd2, unsigned int)
#define HN_DPRAM_PHONE_RESET		_IO(IOC_MZ_MAGIC, 0xd3)
#define HN_DPRAM_MEM_RW				_IOWR(IOC_MZ_MAGIC, 0xd6, unsigned long)
#else
#define IOC_SEC_MAGIC            (0xf0)
#define HN_DPRAM_PHONE_ON           _IO(IOC_SEC_MAGIC, 0xc0)
#define HN_DPRAM_PHONE_OFF          _IO(IOC_SEC_MAGIC, 0xc1)
#define HN_DPRAM_PHONE_GETSTATUS    _IOR(IOC_SEC_MAGIC, 0xc2, unsigned int)
#define HN_DPRAM_MEM_RW        _IO(IOC_SEC_MAGIC, 0xc3)
//#define DPRAM_PHONE_BATTERY      _IO(IOC_SEC_MAGIC, 0xc4)
#define HN_DPRAM_PHONE_RESET        _IO(IOC_SEC_MAGIC, 0xc5)
// hsil for dpram dump
#define HN_DPRAM_DUMP	        _IO(IOC_SEC_MAGIC, 0xc6)
#define HN_DPRAM_WAKELOCK	    _IO(IOC_SEC_MAGIC, 0xc7)
#define HN_DPRAM_WAKEUNLOCK	    _IO(IOC_SEC_MAGIC, 0xca)
#define DPRAM_GET_DGS_INFO       _IOR(IOC_SEC_MAGIC, 0xc8, unsigned char [0x100])
#define HN_DPRAM_RAMDUMP	    _IO(IOC_SEC_MAGIC, 0xc9)

//#define DPRAM_PHONE_ON_NORMAL	0
//#define DPRAM_PHONE_ON_LPM		1
#endif

/*
 * structure definitions.
 */
typedef struct dpram_serial {
	/* pointer to the tty for this device */
	struct tty_struct *tty;

	/* number of times this port has been opened */
	int open_count;

	/* locks this structure */
	struct semaphore sem;
} dpram_serial_t;

typedef struct dpram_device {
	/* DPRAM memory addresses */
	unsigned long in_head_addr;
	unsigned long in_tail_addr;
	unsigned long in_buff_addr;
	unsigned long in_buff_size;

	unsigned long out_head_addr;
	unsigned long out_tail_addr;
	unsigned long out_buff_addr;
	unsigned long out_buff_size;

	u_int16_t mask_req_ack;
	u_int16_t mask_res_ack;
	u_int16_t mask_send;

	dpram_serial_t serial;
} dpram_device_t;

typedef struct dpram_tasklet_data {
	dpram_device_t *device;
	u_int16_t non_cmd;
} dpram_tasklet_data_t;

#ifdef CONFIG_EVENT_LOGGING
typedef struct event_header {
	struct timeval timeVal;
	__u16 class;
	__u16 repeat_count;
	__s32 payload_length;
} EVENT_HEADER;
#endif

struct _mem_param {
	unsigned short addr;
	unsigned long data;
	int dir;
};

/* TODO: add more definitions */

#endif	/* __DPRAM_H__ */

