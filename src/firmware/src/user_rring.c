/**
 ****************************************************************************************
 *
 * @file user_rring.c
 *
 * @brief RRing project firmware app file.
 *
 * Copyright (C) 2023 State of the Art LLC.
 *
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @addtogroup APP
 * @{
 ****************************************************************************************
 */
#include "rwip_config.h"             // SW configuration


/*
 * INCLUDE FILES
 ****************************************************************************************
 */

#include "app_api.h"
#include "user_rring.h"

/*
 * FUNCTION DEFINITIONS
 ****************************************************************************************
*/


void user_on_connection(uint8_t connection_idx, struct gapc_connection_req_ind const *param)
{
    default_app_on_connection(connection_idx, param);
}

void user_on_disconnect( struct gapc_disconnect_ind const *param )
{
    default_app_on_disconnect(param);
}
 

/// @} APP
