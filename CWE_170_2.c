//c 170_2

char buf[MAXPATH];
...
readlink(pathname, buf, MAXPATH);
int length = strlen(buf);
...