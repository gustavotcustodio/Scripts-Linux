#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"bitcoin",                                                                60,   15},
    {"df -h | grep home | awk '{printf(\" %.1f/%.1fGB\", $3, $2)}'",          120,  19},
    {"echo -n ' ';free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",   10,   20},
    {"echo -n ' ';pamixer --get-volume |  sed 's/$/\\%/g'",                    1,   22},
    {"bateria",                                                                 5,   23},
    {"date '+%b %d (%a) %R%p'",                                                 1,   24},
};

const unsigned short blockCount = LEN(blocks);
