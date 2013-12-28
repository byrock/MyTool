#ifndef VSMSGDEFS_DBGP_H
#define VSMSGDEFS_DBGP_H

enum VSMSGDEFS_DBGP {
    DBGP_ERROR_NONE_RC = -9201,
    DBGP_ERROR_PARSE_RC = -9203,
    DBGP_ERROR_DUPLICATE_ARGS_RC = -9204,
    DBGP_ERROR_INVALID_OPTIONS_RC = -9205,
    DBGP_ERROR_UNIMPLEMENTED_RC = -9206,
    DBGP_ERROR_COMMAND_NOT_AVAILABLE_RC = -9207,
    DBGP_ERROR_OPENING_FILE_RC = -9208,
    DBGP_ERROR_STREAM_REDIRECT_FAILED_RC = -9209,
    DBGP_ERROR_BREAKPOINT_NOT_SET_RC = -9210,
    DBGP_ERROR_BREAKPOINT_NOT_SUPPORTED_RC = -9211,
    DBGP_ERROR_BREAKPOINT_INVALID_RC = -9212,
    DBGP_ERROR_BREAKPOINT_NO_CODE_RC = -9213,
    DBGP_ERROR_BREAKPOINT_INVALID_STATE_RC = -9214,
    DBGP_ERROR_BREAKPOINT_NOT_EXIST_RC = -9215,
    DBGP_ERROR_EVAL_RC = -9216,
    DBGP_ERROR_EXPR_RC = -9217,
    DBGP_ERROR_INVALID_PROPERTY_RC = -9218,
    DBGP_ERROR_INVALID_STACK_DEPTH_RC = -9219,
    DBGP_ERROR_INVALID_CONTEXT_RC = -9220,
    DBGP_ERROR_ENCODING_NOT_SUPPORTED_RC = -9221,
    DBGP_ERROR_INTERNAL_EXCEPTION_RC = -9222,
    DBGP_ERROR_UNKNOWN_RC = -9223,
    DBGP_END_ERRORS = -9300,
};

#endif
