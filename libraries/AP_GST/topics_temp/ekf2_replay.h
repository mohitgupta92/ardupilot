/****************************************************************************
 *
 *   Copyright (C) 2013-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /Users/Siddharth/Documents/Programming/3dr/ardupilot-temp/libraries/AP_GST/msg/ekf2_replay.msg */


#pragma once

#include <stdint.h>
#include <AP_GST/AP_GST.h>


#ifndef __cplusplus

#endif

/**
 * @addtogroup topics
 * @{
 */


#ifdef __cplusplus
struct __EXPORT ekf2_replay_s {
#else
struct ekf2_replay_s {
#endif
	uint64_t time_ref;
	uint64_t gyro_integral_dt;
	uint64_t accelerometer_integral_dt;
	uint64_t magnetometer_timestamp;
	uint64_t baro_timestamp;
	float gyro_integral_rad[3];
	float accelerometer_integral_m_s[3];
	float magnetometer_ga[3];
	float baro_alt_meter;
	uint64_t time_usec;
	uint64_t time_usec_vel;
	int32_t lat;
	int32_t lon;
	int32_t alt;
	uint8_t fix_type;
	float eph;
	float epv;
	float vel_m_s;
	float vel_n_m_s;
	float vel_e_m_s;
	float vel_d_m_s;
	bool vel_ned_valid;
#ifdef __cplusplus

#endif
};

/**
 * @}
 */

/* register this as object request broker structure */
GST_DECLARE(ekf2_replay);
