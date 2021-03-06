#ifndef _REQUESTER_H
#define _REQUESTER_H

#include <zmq.h>
#include <errno.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <default.h>
#include "log.h"

typedef int32_t req_t;
typedef int32_t rep_t;

int request(char *address, req_t *req, rep_t *rep);

#endif
