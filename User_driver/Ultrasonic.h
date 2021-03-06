// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Ultrasonic.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _Ultrasonic_H_
#define _Ultrasonic_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

/*!
 * @brief This struct represents the structure Time defined by the user in the IDL file.
 * @ingroup ULTRASONIC
 */
typedef struct Time
{
    int32_t sec;
    uint32_t nanosec;
} Time;

struct ucdrBuffer;

bool Time_serialize_topic(struct ucdrBuffer* writer, const Time* topic);
bool Time_deserialize_topic(struct ucdrBuffer* reader, Time* topic);
uint32_t Time_size_of_topic(const Time* topic, uint32_t size);

/*!
 * @brief This struct represents the structure Header defined by the user in the IDL file.
 * @ingroup ULTRASONIC
 */
typedef struct Header
{
    Time stamp;
    char frame_id[15];

} Header;

struct ucdrBuffer;

bool Header_serialize_topic(struct ucdrBuffer* writer, const Header* topic);
bool Header_deserialize_topic(struct ucdrBuffer* reader, Header* topic);
uint32_t Header_size_of_topic(const Header* topic, uint32_t size);

/*!
 * @brief This struct represents the structure Ultrasonic defined by the user in the IDL file.
 * @ingroup ULTRASONIC
 */
typedef struct Ultrasonic
{
    Header header;
    int32_t id;
    int32_t data[4];
} Ultrasonic;

struct ucdrBuffer;

bool Ultrasonic_serialize_topic(struct ucdrBuffer* writer, const Ultrasonic* topic);
bool Ultrasonic_deserialize_topic(struct ucdrBuffer* reader, Ultrasonic* topic);
uint32_t Ultrasonic_size_of_topic(const Ultrasonic* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _Ultrasonic_H_
