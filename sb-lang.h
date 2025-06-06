#ifndef SB_LANG_H
#define SB_LANG_H

/* Whitespace */
const char space = ' ';
const char tab_space = '\t';
const char new_line = '\n';

/* Symbols */
const char single_quote = '\'';
const char double_quote = '"';
const char asterisk = '*';
const char ampersand = '&';
const char percent_sign = '%';
const char tilde = '~';
const char question_mark = '?';
const char exclamation_mark = '!';
const char hash_sign = '#';
const char at_sign = '@';
const char comma = ',';
const char colon = ':';
const char semicolon = ';';
const char period = '.';
const char left_parenthesis = '(';
const char right_parenthesis = ')';
const char left_bracket = '[';
const char right_bracket = ']';
const char left_brace = '{';
const char right_brace = '}';
const char plus = '+';
const char minus = '-';
const char slash = '/';
const char backslash = '\\';
const char equals = '=';
const char angle_bracket_left = '<';
const char angle_bracket_right = '>';
const char pipe = '|';

/* Operators */

// Arithmetic operators
const char add_operator = plus;
const char subtract_operator = minus;
const char multiply_operator = asterisk;
const char divide_operator = slash;
const char modulo_operator = percent_sign;

// Assignment operators
const char assign_operator = equals;
const char* increment_operator = "++";
const char* decrement_operator = "--";

// Comparison operators
const char less_than_operator = angle_bracket_left;
const char greater_than_operator = angle_bracket_right;
const char* less_than_equal_operator = "<=";
const char* greater_than_equal_operator = ">=";
const char* equal_operator = "==";
const char* not_equal_operator = "!=";

// Logical operators
const char not_operator = exclamation_mark;
const char* and_operator = "&&";
const char* or_operator = "||";

/* Pointer and address operators */
const char pointer_operator = asterisk;
const char address_operator = ampersand;

/* Keywords */

// Type definitions
const char* int_type = "int";
const char* float_type = "float";
const char* char_type = "char";
const char* string_type = "string";
const char* bool_type = "bool";
const char* struct_keyword = "struct";
const char* flex_type = "flex"; // any of the above types
const char* none_type = "none"; // no value or type, NULL or void

// Type qualifier keywords
const char* const_keyword = "const";

// Boolean literals
const char* not_keyword = "false";
const char* true_keyword = "true";

// Process flow keywords
const char* activate_keyword = "act"; // activate a flow or process
const char* deactivate_keyword = "deact"; // deactivate a flow or process
const char* process_keyword = "process"; // represents a separate program or OS-level unit of execution (process)
const char* flow_keyword = "flow";       // execution sequence inside a process, function, method etc
const char* phase_keyword = "phase"; // a specified time in space of a process or flow
const char* pause_keyword = "pause"; // pause a flow or process at last phase
const char* resume_keyword = "resume"; // resume a paused flow or process
const char* when_keyword = "when"; // condition to check before executing a flow or process, like an if statement

// Data storage keywords
const char* prepare_keyword = "prepare"; // allocate and reserve memory and position for a flow or process
const char* dispose_keyword = "dispose"; // terminate, destroy a flow or process
const char* move_keyword = "move"; // move some data from one place to another
const char* copy_keyword = "copy"; // copy some data from one place to another
const char* from_keyword = "from"; // source of data for move or copy
const char* to_keyword = "to"; // destination of data for move or copy
const char* at_keyword = "at"; // reference to a location in memory, like a pointer or address

#endif // SB_LANG_H