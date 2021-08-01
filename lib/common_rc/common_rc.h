
#pragma once

#include <stdint.h>

#include "../crsf/crsf.h"

#pragma pack(push, 1)
typedef  struct rc_decode_buf_ {
	union {
		crsf_frame_t crsf_frame;
	};
} rc_decode_buf_t;
#pragma pack(pop)

extern rc_decode_buf_t rc_decode_buf;

uint8_t crc8_dvb_s2(uint8_t crc, uint8_t a);
uint8_t crc8_dvb_s2_buf(uint8_t *buf, int len);
