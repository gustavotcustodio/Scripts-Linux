#define CMDLENGTH 30
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("curl -Ss 'https://wttr.in?0&T&Q' | cut -c 16- | head -2 | xargs echo", 600, 28),
	BLOCK("echo ' ';df -h | grep sda1 | awk '{printf(\"%.1f/%.1fGB\", $3, $2)}'", 120, 19),
	BLOCK("echo ' ';free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",  10,   20),
	BLOCK("echo ' ';pamixer --get-volume |  sed 's/$/\\%/g'",  1,    22),
	BLOCK("bateria", 5,    23),
	BLOCK("date '+%b %d (%a) %R%p'",    1,    24),
    //BLOCK("sb-loadavg", 5,    21),
    //BLOCK("sb-mic",     0,    26),
    //BLOCK("sb-record",  0,    27),
    //BLOCK("sb-mail",    1800, 17),
    //BLOCK("sb-music",   0,    18),
};
