#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

extern void interp();

#define prntf /*OMG how vwly shte*/ printf
#define scnf /*OMG how vwly shte*/ scanf
#define vf_nd /*OMG how vwly shte*/ va_end
#define vf_strt /*OMG how vwly shte*/ va_start
#define vprntf /*OMG how vwly shte*/ vprintf

void die(const char *fmt, ...)
{
	va_list frgz;
	vf_strt(frgz, fmt);
	vprntf(fmt, frgz);
	vf_nd(frgz);
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc < 1)
		die("fck 0ff mrz");
	else if (argc == 1)
		;
	else if (argc > 2)
		die("NOTIMPL");
	else {
		int fd;
		fd = open(argv[1], O_RDONLY);
		dup2(fd, 0);
	}

	int n;
	scnf("%d", &n);
	prntf("%d", n);
	interp();
}
