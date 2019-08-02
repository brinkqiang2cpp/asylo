/*
 *
 * Copyright 2019 Asylo authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef ASYLO_PLATFORM_HOST_CALL_TRUSTED_HOST_CALLS_UNMIGRATED_H_
#define ASYLO_PLATFORM_HOST_CALL_TRUSTED_HOST_CALLS_UNMIGRATED_H_

// Defines the C language interface to the untrusted host environment. These
// functions invoke code outside the enclave and secure applications must assume
// an adversarial implementation.

#include <fcntl.h>
#include <sys/socket.h>

#include <cstdarg>
#include <cstddef>
#include <cstdint>

#include "asylo/platform/system_call/sysno.h"
#include "asylo/platform/system_call/system_call.h"

#ifdef __cplusplus
extern "C" {
#endif

// Unless otherwise specified, each of the following calls invokes the
// corresponding function on the host.
int enc_untrusted_close(int fd);
int enc_untrusted_fsync(int fd);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // ASYLO_PLATFORM_HOST_CALL_TRUSTED_HOST_CALLS_UNMIGRATED_H_