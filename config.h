#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).

// X(ICON, CMD, update_interval, update_signal
#define BLOCKS(X) \
    X("󰕾 ", "echo : $($CONFIGROOT/../DEPS/scripts/shell/volume --get)%", 0 ,5) \
    X("󱍖 ","echo : $($CONFIGROOT/../DEPS/scripts/shell/backlight --get)%", 0 ,6)

#endif  // CONFIG_H
