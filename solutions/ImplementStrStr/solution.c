int strStr(char * haystack, char * needle){
	char *p, *q;
	int i, len = strlen(haystack) - strlen(needle);

	for (i = 0; i <= len; i++) {
		p = haystack + i;
		q = needle;
		while (*q && *p == *q) {
			++p;
			++q;
		}
		if (*q == 0)
			return i;
	}
	return -1;
}
