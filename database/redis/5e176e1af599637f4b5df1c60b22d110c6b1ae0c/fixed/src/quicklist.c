# 1 "quicklist.c"
# 1 "/home/ct584/git/bughunter/repositories/redis/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "quicklist.c"
# 31 "quicklist.c"
# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

# 64 "/usr/include/string.h" 3 4


extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 282 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 411 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 451 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 632 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string.h" 1 3 4
# 633 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/string2.h" 1 3 4
# 51 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 53 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
# 393 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 636 "/usr/include/string.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/string3.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")))
                                                                                                   ;
# 47 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len)

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memmove (void *__dest, const void *__src, size_t __len)
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 75 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
__attribute__ ((__nothrow__ , __leaf__)) memset (void *__dest, int __ch, size_t __len)
{
  if (__builtin_constant_p (__len) && __len == 0
      && (!__builtin_constant_p (__ch) || __ch != 0))
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}
# 101 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcpy (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}
# 116 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) __asm__ ("" "stpncpy") __attribute__ ((__nothrow__ , __leaf__))
                                 ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) stpncpy (char *__dest, const char *__src, size_t __n)
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strcat (char *__restrict __dest, const char *__restrict __src)
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
__attribute__ ((__nothrow__ , __leaf__)) strncat (char *__restrict __dest, const char *__restrict __src, size_t __len)

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 641 "/usr/include/string.h" 2 3 4




# 32 "quicklist.c" 2
# 1 "quicklist.h" 1
# 44 "quicklist.h"
typedef struct quicklistNode {
    struct quicklistNode *prev;
    struct quicklistNode *next;
    unsigned char *zl;
    unsigned int sz;
    unsigned int count : 16;
    unsigned int encoding : 2;
    unsigned int container : 2;
    unsigned int recompress : 1;
    unsigned int attempted_compress : 1;
    unsigned int extra : 10;
} quicklistNode;






typedef struct quicklistLZF {
    unsigned int sz;
    char compressed[];
} quicklistLZF;







typedef struct quicklist {
    quicklistNode *head;
    quicklistNode *tail;
    unsigned long count;
    unsigned int len;
    int fill : 16;
    unsigned int compress : 16;
} quicklist;

typedef struct quicklistIter {
    const quicklist *quicklist;
    quicklistNode *current;
    unsigned char *zi;
    long offset;
    int direction;
} quicklistIter;

typedef struct quicklistEntry {
    const quicklist *quicklist;
    quicklistNode *node;
    unsigned char *zi;
    unsigned char *value;
    long long longval;
    unsigned int sz;
    int offset;
} quicklistEntry;
# 118 "quicklist.h"
quicklist *quicklistCreate(void);
quicklist *quicklistNew(int fill, int compress);
void quicklistSetCompressDepth(quicklist *quicklist, int depth);
void quicklistSetFill(quicklist *quicklist, int fill);
void quicklistSetOptions(quicklist *quicklist, int fill, int depth);
void quicklistRelease(quicklist *quicklist);
int quicklistPushHead(quicklist *quicklist, void *value, const size_t sz);
int quicklistPushTail(quicklist *quicklist, void *value, const size_t sz);
void quicklistPush(quicklist *quicklist, void *value, const size_t sz,
                   int where);
void quicklistAppendZiplist(quicklist *quicklist, unsigned char *zl);
quicklist *quicklistAppendValuesFromZiplist(quicklist *quicklist,
                                            unsigned char *zl);
quicklist *quicklistCreateFromZiplist(int fill, int compress,
                                      unsigned char *zl);
void quicklistInsertAfter(quicklist *quicklist, quicklistEntry *node,
                          void *value, const size_t sz);
void quicklistInsertBefore(quicklist *quicklist, quicklistEntry *node,
                           void *value, const size_t sz);
void quicklistDelEntry(quicklistIter *iter, quicklistEntry *entry);
int quicklistReplaceAtIndex(quicklist *quicklist, long index, void *data,
                            int sz);
int quicklistDelRange(quicklist *quicklist, const long start, const long stop);
quicklistIter *quicklistGetIterator(const quicklist *quicklist, int direction);
quicklistIter *quicklistGetIteratorAtIdx(const quicklist *quicklist,
                                         int direction, const long long idx);
int quicklistNext(quicklistIter *iter, quicklistEntry *node);
void quicklistReleaseIterator(quicklistIter *iter);
quicklist *quicklistDup(quicklist *orig);
int quicklistIndex(const quicklist *quicklist, const long long index,
                   quicklistEntry *entry);
void quicklistRewind(quicklist *quicklist, quicklistIter *li);
void quicklistRewindTail(quicklist *quicklist, quicklistIter *li);
void quicklistRotate(quicklist *quicklist);
int quicklistPopCustom(quicklist *quicklist, int where, unsigned char **data,
                       unsigned int *sz, long long *sval,
                       void *(*saver)(unsigned char *data, unsigned int sz));
int quicklistPop(quicklist *quicklist, int where, unsigned char **data,
                 unsigned int *sz, long long *slong);
unsigned int quicklistCount(const quicklist *ql);
int quicklistCompare(unsigned char *p1, unsigned char *p2, int p2_len);
size_t quicklistGetLzf(const quicklistNode *node, void **data);
# 33 "quicklist.c" 2
# 1 "zmalloc.h" 1
# 50 "zmalloc.h"
# 1 "../deps/jemalloc/include/jemalloc/jemalloc.h" 1
# 75 "../deps/jemalloc/include/jemalloc/jemalloc.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4


# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 206 "/usr/include/stdlib.h" 3 4


__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 276 "/usr/include/stdlib.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ , __leaf__)) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ , __leaf__)) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ , __leaf__)) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 372 "/usr/include/stdlib.h" 3 4


extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));

# 464 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));

# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4

# 539 "/usr/include/stdlib.h" 3 4




extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) __attribute__ ((__warn_unused_result__));

# 742 "/usr/include/stdlib.h" 3 4
typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void *)0);
}
# 761 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));

# 860 "/usr/include/stdlib.h" 3 4



extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));

# 955 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ , __leaf__)) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}

# 956 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) __asm__ ("" "realpath") __attribute__ ((__nothrow__ , __leaf__))

                                                 __attribute__ ((__warn_unused_result__));
extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) __asm__ ("" "__realpath_chk") __attribute__ ((__nothrow__ , __leaf__))


                                                __attribute__ ((__warn_unused_result__))
     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")))
                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
__attribute__ ((__nothrow__ , __leaf__)) realpath (const char *__restrict __name, char *__restrict __resolved)
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) __asm__ ("" "ptsname_r") __attribute__ ((__nothrow__ , __leaf__))

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__ptsname_r_chk") __attribute__ ((__nothrow__ , __leaf__))


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")))
                   ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
__attribute__ ((__nothrow__ , __leaf__)) ptsname_r (int __fd, char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) __asm__ ("" "wctomb") __attribute__ ((__nothrow__ , __leaf__))
              __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
__attribute__ ((__nothrow__ , __leaf__)) wctomb (char *__s, wchar_t __wchar)
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) __asm__ ("" "mbstowcs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__mbstowcs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")))
                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) __asm__ ("" "wcstombs") __attribute__ ((__nothrow__ , __leaf__))


                                  ;
extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) __asm__ ("" "__wcstombs_chk") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
__attribute__ ((__nothrow__ , __leaf__)) wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len)

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 960 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 76 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdbool.h" 1 3 4
# 77 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 2 3 4
# 78 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 79 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 28 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 29 "/usr/include/strings.h" 2 3 4
# 39 "/usr/include/strings.h" 3 4




extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern void bcopy (const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 104 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((const));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
# 139 "/usr/include/strings.h" 3 4

# 80 "../deps/jemalloc/include/jemalloc/jemalloc.h" 2
# 183 "../deps/jemalloc/include/jemalloc/jemalloc.h"
extern __attribute__((visibility("default"))) const char *je_malloc_conf;
extern __attribute__((visibility("default"))) void (*je_malloc_message)(void *cbopaque,
    const char *s);

__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_malloc(size_t size)
    __attribute__((malloc)) __attribute__((alloc_size(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_calloc(size_t num, size_t size)
    __attribute__((malloc)) __attribute__((alloc_size(1, 2)));
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_posix_memalign(void **memptr,
    size_t alignment, size_t size) __attribute__((nonnull(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_aligned_alloc(size_t alignment,
    size_t size) __attribute__((malloc))
    __attribute__((alloc_size(2)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_realloc(void *ptr, size_t size)
    __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_free(void *ptr)
    ;

__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_mallocx(size_t size, int flags)
    __attribute__((malloc)) __attribute__((alloc_size(1)));
__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_rallocx(void *ptr, size_t size,
    int flags) __attribute__((alloc_size(2)));
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_xallocx(void *ptr, size_t size,
    size_t extra, int flags);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_sallocx(const void *ptr,
    int flags) __attribute__((pure));
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_dallocx(void *ptr, int flags);
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_sdallocx(void *ptr, size_t size,
    int flags);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_nallocx(size_t size, int flags)
    __attribute__((pure));

__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctl(const char *name,
    void *oldp, size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctlnametomib(const char *name,
    size_t *mibp, size_t *miblenp);
__attribute__((visibility("default"))) int __attribute__((nothrow)) je_mallctlbymib(const size_t *mib,
    size_t miblen, void *oldp, size_t *oldlenp, void *newp, size_t newlen);
__attribute__((visibility("default"))) void __attribute__((nothrow)) je_malloc_stats_print(
    void (*write_cb)(void *, const char *), void *je_cbopaque,
    const char *opts);
__attribute__((visibility("default"))) size_t __attribute__((nothrow)) je_malloc_usable_size(
    void *ptr) ;


__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_memalign(size_t alignment, size_t size)
    __attribute__((malloc));



__attribute__((visibility("default")))
    void __attribute__((nothrow)) *je_valloc(size_t size)
    __attribute__((malloc));







typedef void *(chunk_alloc_t)(void *, size_t, size_t, _Bool *, _Bool *, unsigned);





typedef _Bool (chunk_dalloc_t)(void *, size_t, _Bool, unsigned);






typedef _Bool (chunk_commit_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_decommit_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_purge_t)(void *, size_t, size_t, size_t, unsigned);






typedef _Bool (chunk_split_t)(void *, size_t, size_t, size_t, _Bool, unsigned);






typedef _Bool (chunk_merge_t)(void *, size_t, void *, size_t, _Bool, unsigned);

typedef struct {
 chunk_alloc_t *alloc;
 chunk_dalloc_t *dalloc;
 chunk_commit_t *commit;
 chunk_decommit_t *decommit;
 chunk_purge_t *purge;
 chunk_split_t *split;
 chunk_merge_t *merge;
} chunk_hooks_t;
# 51 "zmalloc.h" 2
# 68 "zmalloc.h"
void *zmalloc(size_t size);
void *zcalloc(size_t size);
void *zrealloc(void *ptr, size_t size);
void zfree(void *ptr);
char *zstrdup(const char *s);
size_t zmalloc_used_memory(void);
void zmalloc_enable_thread_safeness(void);
void zmalloc_set_oom_handler(void (*oom_handler)(size_t));
float zmalloc_get_fragmentation_ratio(size_t rss);
size_t zmalloc_get_rss(void);
size_t zmalloc_get_private_dirty(void);
size_t zmalloc_get_smap_bytes_by_field(char *field);
size_t zmalloc_get_memory_size(void);
void zlibc_free(void *ptr);
# 34 "quicklist.c" 2
# 1 "ziplist.h" 1
# 37 "ziplist.h"
unsigned char *ziplistNew(void);
unsigned char *ziplistMerge(unsigned char **first, unsigned char **second);
unsigned char *ziplistPush(unsigned char *zl, unsigned char *s, unsigned int slen, int where);
unsigned char *ziplistIndex(unsigned char *zl, int index);
unsigned char *ziplistNext(unsigned char *zl, unsigned char *p);
unsigned char *ziplistPrev(unsigned char *zl, unsigned char *p);
unsigned int ziplistGet(unsigned char *p, unsigned char **sval, unsigned int *slen, long long *lval);
unsigned char *ziplistInsert(unsigned char *zl, unsigned char *p, unsigned char *s, unsigned int slen);
unsigned char *ziplistDelete(unsigned char *zl, unsigned char **p);
unsigned char *ziplistDeleteRange(unsigned char *zl, int index, unsigned int num);
unsigned int ziplistCompare(unsigned char *p, unsigned char *s, unsigned int slen);
unsigned char *ziplistFind(unsigned char *p, unsigned char *vstr, unsigned int vlen, unsigned int skip);
unsigned int ziplistLen(unsigned char *zl);
size_t ziplistBlobLen(unsigned char *zl);
# 35 "quicklist.c" 2
# 1 "util.h" 1
# 34 "util.h"
# 1 "sds.h" 1
# 38 "sds.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __ssize_t ssize_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;

# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 39 "sds.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 40 "sds.h" 2


typedef char *sds;



struct __attribute__ ((__packed__)) sdshdr5 {
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr8 {
    uint8_t len;
    uint8_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr16 {
    uint16_t len;
    uint16_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr32 {
    uint32_t len;
    uint32_t alloc;
    unsigned char flags;
    char buf[];
};
struct __attribute__ ((__packed__)) sdshdr64 {
    uint64_t len;
    uint64_t alloc;
    unsigned char flags;
    char buf[];
};
# 86 "sds.h"
static inline size_t sdslen(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            return ((flags)>>3);
        case 1:
            return ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len;
        case 2:
            return ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len;
        case 3:
            return ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len;
        case 4:
            return ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len;
    }
    return 0;
}

static inline size_t sdsavail(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0: {
            return 0;
        }
        case 1: {
            struct sdshdr8 *sh = (void*)((s)-(sizeof(struct sdshdr8)));;
            return sh->alloc - sh->len;
        }
        case 2: {
            struct sdshdr16 *sh = (void*)((s)-(sizeof(struct sdshdr16)));;
            return sh->alloc - sh->len;
        }
        case 3: {
            struct sdshdr32 *sh = (void*)((s)-(sizeof(struct sdshdr32)));;
            return sh->alloc - sh->len;
        }
        case 4: {
            struct sdshdr64 *sh = (void*)((s)-(sizeof(struct sdshdr64)));;
            return sh->alloc - sh->len;
        }
    }
    return 0;
}

static inline void sdssetlen(sds s, size_t newlen) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            {
                unsigned char *fp = ((unsigned char*)s)-1;
                *fp = 0 | (newlen << 3);
            }
            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len = newlen;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len = newlen;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len = newlen;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len = newlen;
            break;
    }
}

static inline void sdsinclen(sds s, size_t inc) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            {
                unsigned char *fp = ((unsigned char*)s)-1;
                unsigned char newlen = ((flags)>>3)+inc;
                *fp = 0 | (newlen << 3);
            }
            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->len += inc;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->len += inc;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->len += inc;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->len += inc;
            break;
    }
}


static inline size_t sdsalloc(const sds s) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:
            return ((flags)>>3);
        case 1:
            return ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->alloc;
        case 2:
            return ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->alloc;
        case 3:
            return ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->alloc;
        case 4:
            return ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->alloc;
    }
    return 0;
}

static inline void sdssetalloc(sds s, size_t newlen) {
    unsigned char flags = s[-1];
    switch(flags&7) {
        case 0:

            break;
        case 1:
            ((struct sdshdr8 *)((s)-(sizeof(struct sdshdr8))))->alloc = newlen;
            break;
        case 2:
            ((struct sdshdr16 *)((s)-(sizeof(struct sdshdr16))))->alloc = newlen;
            break;
        case 3:
            ((struct sdshdr32 *)((s)-(sizeof(struct sdshdr32))))->alloc = newlen;
            break;
        case 4:
            ((struct sdshdr64 *)((s)-(sizeof(struct sdshdr64))))->alloc = newlen;
            break;
    }
}

sds sdsnewlen(const void *init, size_t initlen);
sds sdsnew(const char *init);
sds sdsempty(void);
sds sdsdup(const sds s);
void sdsfree(sds s);
sds sdsgrowzero(sds s, size_t len);
sds sdscatlen(sds s, const void *t, size_t len);
sds sdscat(sds s, const char *t);
sds sdscatsds(sds s, const sds t);
sds sdscpylen(sds s, const char *t, size_t len);
sds sdscpy(sds s, const char *t);

sds sdscatvprintf(sds s, const char *fmt, va_list ap);

sds sdscatprintf(sds s, const char *fmt, ...)
    __attribute__((format(printf, 2, 3)));




sds sdscatfmt(sds s, char const *fmt, ...);
sds sdstrim(sds s, const char *cset);
void sdsrange(sds s, int start, int end);
void sdsupdatelen(sds s);
void sdsclear(sds s);
int sdscmp(const sds s1, const sds s2);
sds *sdssplitlen(const char *s, int len, const char *sep, int seplen, int *count);
void sdsfreesplitres(sds *tokens, int count);
void sdstolower(sds s);
void sdstoupper(sds s);
sds sdsfromlonglong(long long value);
sds sdscatrepr(sds s, const char *p, size_t len);
sds *sdssplitargs(const char *line, int *argc);
sds sdsmapchars(sds s, const char *from, const char *to, size_t setlen);
sds sdsjoin(char **argv, int argc, char *sep);
sds sdsjoinsds(sds *argv, int argc, const char *sep, size_t seplen);


sds sdsMakeRoomFor(sds s, size_t addlen);
void sdsIncrLen(sds s, int incr);
sds sdsRemoveFreeSpace(sds s);
size_t sdsAllocSize(sds s);
void *sdsAllocPtr(sds s);





void *sds_malloc(size_t size);
void *sds_realloc(void *ptr, size_t size);
void sds_free(void *ptr);
# 35 "util.h" 2

int stringmatchlen(const char *p, int plen, const char *s, int slen, int nocase);
int stringmatch(const char *p, const char *s, int nocase);
long long memtoll(const char *p, int *err);
uint32_t digits10(uint64_t v);
uint32_t sdigits10(int64_t v);
int ll2string(char *s, size_t len, long long value);
int string2ll(const char *s, size_t slen, long long *value);
int string2l(const char *s, size_t slen, long *value);
int string2ld(const char *s, size_t slen, long double *dp);
int d2string(char *buf, size_t len, double value);
int ld2string(char *buf, size_t len, long double value, int humanfriendly);
sds getAbsolutePath(char *filename);
int pathIsBaseName(char *path);
# 36 "quicklist.c" 2
# 1 "lzf.h" 1
# 76 "lzf.h"
unsigned int
lzf_compress (const void *const in_data, unsigned int in_len,
              void *out_data, unsigned int out_len);
# 95 "lzf.h"
unsigned int
lzf_decompress (const void *const in_data, unsigned int in_len,
                void *out_data, unsigned int out_len);
# 37 "quicklist.c" 2
# 47 "quicklist.c"
static const size_t optimization_level[] = {4096, 8192, 16384, 32768, 65536};
# 94 "quicklist.c"
quicklist *quicklistCreate(void) {
    struct quicklist *quicklist;

    quicklist = zmalloc(sizeof(*quicklist));
    quicklist->head = quicklist->tail = ((void *)0);
    quicklist->len = 0;
    quicklist->count = 0;
    quicklist->compress = 0;
    quicklist->fill = -2;
    return quicklist;
}


void quicklistSetCompressDepth(quicklist *quicklist, int compress) {
    if (compress > (1 << 16)) {
        compress = (1 << 16);
    } else if (compress < 0) {
        compress = 0;
    }
    quicklist->compress = compress;
}


void quicklistSetFill(quicklist *quicklist, int fill) {
    if (fill > (1 << 15)) {
        fill = (1 << 15);
    } else if (fill < -5) {
        fill = -5;
    }
    quicklist->fill = fill;
}

void quicklistSetOptions(quicklist *quicklist, int fill, int depth) {
    quicklistSetFill(quicklist, fill);
    quicklistSetCompressDepth(quicklist, depth);
}


quicklist *quicklistNew(int fill, int compress) {
    quicklist *quicklist = quicklistCreate();
    quicklistSetOptions(quicklist, fill, compress);
    return quicklist;
}

 quicklistNode *quicklistCreateNode(void) {
    quicklistNode *node;
    node = zmalloc(sizeof(*node));
    node->zl = ((void *)0);
    node->count = 0;
    node->sz = 0;
    node->next = node->prev = ((void *)0);
    node->encoding = 1;
    node->container = 2;
    node->recompress = 0;
    return node;
}


unsigned int quicklistCount(const quicklist *ql) { return ql->count; }


void quicklistRelease(quicklist *quicklist) {
    unsigned long len;
    quicklistNode *current, *next;

    current = quicklist->head;
    len = quicklist->len;
    while (len--) {
        next = current->next;

        zfree(current->zl);
        quicklist->count -= current->count;

        zfree(current);

        quicklist->len--;
        current = next;
    }
    zfree(quicklist);
}




 int __quicklistCompressNode(quicklistNode *node) {





    if (node->sz < 48)
        return 0;

    quicklistLZF *lzf = zmalloc(sizeof(*lzf) + node->sz);


    if (((lzf->sz = lzf_compress(node->zl, node->sz, lzf->compressed,
                                 node->sz)) == 0) ||
        lzf->sz + 8 >= node->sz) {

        zfree(lzf);
        return 0;
    }
    lzf = zrealloc(lzf, sizeof(*lzf) + lzf->sz);
    zfree(node->zl);
    node->zl = (unsigned char *)lzf;
    node->encoding = 2;
    node->recompress = 0;
    return 1;
}
# 215 "quicklist.c"
 int __quicklistDecompressNode(quicklistNode *node) {




    void *decompressed = zmalloc(node->sz);
    quicklistLZF *lzf = (quicklistLZF *)node->zl;
    if (lzf_decompress(lzf->compressed, lzf->sz, decompressed, node->sz) == 0) {

        zfree(decompressed);
        return 0;
    }
    zfree(lzf);
    node->zl = decompressed;
    node->encoding = 1;
    return 1;
}
# 253 "quicklist.c"
size_t quicklistGetLzf(const quicklistNode *node, void **data) {
    quicklistLZF *lzf = (quicklistLZF *)node->zl;
    *data = lzf->compressed;
    return lzf->sz;
}







 void __quicklistCompress(const quicklist *quicklist,
                                      quicklistNode *node) {


    if (!((quicklist)->compress != 0) ||
        quicklist->len < (unsigned int)(quicklist->compress * 2))
        return;
# 305 "quicklist.c"
    quicklistNode *forward = quicklist->head;
    quicklistNode *reverse = quicklist->tail;
    int depth = 0;
    int in_depth = 0;
    while (depth++ < quicklist->compress) {
        do { if ((forward) && (forward)->encoding == 2) { __quicklistDecompressNode((forward)); } } while (0);
        do { if ((reverse) && (reverse)->encoding == 2) { __quicklistDecompressNode((reverse)); } } while (0);

        if (forward == node || reverse == node)
            in_depth = 1;

        if (forward == reverse)
            return;

        forward = forward->next;
        reverse = reverse->prev;
    }

    if (!in_depth)
        do { if ((node) && (node)->encoding == 1) { __quicklistCompressNode((node)); } } while (0);

    if (depth > 2) {

        do { if ((forward) && (forward)->encoding == 1) { __quicklistCompressNode((forward)); } } while (0);
        do { if ((reverse) && (reverse)->encoding == 1) { __quicklistCompressNode((reverse)); } } while (0);
    }
}
# 352 "quicklist.c"
 void __quicklistInsertNode(quicklist *quicklist,
                                        quicklistNode *old_node,
                                        quicklistNode *new_node, int after) {
    if (after) {
        new_node->prev = old_node;
        if (old_node) {
            new_node->next = old_node->next;
            if (old_node->next)
                old_node->next->prev = new_node;
            old_node->next = new_node;
        }
        if (quicklist->tail == old_node)
            quicklist->tail = new_node;
    } else {
        new_node->next = old_node;
        if (old_node) {
            new_node->prev = old_node->prev;
            if (old_node->prev)
                old_node->prev->next = new_node;
            old_node->prev = new_node;
        }
        if (quicklist->head == old_node)
            quicklist->head = new_node;
    }

    if (quicklist->len == 0) {
        quicklist->head = quicklist->tail = new_node;
    }

    if (old_node)
        do { if ((old_node)->recompress) do { if (((old_node)) && ((old_node))->encoding == 1) { __quicklistCompressNode(((old_node))); } } while (0); else __quicklistCompress((quicklist), (old_node)); } while (0);

    quicklist->len++;
}


 void _quicklistInsertNodeBefore(quicklist *quicklist,
                                             quicklistNode *old_node,
                                             quicklistNode *new_node) {
    __quicklistInsertNode(quicklist, old_node, new_node, 0);
}

 void _quicklistInsertNodeAfter(quicklist *quicklist,
                                            quicklistNode *old_node,
                                            quicklistNode *new_node) {
    __quicklistInsertNode(quicklist, old_node, new_node, 1);
}

 int
_quicklistNodeSizeMeetsOptimizationRequirement(const size_t sz,
                                               const int fill) {
    if (fill >= 0)
        return 0;

    size_t offset = (-fill) - 1;
    if (offset < (sizeof(optimization_level) / sizeof(*optimization_level))) {
        if (sz <= optimization_level[offset]) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}



 int _quicklistNodeAllowInsert(const quicklistNode *node,
                                           const int fill, const size_t sz) {
    if (__builtin_expect(!!(!node), 0))
        return 0;

    int ziplist_overhead;

    if (sz < 254)
        ziplist_overhead = 1;
    else
        ziplist_overhead = 5;


    if (sz < 64)
        ziplist_overhead += 1;
    else if (__builtin_expect(!!(sz < 16384), 1))
        ziplist_overhead += 2;
    else
        ziplist_overhead += 5;


    unsigned int new_sz = node->sz + sz + ziplist_overhead;
    if (__builtin_expect(!!(_quicklistNodeSizeMeetsOptimizationRequirement(new_sz, fill)), 1))
        return 1;
    else if (!((new_sz) <= 8192))
        return 0;
    else if ((int)node->count < fill)
        return 1;
    else
        return 0;
}

 int _quicklistNodeAllowMerge(const quicklistNode *a,
                                          const quicklistNode *b,
                                          const int fill) {
    if (!a || !b)
        return 0;



    unsigned int merge_sz = a->sz + b->sz - 11;
    if (__builtin_expect(!!(_quicklistNodeSizeMeetsOptimizationRequirement(merge_sz, fill)), 1))
        return 1;
    else if (!((merge_sz) <= 8192))
        return 0;
    else if ((int)(a->count + b->count) <= fill)
        return 1;
    else
        return 0;
}
# 480 "quicklist.c"
int quicklistPushHead(quicklist *quicklist, void *value, size_t sz) {
    quicklistNode *orig_head = quicklist->head;
    if (__builtin_expect(!!(_quicklistNodeAllowInsert(quicklist->head, quicklist->fill, sz)), 1)
                                                                            ) {
        quicklist->head->zl =
            ziplistPush(quicklist->head->zl, value, sz, 0);
        do { (quicklist->head)->sz = ziplistBlobLen((quicklist->head)->zl); } while (0);
    } else {
        quicklistNode *node = quicklistCreateNode();
        node->zl = ziplistPush(ziplistNew(), value, sz, 0);

        do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
        _quicklistInsertNodeBefore(quicklist, quicklist->head, node);
    }
    quicklist->count++;
    quicklist->head->count++;
    return (orig_head != quicklist->head);
}





int quicklistPushTail(quicklist *quicklist, void *value, size_t sz) {
    quicklistNode *orig_tail = quicklist->tail;
    if (__builtin_expect(!!(_quicklistNodeAllowInsert(quicklist->tail, quicklist->fill, sz)), 1)
                                                                            ) {
        quicklist->tail->zl =
            ziplistPush(quicklist->tail->zl, value, sz, 1);
        do { (quicklist->tail)->sz = ziplistBlobLen((quicklist->tail)->zl); } while (0);
    } else {
        quicklistNode *node = quicklistCreateNode();
        node->zl = ziplistPush(ziplistNew(), value, sz, 1);

        do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
        _quicklistInsertNodeAfter(quicklist, quicklist->tail, node);
    }
    quicklist->count++;
    quicklist->tail->count++;
    return (orig_tail != quicklist->tail);
}




void quicklistAppendZiplist(quicklist *quicklist, unsigned char *zl) {
    quicklistNode *node = quicklistCreateNode();

    node->zl = zl;
    node->count = ziplistLen(node->zl);
    node->sz = ziplistBlobLen(zl);

    _quicklistInsertNodeAfter(quicklist, quicklist->tail, node);
    quicklist->count += node->count;
}







quicklist *quicklistAppendValuesFromZiplist(quicklist *quicklist,
                                            unsigned char *zl) {
    unsigned char *value;
    unsigned int sz;
    long long longval;
    char longstr[32] = {0};

    unsigned char *p = ziplistIndex(zl, 0);
    while (ziplistGet(p, &value, &sz, &longval)) {
        if (!value) {

            sz = ll2string(longstr, sizeof(longstr), longval);
            value = (unsigned char *)longstr;
        }
        quicklistPushTail(quicklist, value, sz);
        p = ziplistNext(zl, p);
    }
    zfree(zl);
    return quicklist;
}




quicklist *quicklistCreateFromZiplist(int fill, int compress,
                                      unsigned char *zl) {
    return quicklistAppendValuesFromZiplist(quicklistNew(fill, compress), zl);
}
# 579 "quicklist.c"
 void __quicklistDelNode(quicklist *quicklist,
                                     quicklistNode *node) {
    if (node->next)
        node->next->prev = node->prev;
    if (node->prev)
        node->prev->next = node->next;

    if (node == quicklist->tail) {
        quicklist->tail = node->prev;
    }

    if (node == quicklist->head) {
        quicklist->head = node->next;
    }



    __quicklistCompress(quicklist, ((void *)0));

    quicklist->count -= node->count;

    zfree(node->zl);
    zfree(node);
    quicklist->len--;
}
# 613 "quicklist.c"
 int quicklistDelIndex(quicklist *quicklist, quicklistNode *node,
                                   unsigned char **p) {
    int gone = 0;

    node->zl = ziplistDelete(node->zl, p);
    node->count--;
    if (node->count == 0) {
        gone = 1;
        __quicklistDelNode(quicklist, node);
    } else {
        do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
    }
    quicklist->count--;

    return gone ? 1 : 0;
}





void quicklistDelEntry(quicklistIter *iter, quicklistEntry *entry) {
    quicklistNode *prev = entry->node->prev;
    quicklistNode *next = entry->node->next;
    int deleted_node = quicklistDelIndex((quicklist *)entry->quicklist,
                                         entry->node, &entry->zi);


    iter->zi = ((void *)0);


    if (deleted_node) {
        if (iter->direction == 0) {
            iter->current = next;
            iter->offset = 0;
        } else if (iter->direction == 1) {
            iter->current = prev;
            iter->offset = -1;
        }
    }
# 661 "quicklist.c"
}





int quicklistReplaceAtIndex(quicklist *quicklist, long index, void *data,
                            int sz) {
    quicklistEntry entry;
    if (__builtin_expect(!!(quicklistIndex(quicklist, index, &entry)), 1)) {

        entry.node->zl = ziplistDelete(entry.node->zl, &entry.zi);
        entry.node->zl = ziplistInsert(entry.node->zl, entry.zi, data, sz);
        do { (entry.node)->sz = ziplistBlobLen((entry.node)->zl); } while (0);
        do { if ((entry.node)->recompress) do { if (((entry.node)) && ((entry.node))->encoding == 1) { __quicklistCompressNode(((entry.node))); } } while (0); else __quicklistCompress((quicklist), (entry.node)); } while (0);
        return 1;
    } else {
        return 0;
    }
}
# 695 "quicklist.c"
 quicklistNode *_quicklistZiplistMerge(quicklist *quicklist,
                                                   quicklistNode *a,
                                                   quicklistNode *b) {
    ;

    do { if ((a) && (a)->encoding == 2) { __quicklistDecompressNode((a)); } } while (0);
    do { if ((b) && (b)->encoding == 2) { __quicklistDecompressNode((b)); } } while (0);
    if ((ziplistMerge(&a->zl, &b->zl))) {

        quicklistNode *keep = ((void *)0), *nokeep = ((void *)0);
        if (!a->zl) {
            nokeep = a;
            keep = b;
        } else if (!b->zl) {
            nokeep = b;
            keep = a;
        }
        keep->count = ziplistLen(keep->zl);
        do { (keep)->sz = ziplistBlobLen((keep)->zl); } while (0);

        nokeep->count = 0;
        __quicklistDelNode(quicklist, nokeep);
        do { if ((keep)->recompress) do { if (((keep)) && ((keep))->encoding == 1) { __quicklistCompressNode(((keep))); } } while (0); else __quicklistCompress((quicklist), (keep)); } while (0);
        return keep;
    } else {

        return ((void *)0);
    }
}
# 733 "quicklist.c"
 void _quicklistMergeNodes(quicklist *quicklist,
                                       quicklistNode *center) {
    int fill = quicklist->fill;
    quicklistNode *prev, *prev_prev, *next, *next_next, *target;
    prev = prev_prev = next = next_next = target = ((void *)0);

    if (center->prev) {
        prev = center->prev;
        if (center->prev->prev)
            prev_prev = center->prev->prev;
    }

    if (center->next) {
        next = center->next;
        if (center->next->next)
            next_next = center->next->next;
    }


    if (_quicklistNodeAllowMerge(prev, prev_prev, fill)) {
        _quicklistZiplistMerge(quicklist, prev_prev, prev);
        prev_prev = prev = ((void *)0);
    }


    if (_quicklistNodeAllowMerge(next, next_next, fill)) {
        _quicklistZiplistMerge(quicklist, next, next_next);
        next = next_next = ((void *)0);
    }


    if (_quicklistNodeAllowMerge(center, center->prev, fill)) {
        target = _quicklistZiplistMerge(quicklist, center->prev, center);
        center = ((void *)0);
    } else {

        target = center;
    }


    if (_quicklistNodeAllowMerge(target, target->next, fill)) {
        _quicklistZiplistMerge(quicklist, target, target->next);
    }
}
# 797 "quicklist.c"
 quicklistNode *_quicklistSplitNode(quicklistNode *node, int offset,
                                                int after) {
    size_t zl_sz = node->sz;

    quicklistNode *new_node = quicklistCreateNode();
    new_node->zl = zmalloc(zl_sz);


    memcpy(new_node->zl, node->zl, zl_sz);


    int orig_start = after ? offset + 1 : 0;
    int orig_extent = after ? -1 : offset;
    int new_start = after ? 0 : offset;
    int new_extent = after ? offset + 1 : -1;

   
                                         ;

    node->zl = ziplistDeleteRange(node->zl, orig_start, orig_extent);
    node->count = ziplistLen(node->zl);
    do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);

    new_node->zl = ziplistDeleteRange(new_node->zl, new_start, new_extent);
    new_node->count = ziplistLen(new_node->zl);
    do { (new_node)->sz = ziplistBlobLen((new_node)->zl); } while (0);

    ;
    return new_node;
}





 void _quicklistInsert(quicklist *quicklist, quicklistEntry *entry,
                                   void *value, const size_t sz, int after) {
    int full = 0, at_tail = 0, at_head = 0, full_next = 0, full_prev = 0;
    int fill = quicklist->fill;
    quicklistNode *node = entry->node;
    quicklistNode *new_node = ((void *)0);

    if (!node) {

        ;
        new_node = quicklistCreateNode();
        new_node->zl = ziplistPush(ziplistNew(), value, sz, 0);
        __quicklistInsertNode(quicklist, ((void *)0), new_node, after);
        new_node->count++;
        quicklist->count++;
        return;
    }


    if (!_quicklistNodeAllowInsert(node, fill, sz)) {
       
                            ;
        full = 1;
    }

    if (after && (entry->offset == node->count)) {
        ;
        at_tail = 1;
        if (!_quicklistNodeAllowInsert(node->next, fill, sz)) {
            ;
            full_next = 1;
        }
    }

    if (!after && (entry->offset == 0)) {
        ;
        at_head = 1;
        if (!_quicklistNodeAllowInsert(node->prev, fill, sz)) {
            ;
            full_prev = 1;
        }
    }


    if (!full && after) {
        ;
        do { if ((node) && (node)->encoding == 2) { __quicklistDecompressNode((node)); (node)->recompress = 1; } } while (0);
        unsigned char *next = ziplistNext(node->zl, entry->zi);
        if (next == ((void *)0)) {
            node->zl = ziplistPush(node->zl, value, sz, 1);
        } else {
            node->zl = ziplistInsert(node->zl, next, value, sz);
        }
        node->count++;
        do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
        do { if ((node)->recompress) do { if (((node)) && ((node))->encoding == 1) { __quicklistCompressNode(((node))); } } while (0); } while (0);
    } else if (!full && !after) {
        ;
        do { if ((node) && (node)->encoding == 2) { __quicklistDecompressNode((node)); (node)->recompress = 1; } } while (0);
        node->zl = ziplistInsert(node->zl, entry->zi, value, sz);
        node->count++;
        do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
        do { if ((node)->recompress) do { if (((node)) && ((node))->encoding == 1) { __quicklistCompressNode(((node))); } } while (0); } while (0);
    } else if (full && at_tail && node->next && !full_next && after) {


        ;
        new_node = node->next;
        do { if ((new_node) && (new_node)->encoding == 2) { __quicklistDecompressNode((new_node)); (new_node)->recompress = 1; } } while (0);
        new_node->zl = ziplistPush(new_node->zl, value, sz, 0);
        new_node->count++;
        do { (new_node)->sz = ziplistBlobLen((new_node)->zl); } while (0);
        do { if ((new_node)->recompress) do { if (((new_node)) && ((new_node))->encoding == 1) { __quicklistCompressNode(((new_node))); } } while (0); } while (0);
    } else if (full && at_head && node->prev && !full_prev && !after) {


        ;
        new_node = node->prev;
        do { if ((new_node) && (new_node)->encoding == 2) { __quicklistDecompressNode((new_node)); (new_node)->recompress = 1; } } while (0);
        new_node->zl = ziplistPush(new_node->zl, value, sz, 1);
        new_node->count++;
        do { (new_node)->sz = ziplistBlobLen((new_node)->zl); } while (0);
        do { if ((new_node)->recompress) do { if (((new_node)) && ((new_node))->encoding == 1) { __quicklistCompressNode(((new_node))); } } while (0); } while (0);
    } else if (full && ((at_tail && node->next && full_next && after) ||
                        (at_head && node->prev && full_prev && !after))) {


        ;
        new_node = quicklistCreateNode();
        new_node->zl = ziplistPush(ziplistNew(), value, sz, 0);
        new_node->count++;
        do { (new_node)->sz = ziplistBlobLen((new_node)->zl); } while (0);
        __quicklistInsertNode(quicklist, node, new_node, after);
    } else if (full) {


        ;
        do { if ((node) && (node)->encoding == 2) { __quicklistDecompressNode((node)); (node)->recompress = 1; } } while (0);
        new_node = _quicklistSplitNode(node, entry->offset, after);
        new_node->zl = ziplistPush(new_node->zl, value, sz,
                                   after ? 0 : 1);
        new_node->count++;
        do { (new_node)->sz = ziplistBlobLen((new_node)->zl); } while (0);
        __quicklistInsertNode(quicklist, node, new_node, after);
        _quicklistMergeNodes(quicklist, node);
    }

    quicklist->count++;
}

void quicklistInsertBefore(quicklist *quicklist, quicklistEntry *entry,
                           void *value, const size_t sz) {
    _quicklistInsert(quicklist, entry, value, sz, 0);
}

void quicklistInsertAfter(quicklist *quicklist, quicklistEntry *entry,
                          void *value, const size_t sz) {
    _quicklistInsert(quicklist, entry, value, sz, 1);
}







int quicklistDelRange(quicklist *quicklist, const long start,
                      const long count) {
    if (count <= 0)
        return 0;

    unsigned long extent = count;

    if (start >= 0 && extent > (quicklist->count - start)) {

        extent = quicklist->count - start;
    } else if (start < 0 && extent > (unsigned long)(-start)) {

        extent = -start;
    }

    quicklistEntry entry;
    if (!quicklistIndex(quicklist, start, &entry))
        return 0;

   
                    ;
    quicklistNode *node = entry.node;


    while (extent) {
        quicklistNode *next = node->next;

        unsigned long del;
        int delete_entire_node = 0;
        if (entry.offset == 0 && extent >= node->count) {


            delete_entire_node = 1;
            del = node->count;
        } else if (entry.offset >= 0 && extent >= node->count) {


            del = node->count - entry.offset;
        } else if (entry.offset < 0) {





            del = -entry.offset;




            if (del > extent)
                del = extent;
        } else {


            del = extent;
        }

       

                                                                     ;

        if (delete_entire_node) {
            __quicklistDelNode(quicklist, node);
        } else {
            do { if ((node) && (node)->encoding == 2) { __quicklistDecompressNode((node)); (node)->recompress = 1; } } while (0);
            node->zl = ziplistDeleteRange(node->zl, entry.offset, del);
            do { (node)->sz = ziplistBlobLen((node)->zl); } while (0);
            node->count -= del;
            quicklist->count -= del;
            do { if ((node)->count == 0) { __quicklistDelNode((quicklist), (node)); (node) = ((void *)0); } } while (0);
            if (node)
                do { if ((node)->recompress) do { if (((node)) && ((node))->encoding == 1) { __quicklistCompressNode(((node))); } } while (0); } while (0);
        }

        extent -= del;

        node = next;

        entry.offset = 0;
    }
    return 1;
}


int quicklistCompare(unsigned char *p1, unsigned char *p2, int p2_len) {
    return ziplistCompare(p1, p2, p2_len);
}



quicklistIter *quicklistGetIterator(const quicklist *quicklist, int direction) {
    quicklistIter *iter;

    iter = zmalloc(sizeof(*iter));

    if (direction == 0) {
        iter->current = quicklist->head;
        iter->offset = 0;
    } else if (direction == 1) {
        iter->current = quicklist->tail;
        iter->offset = -1;
    }

    iter->direction = direction;
    iter->quicklist = quicklist;

    iter->zi = ((void *)0);

    return iter;
}



quicklistIter *quicklistGetIteratorAtIdx(const quicklist *quicklist,
                                         const int direction,
                                         const long long idx) {
    quicklistEntry entry;

    if (quicklistIndex(quicklist, idx, &entry)) {
        quicklistIter *base = quicklistGetIterator(quicklist, direction);
        base->zi = ((void *)0);
        base->current = entry.node;
        base->offset = entry.offset;
        return base;
    } else {
        return ((void *)0);
    }
}



void quicklistReleaseIterator(quicklistIter *iter) {
    if (iter->current)
        do { if ((iter->current)->recompress) do { if (((iter->current)) && ((iter->current))->encoding == 1) { __quicklistCompressNode(((iter->current))); } } while (0); else __quicklistCompress((iter->quicklist), (iter->current)); } while (0);

    zfree(iter);
}
# 1117 "quicklist.c"
int quicklistNext(quicklistIter *iter, quicklistEntry *entry) {
    do { (entry)->zi = (entry)->value = ((void *)0); (entry)->longval = -123456789; (entry)->quicklist = ((void *)0); (entry)->node = ((void *)0); (entry)->offset = 123456789; (entry)->sz = 0; } while (0);

    if (!iter) {
        ;
        return 0;
    }

    entry->quicklist = iter->quicklist;
    entry->node = iter->current;

    if (!iter->current) {
       
        return 0;
    }

    unsigned char *(*nextFn)(unsigned char *, unsigned char *) = ((void *)0);
    int offset_update = 0;

    if (!iter->zi) {

        do { if ((iter->current) && (iter->current)->encoding == 2) { __quicklistDecompressNode((iter->current)); (iter->current)->recompress = 1; } } while (0);
        iter->zi = ziplistIndex(iter->current->zl, iter->offset);
    } else {

        if (iter->direction == 0) {
            nextFn = ziplistNext;
            offset_update = 1;
        } else if (iter->direction == 1) {
            nextFn = ziplistPrev;
            offset_update = -1;
        }
        iter->zi = nextFn(iter->current->zl, iter->zi);
        iter->offset += offset_update;
    }

    entry->zi = iter->zi;
    entry->offset = iter->offset;

    if (iter->zi) {

        ziplistGet(entry->zi, &entry->value, &entry->sz, &entry->longval);
        return 1;
    } else {


        do { if ((iter->current)->recompress) do { if (((iter->current)) && ((iter->current))->encoding == 1) { __quicklistCompressNode(((iter->current))); } } while (0); else __quicklistCompress((iter->quicklist), (iter->current)); } while (0);
        if (iter->direction == 0) {

            ;
            iter->current = iter->current->next;
            iter->offset = 0;
        } else if (iter->direction == 1) {

            ;
            iter->current = iter->current->prev;
            iter->offset = -1;
        }
        iter->zi = ((void *)0);
        return quicklistNext(iter, entry);
    }
}







quicklist *quicklistDup(quicklist *orig) {
    quicklist *copy;

    copy = quicklistNew(orig->fill, orig->compress);

    for (quicklistNode *current = orig->head; current;
         current = current->next) {
        quicklistNode *node = quicklistCreateNode();

        if (node->encoding == 2) {
            quicklistLZF *lzf = (quicklistLZF *)node->zl;
            size_t lzf_sz = sizeof(*lzf) + lzf->sz;
            node->zl = zmalloc(lzf_sz);
            memcpy(node->zl, current->zl, lzf_sz);
        } else if (node->encoding == 1) {
            node->zl = zmalloc(current->sz);
            memcpy(node->zl, current->zl, current->sz);
        }

        node->count = current->count;
        copy->count += node->count;
        node->sz = current->sz;
        node->encoding = current->encoding;

        _quicklistInsertNodeAfter(copy, copy->tail, node);
    }


    return copy;
}
# 1225 "quicklist.c"
int quicklistIndex(const quicklist *quicklist, const long long idx,
                   quicklistEntry *entry) {
    quicklistNode *n;
    unsigned long long accum = 0;
    unsigned long long index;
    int forward = idx < 0 ? 0 : 1;

    do { (entry)->zi = (entry)->value = ((void *)0); (entry)->longval = -123456789; (entry)->quicklist = ((void *)0); (entry)->node = ((void *)0); (entry)->offset = 123456789; (entry)->sz = 0; } while (0);
    entry->quicklist = quicklist;

    if (!forward) {
        index = (-idx) - 1;
        n = quicklist->tail;
    } else {
        index = idx;
        n = quicklist->head;
    }

    if (index >= quicklist->count)
        return 0;

    while (__builtin_expect(!!(n), 1)) {
        if ((accum + n->count) > index) {
            break;
        } else {
           
                    ;
            accum += n->count;
            n = forward ? n->next : n->prev;
        }
    }

    if (!n)
        return 0;

   
                                                        ;

    entry->node = n;
    if (forward) {

        entry->offset = index - accum;
    } else {


        entry->offset = (-index) - 1 + accum;
    }

    do { if ((entry->node) && (entry->node)->encoding == 2) { __quicklistDecompressNode((entry->node)); (entry->node)->recompress = 1; } } while (0);
    entry->zi = ziplistIndex(entry->node->zl, entry->offset);
    ziplistGet(entry->zi, &entry->value, &entry->sz, &entry->longval);


    return 1;
}


void quicklistRotate(quicklist *quicklist) {
    if (quicklist->count <= 1)
        return;


    unsigned char *p = ziplistIndex(quicklist->tail->zl, -1);
    unsigned char *value;
    long long longval;
    unsigned int sz;
    char longstr[32] = {0};
    ziplistGet(p, &value, &sz, &longval);


    if (!value) {

        sz = ll2string(longstr, sizeof(longstr), longval);
        value = (unsigned char *)longstr;
    }


    quicklistPushHead(quicklist, value, sz);




    if (quicklist->len == 1) {
        p = ziplistIndex(quicklist->tail->zl, -1);
    }


    quicklistDelIndex(quicklist, quicklist->tail, &p);
}
# 1324 "quicklist.c"
int quicklistPopCustom(quicklist *quicklist, int where, unsigned char **data,
                       unsigned int *sz, long long *sval,
                       void *(*saver)(unsigned char *data, unsigned int sz)) {
    unsigned char *p;
    unsigned char *vstr;
    unsigned int vlen;
    long long vlong;
    int pos = (where == 0) ? 0 : -1;

    if (quicklist->count == 0)
        return 0;

    if (data)
        *data = ((void *)0);
    if (sz)
        *sz = 0;
    if (sval)
        *sval = -123456789;

    quicklistNode *node;
    if (where == 0 && quicklist->head) {
        node = quicklist->head;
    } else if (where == -1 && quicklist->tail) {
        node = quicklist->tail;
    } else {
        return 0;
    }

    p = ziplistIndex(node->zl, pos);
    if (ziplistGet(p, &vstr, &vlen, &vlong)) {
        if (vstr) {
            if (data)
                *data = saver(vstr, vlen);
            if (sz)
                *sz = vlen;
        } else {
            if (data)
                *data = ((void *)0);
            if (sval)
                *sval = vlong;
        }
        quicklistDelIndex(quicklist, node, &p);
        return 1;
    }
    return 0;
}


 void *_quicklistSaver(unsigned char *data, unsigned int sz) {
    unsigned char *vstr;
    if (data) {
        vstr = zmalloc(sz);
        memcpy(vstr, data, sz);
        return vstr;
    }
    return ((void *)0);
}




int quicklistPop(quicklist *quicklist, int where, unsigned char **data,
                 unsigned int *sz, long long *slong) {
    unsigned char *vstr;
    unsigned int vlen;
    long long vlong;
    if (quicklist->count == 0)
        return 0;
    int ret = quicklistPopCustom(quicklist, where, &vstr, &vlen, &vlong,
                                 _quicklistSaver);
    if (data)
        *data = vstr;
    if (slong)
        *slong = vlong;
    if (sz)
        *sz = vlen;
    return ret;
}


void quicklistPush(quicklist *quicklist, void *value, const size_t sz,
                   int where) {
    if (where == 0) {
        quicklistPushHead(quicklist, value, sz);
    } else if (where == -1) {
        quicklistPushTail(quicklist, value, sz);
    }
}
