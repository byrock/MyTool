#ifndef VSMSGDEFS_SLICKEDITOR_H
#define VSMSGDEFS_SLICKEDITOR_H

enum VSMSGDEFS_SLICKEDITOR {
    SLICK_EDITOR_VERSION_RC = -2000,
    SPILL_FILE_TOO_LARGE_RC = -2001,
    ON_RC = -2002,
    OFF_RC = -2003,
    EXPECTING_IGNORE_OR_EXACT_RC = -2004,
    ERROR_IN_MARGIN_SETTINGS_RC = -2005,
    ERROR_IN_TAB_SETTINGS_RC = -2006,
    UNKNOWN_COMMAND_RC = -2007,
    MISSING_FILENAME_RC = -2008,
    TOO_MANY_FILES_RC = -2009,
    TOO_MANY_SELECTIONS_RC = -2010,
    LINES_TRUNCATED_RC = -2011,
    TEXT_ALREADY_SELECTED_RC = -2012,
    TEXT_NOT_SELECTED_RC = -2013,
    INVALID_SELECTION_TYPE_RC = -2014,
    SOURCE_DEST_CONFLICT_RC = -2015,
    NEW_FILE_RC = -2016,
    LINE_SELECTION_REQUIRED_RC = -2017,
    BLOCK_SELECTION_REQUIRED_RC = -2018,
    TOO_MANY_GROUPS_RC = -2019,
    MACRO_FILE_NOT_FOUND_RC = -2020,
    TREE_CANNOT_DELETE_ROOT_NODE_RC = -2021,
    HIT_ANY_KEY_RC = -2023,
    BOTTOM_OF_FILE_RC = -2024,
    TOP_OF_FILE_RC = -2025,
    INVALID_POINT_RC = -2026,
    TYPE_ANY_KEY_RC = -2027,
    TOO_MANY_WINDOWS_RC = -2028,
    NOT_ENOUGH_MEMORY_RC = -2029,
    PRESS_ANY_KEY_TO_CONTINUE_RC = -2030,
    SPILL_FILE_IO_ERROR_RC = -2031,
    TYPE_NEW_DRIVE_LETTER_RC = -2032,
    NOTHING_TO_UNDO_RC = -2033,
    NOTHING_TO_REDO_RC = -2034,
    LINE_OR_BLOCK_SELECTION_REQUIRED_RC = -2035,
    INVALID_SELECTION_HANDLE_RC = -2036,
    SEARCHING_AND_REPLACING_RC = -2037,
    COMMAND_CANCELLED_RC = -2038,
    ERROR_CREATING_SEMAPHORE_RC = -2039,
    ERROR_CREATING_THREAD_RC = -2040,
    ERROR_CREATING_QUEUE_RC = -2041,
    PROCESS_ALREADY_RUNNING_RC = -2042,
    CANT_FIND_INIT_PROGRAM_RC = -2043,
    CMDLINE_TOO_LONG_RC = -2044,
    SERIAL_NUMBER_RC = -2045,
    UNRECOGNIZED_STATE_FILE_FORMAT_RC = -2046,
    PACKAGE_LICENSES_RC = -2047,
    UNABLE_TO_CREATE_SPILL_FILE_RC = -2049,
    UNABLE_TO_DISPLAY_POPUP_RC = -2052,
    MENU_HANDLE_MUST_BE_POPUP_RC = -2053,
    MENU_HANDLE_CAN_NOT_BE_POPUP_RC = -2054,
    INVALID_MENU_HANDLE_RC = -2055,
    MENU_HANDLE_ALREADY_ATTACHED_TO_WINDOW_RC = -2056,
    THIS_BORDER_STYLE_DOES_NOT_SUPPORT_MENUS_RC = -2057,
    NOT_USED7_RC = -2058,
    COMMAND_NOT_ALLOWED_WHEN_AW_IS_ICON_RC = -2059,
    COMMAND_NOT_ALLOWED_WHEN_NCW_RC = -2060,
    SLKWAIT_PROGRAM_NOT_FOUND_RC = -2061,
    SIZE_RC = -2062,
    MOVE_RC = -2063,
    CLOSE_RC = -2064,
    MINIMIZE_RC = -2065,
    MAXIMIZE_RC = -2066,
    NEXTWINDOW_RC = -2067,
    RESTORE_RC = -2068,
    TASKLIST_RC = -2069,
    CLOSE_APPLICATION_RC = -2070,
    WINDOW_MENU_RC = -2071,
    APPLICATION_MENU_RC = -2072,
    PROPERTY_OR_METHOD_NOT_ALLOWED_RC = -2073,
    UNABLE_TO_CREATE_TIMER_RC = -2074,
    TIMEOUT_WATING_FOR_PROCESS_INIT_RC = -2075,
    CANT_CREATE_MDI_FORM_OBJECT_RC = -2076,
    FORM_OBJECT_CAN_NOT_BE_CLIPPED_CHILD_RC = -2077,
    CONTROL_OBJECTS_MUST_HAVE_PARENT_RC = -2078,
    INVALID_PARENT_WINDOW_RC = -2079,
    INVALID_SORT_DATA_RC = -2080,
    XTERM_PROGRAM_NOT_FOUND_RC = -2081,
    OBJECT_MUST_BE_DISPLAYED_RC = -2082,
    FORM_OR_CONTROL_DOES_NOT_HAVE_NAME_RC = -2083,
    CLIPBOARD_OPERATION_NOT_SUPPORTED_RC = -2084,
    UNABLE_TO_GET_CLIPBOARD_DATA_RC = -2085,
    NOTHING_SELECTED_RC = -2086,
    SYSTEM_CALL_FAILED_RC = -2087,
    INVALID_OBJECT_HANDLE_RC = -2088,
    FAILED_TO_LOAD_PRINTER_DRIVER_RC = -2089,
    EXT_DEVICE_MODE_FUNCTION_NOT_FOUND_RC = -2090,
    PRINTER_NOT_SET_UP_CORRECTLY_RC = -2091,
    UNABLE_TO_START_PRINTER_RC = -2092,
    PRINTER_FAILURE_RC = -2093,
    LONG_STRING_MATCH_RC = -2094,
    DDE_NOT_PROCESSED_RC = -2095,
    DDE_BUSY_RC = -2096,
    DDE_UNABLE_TO_CONNECT_RC = -2097,
    DDE_ERROR_RC = -2098,
    COMMAND_NOT_ALLOWED_IN_READ_ONLY_MODE_RC = -2099,
    WEMU387_NOT_FOUND_OR_INVALID_RC = -2100,
    FAILED_TO_BACKUP_FILE_RC = -2101,
    FAILED_TO_BACKUP_FILE_ACCESS_DENIED_RC = -2105,
    LINE_RC = -2106,
    COL_RC = -2107,
    INS_RC = -2108,
    REP_RC = -2109,
    DEMO_CANT_SAVE_FILES_RC = -2110,
    FAILED_TO_BACKUP_FILE_INSUFFICIENT_DISK_SPACE_RC = -2111,
    SLICK_C_CANT_CALL_DLL_FUNCTION_WITH_PVOID_RC = -2112,
    FUNCTION_NOT_AVAILABLE_RC = -2113,
    MACROS_WITH_DEFMAIN_MAY_NOT_BE_LOADED_RC = -2114,
    APPNAME_RC = -2115,
    VSRC_INSTANCE_ALREADY_RUNNING_RC = -2121,
    VSRC_LINE_TOOLTIP_RC = -2122,
    VSRC_COL_TOOLTIP_RC = -2123,
    VSRC_MODE_TOOLTIP_RC = -2124,
    VSRC_READWRITE_TOOLTIP_RC = -2125,
    VSRC_INSREP_TOOLTIP_RC = -2126,
    VSRC_SELECTION_TOOLTIP_RC = -2127,
    NO_SELECTION_RC = -2128,
    SELECTION_1LINE_RC = -2129,
    SELECTION_LINES_RC = -2130,
    SELECTION_1COLUMN_RC = -2131,
    SELECTION_COLUMNS_RC = -2132,
    SELECTION_BLOCK_RC = -2133,
    VSRC_RECORD_MACRO_TOOLTIP_RC = -2134,
    VSRC_ALERT_TOOLTIP_RC = -2135,
    VSRC_LINES_LONGER_THAN_ALLOWED_LIMIT = -2148,
    VSRC_LINE_TRUNCATED_TO_FIT_WITHIN_TRUNCATE_LENGTH_RC = -2149,
    VSRC_THIS_OPERATION_IS_NOT_ALLOWED_AFTER_TRUNCATION_LENGTH = -2150,
    VSRC_THIS_OPERATION_WOULD_CREATE_LINE_TOO_LONG = -2151,
    VSRC_CURSOR_POSITION_PAST_TRUNCATION_LENGTH = -2152,
    VSRC_OPERATION_ONLY_ALLOWED_WHEN_TRUNCATION_LENGTH_IS_ZERO = -2153,
    VSRC_SELECTION_NOT_VALID_FOR_OPERATION = -2154,
    VSRC_RECORD_WIDTH_OPTION_NOT_SUPPORTED_FOR_UTF8 = -2155,
    VSRC_CODE_PAGE_NOT_INSTALLED_OR_NOT_VALID_RC = -2156,
    VSRC_CODE_PAGE_TO_CODE_PAGE_TRANSLATIONS_NOT_SUPPORTED = -2157,
    VSRC_THIS_EBCDIC_TRANSLATION_IS_NOT_SUPPORTED = -2158,
    VSRC_COMMAND_IS_DISABLED_FOR_THIS_OBJECT_OR_STATE = -2159,
    VSRC_COMMAND_NOT_IMPLEMENTED = -2160,
    VSRC_MENU_NOT_FOUND = -2161,
    VSRC_TOOL_WINDOW_NOT_FOUND = -2162,
    VSRC_FORM_NOT_FOUND = -2163,
    VSRC_LICENSE_EXPIRED = -2164,
    VSRC_MUST_BE_USING_QT = -2165,
    VSRC_FUNCTION_NOT_SUPPORTED_WHEN_USING_QT = -2166,
    VSRC_SAVE_COMPLETION_STATUS = -2167,
    VSRC_SEARCHING_STATUS = -2167,
    VSRC_REPLACED_ONE_STATUS = -2168,
    VSRC_REPLACED_MULTIPLE_STATUS = -2169,
};

#endif