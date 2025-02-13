/*
  +--------------------------------------------------------------------------+
  | Swow                                                                     |
  +--------------------------------------------------------------------------+
  | Licensed under the Apache License, Version 2.0 (the "License");          |
  | you may not use this file except in compliance with the License.         |
  | You may obtain a copy of the License at                                  |
  | http://www.apache.org/licenses/LICENSE-2.0                               |
  | Unless required by applicable law or agreed to in writing, software      |
  | distributed under the License is distributed on an "AS IS" BASIS,        |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. |
  | See the License for the specific language governing permissions and      |
  | limitations under the License. See accompanying LICENSE file.            |
  +--------------------------------------------------------------------------+
  | Author: Twosee <twosee@php.net>                                          |
  +--------------------------------------------------------------------------+
 */

#ifndef SWOW_CURL_H
#define SWOW_CURL_H
#ifdef __cplusplus
extern "C" {
#endif

#include "swow.h"

#include "cat_curl.h"

#ifdef CAT_HAVE_CURL
SWOW_API extern zend_class_entry *swow_curl_ce;
SWOW_API extern zend_class_entry *swow_curl_share_ce;
SWOW_API extern zend_class_entry *swow_curl_multi_ce;
SWOW_API extern zend_class_entry *swow_curl_CURLFile_class;
SWOW_API extern zend_class_entry *swow_curl_CURLStringFile_class;

zend_result swow_curl_module_init(INIT_FUNC_ARGS);
zend_result swow_curl_module_shutdown(INIT_FUNC_ARGS);
zend_result swow_curl_runtime_init(INIT_FUNC_ARGS);
zend_result swow_curl_runtime_close(void);
#endif

#ifdef __cplusplus
}
#endif
#endif /* SWOW_CURL_H */
