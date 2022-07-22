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

### Available functions

```c
int fs_extra_copy_items(const char** from, size_t from_length,const char* to, const copy_options_t* options);

int fs_extra_move_items(const char** from_items, size_t from_items_length,const char* to, const copy_options_t* options);

int fs_extra_remove_items(const char** from_items, size_t from_items_length);
```

### References
 - [fs_extra](https://github.com/webdesus/fs_extra)

### License

This repo is released under the [MIT](https://github.com/thechampagne/libfsextra/blob/main/LICENSE).
