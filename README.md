# libfsextra

[![](https://img.shields.io/github/v/tag/thechampagne/libfsextra?label=version)](https://github.com/thechampagne/libfsextra/releases/latest) [![](https://img.shields.io/github/license/thechampagne/libfsextra)](https://github.com/thechampagne/libfsextra/blob/main/LICENSE)

A **C** library that provides additional functionality to the filesystem.

### Installation & Setup

#### 1. Clone the repository
```
git clone https://github.com/thechampagne/libfsextra.git
```
#### 2. Navigate to the root
```
cd libfsextra
```
#### 3. Build the project
```
cargo build
```

### API

```c
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

int fs_extra_copy_items(const char* const* from, size_t from_length,const char* to, const copy_options_dir_t* options);

int fs_extra_move_items(const char* const* from_items, size_t from_items_length,const char* to, const copy_options_dir_t* options);

int fs_extra_remove_items(const char* const* from_items, size_t from_items_length);

int fs_extra_file_copy(const char* from, const char* to, const copy_options_file_t* options);

int fs_extra_file_move_file(const char* from, const char* to, const copy_options_file_t* options);

char* fs_extra_file_read_to_string(const char* path);

int fs_extra_file_remove(const char* path);

int fs_extra_file_write_all(const char* path, const char* content);

int fs_extra_dir_copy(const char* from, const char* to, const copy_options_dir_t* options);

int fs_extra_dir_create(const char* path, int erase);

int fs_extra_dir_create_all(const char* path, int erase);

int fs_extra_dir_get_dir_content(dir_content_t* dir_content, const char* path);

int fs_extra_dir_get_dir_content2(dir_content_t* dir_content, const char* path, uint64_t* depth);

int fs_extra_dir_get_size(const char* path, uint64_t* size);

int fs_extra_dir_move_dir(const char* from, const char* to, const copy_options_dir_t* options);

int fs_extra_dir_remove(const char* path);

void fs_extra_clean_string(char* ptr);

void fs_extra_clean_dir_content(dir_content_t* ptr);
```

### References
 - [fs_extra](https://github.com/webdesus/fs_extra)

### License

This repo is released under the [MIT](https://github.com/thechampagne/libfsextra/blob/main/LICENSE).
