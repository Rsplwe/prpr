#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int un_mei_no_sen_ta_ku(size_t arr_length) {
	return rand() % arr_length;
}

int main()
{
	srand((int)time(NULL) * 114514);
	char *emoticon[] = {
		"⁄(⁄ ⁄•⁄ω⁄•⁄ ⁄)⁄",
		"(≧ ﹏ ≦)",
		"(*/ω＼*)",
		"ヽ(*。>Д<)o゜",
		"(つ ﹏ ⊂)"
	};
	size_t emoticon_size = sizeof(emoticon) / sizeof(emoticon[0]);
	printf("%s\n", emoticon[un_mei_no_sen_ta_ku(emoticon_size)]);
}
