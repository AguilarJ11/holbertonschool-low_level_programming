#ifndef FLIO
#define FLIO

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <signal.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
