#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <esp_err.h>
#include <esp_blufi_api.h>

/**
 * @brief Initialize blufi, if application has not initialized bt stack, parameter init_bt_stack must be set to true
 * @param init_bt_stack if set to true, this function will initialize bt stack
*/
esp_err_t blufi_wrap_init(bool init_bt_stack);

/**
 * @brief Deinit blufi(not implemented yet)
*/
esp_err_t blufi_wrap_deinit();

#ifdef __cplusplus
}
#endif
