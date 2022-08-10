#ifndef __FS_EXTRA_H__
#define __FS_EXTRA_H__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int overwrite;
    int skip_exist;
    size_t buffer_size;
    int copy_inside;
    int content_only;
    uint64_t depth;
} copy_options_t;

extern int fs_extra_copy_items(const char** from, size_t from_length,const char* to, const copy_options_t* options);

extern int fs_extra_move_items(const char** from_items, size_t from_items_length,const char* to, const copy_options_t* options);

extern int fs_extra_remove_items(const char** from_items, size_t from_items_length);

#ifdef __cplusplus
}
#endif

#endif // __FS_EXTRA_H__