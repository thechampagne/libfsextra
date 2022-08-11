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
} copy_options_dir_t;

typedef struct {
    int overwrite;
    int skip_exist;
    size_t buffer_size;
} copy_options_file_t;

typedef struct {
  uint64_t dir_size;
  size_t files_length;
  size_t directories_length;
  char** files;
  char** directories;
} dir_content_t;

extern int fs_extra_copy_items(const char* const* from, size_t from_length,const char* to, const copy_options_dir_t* options);

extern int fs_extra_move_items(const char* const* from_items, size_t from_items_length,const char* to, const copy_options_dir_t* options);

extern int fs_extra_remove_items(const char* const* from_items, size_t from_items_length);

extern int fs_extra_file_copy(const char* from, const char* to, const copy_options_file_t* options);

extern int fs_extra_file_move_file(const char* from, const char* to, const copy_options_file_t* options);

extern char* fs_extra_file_read_to_string(const char* path);

extern int fs_extra_file_remove(const char* path);

extern int fs_extra_file_write_all(const char* path, const char* content);

extern int fs_extra_dir_copy(const char* from, const char* to, const copy_options_dir_t* options);

extern int fs_extra_dir_create(const char* path, int erase);

extern int fs_extra_dir_create_all(const char* path, int erase);

extern int fs_extra_dir_get_dir_content(dir_content_t* dir_content, const char* path);

extern int fs_extra_dir_get_dir_content2(dir_content_t* dir_content, const char* path, uint64_t* depth);

extern int fs_extra_dir_get_size(const char* path, uint64_t* size);

extern int fs_extra_dir_move_dir(const char* from, const char* to, const copy_options_dir_t* options);

extern int fs_extra_dir_remove(const char* path);

extern void fs_extra_clean_string(char* ptr);

extern void fs_extra_clean_dir_content(dir_content_t* ptr);

#ifdef __cplusplus
}
#endif

#endif // __FS_EXTRA_H__