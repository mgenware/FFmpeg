#ifndef FFTOOLS_FFMPEG_MG_H
#define FFTOOLS_FFMPEG_MG_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>

typedef void (*FFmpegProgressCallback)(const uint8_t* data, int size);

int ffmpeg_run(int argc, char **argv, FFmpegProgressCallback progress_cb);

#ifdef __cplusplus
}
#endif

#endif /* FFTOOLS_FFMPEG_MG_H */
