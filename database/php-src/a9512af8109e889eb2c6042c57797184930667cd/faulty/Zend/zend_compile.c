# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
# 23 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
# 1 "Zend/zend_language_parser.h" 1
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.y"
# 50 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.h"






   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_DOUBLE_ARROW = 268,
     T_YIELD_FROM = 269,
     T_POW_EQUAL = 270,
     T_SR_EQUAL = 271,
     T_SL_EQUAL = 272,
     T_XOR_EQUAL = 273,
     T_OR_EQUAL = 274,
     T_AND_EQUAL = 275,
     T_MOD_EQUAL = 276,
     T_CONCAT_EQUAL = 277,
     T_DIV_EQUAL = 278,
     T_MUL_EQUAL = 279,
     T_MINUS_EQUAL = 280,
     T_PLUS_EQUAL = 281,
     T_COALESCE = 282,
     T_BOOLEAN_OR = 283,
     T_BOOLEAN_AND = 284,
     T_SPACESHIP = 285,
     T_IS_NOT_IDENTICAL = 286,
     T_IS_IDENTICAL = 287,
     T_IS_NOT_EQUAL = 288,
     T_IS_EQUAL = 289,
     T_IS_GREATER_OR_EQUAL = 290,
     T_IS_SMALLER_OR_EQUAL = 291,
     T_SR = 292,
     T_SL = 293,
     T_INSTANCEOF = 294,
     T_UNSET_CAST = 295,
     T_BOOL_CAST = 296,
     T_OBJECT_CAST = 297,
     T_ARRAY_CAST = 298,
     T_STRING_CAST = 299,
     T_DOUBLE_CAST = 300,
     T_INT_CAST = 301,
     T_DEC = 302,
     T_INC = 303,
     T_POW = 304,
     T_CLONE = 305,
     T_NEW = 306,
     T_NOELSE = 307,
     T_ELSEIF = 308,
     T_ELSE = 309,
     T_ENDIF = 310,
     T_PUBLIC = 311,
     T_PROTECTED = 312,
     T_PRIVATE = 313,
     T_FINAL = 314,
     T_ABSTRACT = 315,
     T_STATIC = 316,
     T_LNUMBER = 317,
     T_DNUMBER = 318,
     T_STRING = 319,
     T_VARIABLE = 320,
     T_INLINE_HTML = 321,
     T_ENCAPSED_AND_WHITESPACE = 322,
     T_CONSTANT_ENCAPSED_STRING = 323,
     T_STRING_VARNAME = 324,
     T_NUM_STRING = 325,
     T_EXIT = 326,
     T_IF = 327,
     T_ECHO = 328,
     T_DO = 329,
     T_WHILE = 330,
     T_ENDWHILE = 331,
     T_FOR = 332,
     T_ENDFOR = 333,
     T_FOREACH = 334,
     T_ENDFOREACH = 335,
     T_DECLARE = 336,
     T_ENDDECLARE = 337,
     T_AS = 338,
     T_SWITCH = 339,
     T_ENDSWITCH = 340,
     T_CASE = 341,
     T_DEFAULT = 342,
     T_BREAK = 343,
     T_CONTINUE = 344,
     T_GOTO = 345,
     T_FUNCTION = 346,
     T_CONST = 347,
     T_RETURN = 348,
     T_TRY = 349,
     T_CATCH = 350,
     T_FINALLY = 351,
     T_THROW = 352,
     T_USE = 353,
     T_INSTEADOF = 354,
     T_GLOBAL = 355,
     T_VAR = 356,
     T_UNSET = 357,
     T_ISSET = 358,
     T_EMPTY = 359,
     T_HALT_COMPILER = 360,
     T_CLASS = 361,
     T_TRAIT = 362,
     T_INTERFACE = 363,
     T_EXTENDS = 364,
     T_IMPLEMENTS = 365,
     T_OBJECT_OPERATOR = 366,
     T_LIST = 367,
     T_ARRAY = 368,
     T_CALLABLE = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_DIR = 372,
     T_CLASS_C = 373,
     T_TRAIT_C = 374,
     T_METHOD_C = 375,
     T_FUNC_C = 376,
     T_COMMENT = 377,
     T_DOC_COMMENT = 378,
     T_OPEN_TAG = 379,
     T_OPEN_TAG_WITH_ECHO = 380,
     T_CLOSE_TAG = 381,
     T_WHITESPACE = 382,
     T_START_HEREDOC = 383,
     T_END_HEREDOC = 384,
     T_DOLLAR_OPEN_CURLY_BRACES = 385,
     T_CURLY_OPEN = 386,
     T_PAAMAYIM_NEKUDOTAYIM = 387,
     T_NAMESPACE = 388,
     T_NS_C = 389,
     T_NS_SEPARATOR = 390,
     T_ELLIPSIS = 391,
     T_ERROR = 392
   };
# 350 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_parser.h"
int zendparse (void);
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 1
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2474 "Zend/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
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
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
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
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
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
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





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




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 2475 "Zend/../main/php_config.h" 2
# 2490 "Zend/../main/php_config.h"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 110 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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

# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 604 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 644 "/usr/include/string.h" 3 4

# 2491 "Zend/../main/php_config.h" 2
# 2501 "Zend/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                           ;





extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double pow10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow10 (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));








extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));




extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern void sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                           ;





extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float pow10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __pow10f (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));








extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));




extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__))
                                                           ;





extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double pow10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __pow10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));








extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));




extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 488 "/usr/include/math.h" 3 4

# 2502 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 49 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 21 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 1
# 62 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/main/php_config.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 2






# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
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
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 70 "/home/ct584/git/bughunter/repositories/php-src/main/php_stdint.h" 2
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/../TSRM/TSRM.h"
typedef intptr_t tsrm_intptr_t;
typedef uintptr_t tsrm_uintptr_t;
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 55 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ , __leaf__));


# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ , __leaf__));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 67 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 81 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h" 1
# 34 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h"
typedef int64_t zend_long;
typedef uint64_t zend_ulong;
typedef int64_t zend_off_t;
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_long.h"
static const char long_min_digits[] = "9223372036854775808";
# 23 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_range_check.h" 2
# 82 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_portability.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h" 2
# 46 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;

typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;
# 68 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef intptr_t zend_intptr_t;
typedef uintptr_t zend_uintptr_t;
# 79 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef struct _zend_object_handlers zend_object_handlers;
typedef struct _zend_class_entry zend_class_entry;
typedef union _zend_function zend_function;
typedef struct _zend_execute_data zend_execute_data;

typedef struct _zval_struct zval;

typedef struct _zend_refcounted zend_refcounted;
typedef struct _zend_string zend_string;
typedef struct _zend_array zend_array;
typedef struct _zend_object zend_object;
typedef struct _zend_resource zend_resource;
typedef struct _zend_reference zend_reference;
typedef struct _zend_ast_ref zend_ast_ref;
typedef struct _zend_ast zend_ast;

typedef int (*compare_func_t)(const void *, const void *);
typedef void (*swap_func_t)(void *, void *);
typedef void (*sort_func_t)(void *, size_t, size_t, compare_func_t, swap_func_t);
typedef void (*dtor_func_t)(zval *pDest);
typedef void (*copy_ctor_func_t)(zval *pElement);

typedef union _zend_value {
 zend_long lval;
 double dval;
 zend_refcounted *counted;
 zend_string *str;
 zend_array *arr;
 zend_object *obj;
 zend_resource *res;
 zend_reference *ref;
 zend_ast_ref *ast;
 zval *zv;
 void *ptr;
 zend_class_entry *ce;
 zend_function *func;
 struct {
  uint32_t w1;
  uint32_t w2;
 } ww;
} zend_value;

struct _zval_struct {
 zend_value value;
 union {
  struct {
   zend_uchar type; zend_uchar type_flags; zend_uchar const_flags; zend_uchar reserved;




  } v;
  uint32_t type_info;
 } u1;
 union {
  uint32_t next;
  uint32_t cache_slot;
  uint32_t lineno;
  uint32_t num_args;
  uint32_t fe_pos;
  uint32_t fe_iter_idx;
  uint32_t access_flags;
  uint32_t property_guard;
 } u2;
};

typedef struct _zend_refcounted_h {
 uint32_t refcount;
 union {
  struct {
   zend_uchar type; zend_uchar flags; uint16_t gc_info;



  } v;
  uint32_t type_info;
 } u;
} zend_refcounted_h;

struct _zend_refcounted {
 zend_refcounted_h gc;
};

struct _zend_string {
 zend_refcounted_h gc;
 zend_ulong h;
 size_t len;
 char val[1];
};

typedef struct _Bucket {
 zval val;
 zend_ulong h;
 zend_string *key;
} Bucket;

typedef struct _zend_array HashTable;

struct _zend_array {
 zend_refcounted_h gc;
 union {
  struct {
   zend_uchar flags; zend_uchar nApplyCount; zend_uchar nIteratorsCount; zend_uchar reserve;




  } v;
  uint32_t flags;
 } u;
 uint32_t nTableMask;
 Bucket *arData;
 uint32_t nNumUsed;
 uint32_t nNumOfElements;
 uint32_t nTableSize;
 uint32_t nInternalPointer;
 zend_long nNextFreeElement;
 dtor_func_t pDestructor;
};
# 269 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
typedef uint32_t HashPosition;

typedef struct _HashTableIterator {
 HashTable *ht;
 HashPosition pos;
} HashTableIterator;

struct _zend_object {
 zend_refcounted_h gc;
 uint32_t handle;
 zend_class_entry *ce;
 const zend_object_handlers *handlers;
 HashTable *properties;
 zval properties_table[1];
};

struct _zend_resource {
 zend_refcounted_h gc;
 int handle;
 int type;
 void *ptr;
};

struct _zend_reference {
 zend_refcounted_h gc;
 zval val;
};

struct _zend_ast_ref {
 zend_refcounted_h gc;
 zend_ast *ast;
};
# 329 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 816 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_types.h"
static inline __attribute__((always_inline)) uint32_t zval_refcount_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0) || (((*(pz)).u1.v.type_flags & (1<<1)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ((*(pz)).value.counted)->gc.refcount;
}

static inline __attribute__((always_inline)) uint32_t zval_set_refcount_p(zval* pz, uint32_t rc) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ((*(pz)).value.counted)->gc.refcount = rc;
}

static inline __attribute__((always_inline)) uint32_t zval_addref_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return ++((*(pz)).value.counted)->gc.refcount;
}

static inline __attribute__((always_inline)) uint32_t zval_delref_p(zval* pz) {
 do { if (__builtin_expect(!((((*(pz)).u1.v.type_flags & (1<<2)) != 0)), 0)) __builtin_unreachable(); } while (0);
 return --((*(pz)).value.counted)->gc.refcount;
}
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_errors.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 1
# 30 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2
# 48 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 const char *orig_filename;
 uint lineno;
 uint orig_lineno;
} zend_leak_info;
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"


__attribute__ ((visibility("default"))) char* zend_strndup(const char *s, size_t length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void* _emalloc(size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void* _safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void* _safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void* _ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1,2)));
__attribute__ ((visibility("default"))) void* _erealloc(void *ptr, size_t size ) __attribute__ ((alloc_size(2)));
__attribute__ ((visibility("default"))) void* _erealloc2(void *ptr, size_t size, size_t copy_size ) __attribute__ ((alloc_size(2)));
__attribute__ ((visibility("default"))) void* _safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void* _safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char* _estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char* _estrndup(const char *s, size_t length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc_sizes.h" 1
# 89 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h" 2







__attribute__ ((visibility("default"))) void* _emalloc_8(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_16(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_24(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_32(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_40(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_48(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_56(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_64(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_80(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_96(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_112(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_128(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_160(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_192(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_224(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_256(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_320(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_384(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_448(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_512(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_640(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_768(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_896(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1024(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1280(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1536(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_1792(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_2048(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_2560(void) __attribute__ ((__malloc__)); __attribute__ ((visibility("default"))) void* _emalloc_3072(void) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void* _emalloc_large(size_t size) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void* _emalloc_huge(size_t size) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
# 121 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) void _efree_8(void *); __attribute__ ((visibility("default"))) void _efree_16(void *); __attribute__ ((visibility("default"))) void _efree_24(void *); __attribute__ ((visibility("default"))) void _efree_32(void *); __attribute__ ((visibility("default"))) void _efree_40(void *); __attribute__ ((visibility("default"))) void _efree_48(void *); __attribute__ ((visibility("default"))) void _efree_56(void *); __attribute__ ((visibility("default"))) void _efree_64(void *); __attribute__ ((visibility("default"))) void _efree_80(void *); __attribute__ ((visibility("default"))) void _efree_96(void *); __attribute__ ((visibility("default"))) void _efree_112(void *); __attribute__ ((visibility("default"))) void _efree_128(void *); __attribute__ ((visibility("default"))) void _efree_160(void *); __attribute__ ((visibility("default"))) void _efree_192(void *); __attribute__ ((visibility("default"))) void _efree_224(void *); __attribute__ ((visibility("default"))) void _efree_256(void *); __attribute__ ((visibility("default"))) void _efree_320(void *); __attribute__ ((visibility("default"))) void _efree_384(void *); __attribute__ ((visibility("default"))) void _efree_448(void *); __attribute__ ((visibility("default"))) void _efree_512(void *); __attribute__ ((visibility("default"))) void _efree_640(void *); __attribute__ ((visibility("default"))) void _efree_768(void *); __attribute__ ((visibility("default"))) void _efree_896(void *); __attribute__ ((visibility("default"))) void _efree_1024(void *); __attribute__ ((visibility("default"))) void _efree_1280(void *); __attribute__ ((visibility("default"))) void _efree_1536(void *); __attribute__ ((visibility("default"))) void _efree_1792(void *); __attribute__ ((visibility("default"))) void _efree_2048(void *); __attribute__ ((visibility("default"))) void _efree_2560(void *); __attribute__ ((visibility("default"))) void _efree_3072(void *);

__attribute__ ((visibility("default"))) void _efree_large(void *, size_t size);
__attribute__ ((visibility("default"))) void _efree_huge(void *, size_t size);
# 190 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) void * __zend_malloc(size_t len) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1)));
__attribute__ ((visibility("default"))) void * __zend_calloc(size_t nmemb, size_t len) __attribute__ ((__malloc__)) __attribute__ ((alloc_size(1,2)));
__attribute__ ((visibility("default"))) void * __zend_realloc(void *p, size_t len) __attribute__ ((alloc_size(2)));
# 217 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown);
__attribute__ ((visibility("default"))) int is_zend_mm(void);

__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage);
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage);
# 240 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent);
__attribute__ ((visibility("default"))) void* _zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void* _zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) void* _zend_mm_realloc2(zend_mm_heap *heap, void *p, size_t size, size_t copy_size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 262 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_get_heap(void);

__attribute__ ((visibility("default"))) size_t zend_mm_gc(zend_mm_heap *heap);





__attribute__ ((visibility("default"))) int zend_mm_is_custom_heap(zend_mm_heap *new_heap);
__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
__attribute__ ((visibility("default"))) void zend_mm_get_custom_handlers(zend_mm_heap *heap,
                                          void* (**_malloc)(size_t),
                                          void (**_free)(void*),
                                          void* (**_realloc)(void*, size_t));
# 288 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef void* (*zend_mm_chunk_alloc_t)(zend_mm_storage *storage, size_t size, size_t alignment);
typedef void (*zend_mm_chunk_free_t)(zend_mm_storage *storage, void *chunk, size_t size);
typedef int (*zend_mm_chunk_truncate_t)(zend_mm_storage *storage, void *chunk, size_t old_size, size_t new_size);
typedef int (*zend_mm_chunk_extend_t)(zend_mm_storage *storage, void *chunk, size_t old_size, size_t new_size);

typedef struct _zend_mm_handlers {
 zend_mm_chunk_alloc_t chunk_alloc;
 zend_mm_chunk_free_t chunk_free;
 zend_mm_chunk_truncate_t chunk_truncate;
 zend_mm_chunk_extend_t chunk_extend;
} zend_mm_handlers;

struct _zend_mm_storage {
 const zend_mm_handlers handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_handlers *handlers, void *data, size_t data_size);
# 395 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_alloc.h"

# 34 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element **);
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args);
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg);
typedef void (*llist_apply_func_t)(void *);

typedef struct _zend_llist {
 zend_llist_element *head;
 zend_llist_element *tail;
 size_t count;
 size_t size;
 llist_dtor_func_t dtor;
 unsigned char persistent;
 zend_llist_element *traverse_ptr;
} zend_llist;

typedef zend_llist_element* zend_llist_position;


__attribute__ ((visibility("default"))) void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
__attribute__ ((visibility("default"))) void zend_llist_add_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_prepend_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
__attribute__ ((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func);
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg);
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func, int num_args, ...);
__attribute__ ((visibility("default"))) size_t zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func);


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"


__attribute__ ((visibility("default"))) extern zend_string *(*zend_new_interned_string)(zend_string *str);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

__attribute__ ((visibility("default"))) zend_ulong zend_hash_func(const char *str, size_t len);
void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
void zend_known_interned_strings_init(zend_string ***, uint32_t *);


# 83 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_string_hash_val(zend_string *s)
{
 if (!(s)->h) {
  (s)->h = zend_hash_func((s)->val, (s)->len);
 }
 return (s)->h;
}

static inline __attribute__((always_inline)) void zend_string_forget_hash_val(zend_string *s)
{
 (s)->h = 0;
}

static inline __attribute__((always_inline)) uint32_t zend_string_refcount(const zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return (s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) uint32_t zend_string_addref(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return ++(s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) uint32_t zend_string_delref(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  return --(s)->gc.refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) zend_string *zend_string_alloc(size_t len, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?__zend_malloc(((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))):(__builtin_constant_p((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) ) ? (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 8) ? _emalloc_8() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 16) ? _emalloc_16() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 24) ? _emalloc_24() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 32) ? _emalloc_32() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 40) ? _emalloc_40() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 48) ? _emalloc_48() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 56) ? _emalloc_56() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 64) ? _emalloc_64() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 80) ? _emalloc_80() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 96) ? _emalloc_96() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 112) ? _emalloc_112() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 128) ? _emalloc_128() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 160) ? _emalloc_160() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 192) ? _emalloc_192() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 224) ? _emalloc_224() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 256) ? _emalloc_256() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 320) ? _emalloc_320() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 384) ? _emalloc_384() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 448) ? _emalloc_448() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 512) ? _emalloc_512() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 640) ? _emalloc_640() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 768) ? _emalloc_768() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 896) ? _emalloc_896() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1024) ? _emalloc_1024() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1280) ? _emalloc_1280() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1536) ? _emalloc_1536() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 1792) ? _emalloc_1792() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 2048) ? _emalloc_2048() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 2560) ? _emalloc_2560() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= 3072) ? _emalloc_3072() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) : _emalloc_huge((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L))) ) ));

 (ret)->gc.refcount = 1;


 (ret)->gc.u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 zend_string_forget_hash_val(ret);
 (ret)->len = len;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_safe_alloc(size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?_safe_malloc(n, m, ((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L))):_safe_emalloc((n), (m), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L))) ));

 (ret)->gc.refcount = 1;


 (ret)->gc.u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 zend_string_forget_hash_val(ret);
 (ret)->len = (n * m) + l;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_init(const char *str, size_t len, int persistent)
{
 zend_string *ret = zend_string_alloc(len, persistent);

 memcpy((ret)->val, str, len);
 (ret)->val[len] = '\0';
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_copy(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  (s)->gc.refcount++;
 }
 return s;
}

static inline __attribute__((always_inline)) zend_string *zend_string_dup(zend_string *s, int persistent)
{
 if (((s)->gc.u.v.flags & (1<<1))) {
  return s;
 } else {
  return zend_string_init((s)->val, (s)->len, persistent);
 }
}

static inline __attribute__((always_inline)) zend_string *zend_string_realloc(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, (((len)<((s)->len))?(len):((s)->len)) + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_extend(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 do { if (__builtin_expect(!(len >= (s)->len), 0)) __builtin_unreachable(); } while (0);
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, (s)->len + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_truncate(zend_string *s, size_t len, int persistent)
{
 zend_string *ret;

 do { if (__builtin_expect(!(len <= (s)->len), 0)) __builtin_unreachable(); } while (0);
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (__builtin_expect(!!((s)->gc.refcount == 1), 1)) {
   ret = (zend_string *)((persistent)?__zend_realloc((s), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))):_erealloc(((s)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = len;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_alloc(len, persistent);
 memcpy((ret)->val, (s)->val, len + 1);
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_string_safe_realloc(zend_string *s, size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret;

 if (!((s)->gc.u.v.flags & (1<<1))) {
  if ((s)->gc.refcount == 1) {
   ret = (zend_string *)((persistent)?_safe_realloc((s), (n), (m), (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L)))):_safe_erealloc(((s)), ((n)), ((m)), ((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + l + 1)) + 8 - 1L) & ~(8 - 1L)))) ));
   (ret)->len = (n * m) + l;
   zend_string_forget_hash_val(ret);
   return ret;
  } else {
   (s)->gc.refcount--;
  }
 }
 ret = zend_string_safe_alloc(n, m, l, persistent);
 memcpy((ret)->val, (s)->val, ((((n * m) + l)<((s)->len))?((n * m) + l):((s)->len)) + 1);
 return ret;
}

static inline __attribute__((always_inline)) void zend_string_free(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  do { if (__builtin_expect(!((s)->gc.refcount <= 1), 0)) __builtin_unreachable(); } while (0);
  (((s)->gc.u.v.flags & (1<<0))?free(s):_efree((s) ));
 }
}

static inline __attribute__((always_inline)) void zend_string_release(zend_string *s)
{
 if (!((s)->gc.u.v.flags & (1<<1))) {
  if (--(s)->gc.refcount == 0) {
   (((s)->gc.u.v.flags & (1<<0))?free(s):_efree((s) ));
  }
 }
}


static inline __attribute__((always_inline)) zend_bool zend_string_equals(zend_string *s1, zend_string *s2)
{
 return s1 == s2 || ((s1)->len == (s2)->len && !memcmp((s1)->val, (s2)->val, (s1)->len));
}
# 325 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_inline_hash_func(const char *str, size_t len)
{
 zend_ulong hash = 5381UL;


 for (; len >= 8; len -= 8) {
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
 }
 switch (len) {
  case 7: hash = ((hash << 5) + hash) + *str++;
  case 6: hash = ((hash << 5) + hash) + *str++;
  case 5: hash = ((hash << 5) + hash) + *str++;
  case 4: hash = ((hash << 5) + hash) + *str++;
  case 3: hash = ((hash << 5) + hash) + *str++;
  case 2: hash = ((hash << 5) + hash) + *str++;
  case 1: hash = ((hash << 5) + hash) + *str++; break;
  case 0: break;
default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }



 return hash | 0x8000000000000000UL;





}
# 415 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_string.h"
typedef enum _zend_known_string_id {

ZEND_STR_FILE, ZEND_STR_LINE, ZEND_STR_FUNCTION, ZEND_STR_CLASS, ZEND_STR_OBJECT, ZEND_STR_TYPE, ZEND_STR_OBJECT_OPERATOR, ZEND_STR_PAAMAYIM_NEKUDOTAYIM, ZEND_STR_ARGS, ZEND_STR_UNKNOWN, ZEND_STR_EVAL, ZEND_STR_INCLUDE, ZEND_STR_REQUIRE, ZEND_STR_INCLUDE_ONCE, ZEND_STR_REQUIRE_ONCE, ZEND_STR_SCALAR, ZEND_STR_ERROR_REPORTING, ZEND_STR_STATIC, ZEND_STR_THIS, ZEND_STR_VALUE, ZEND_STR_KEY, ZEND_STR_MAGIC_AUTOLOAD, ZEND_STR_MAGIC_INVOKE, ZEND_STR_PREVIOUS, ZEND_STR_CODE, ZEND_STR_MESSAGE, ZEND_STR_SEVERITY, ZEND_STR_STRING, ZEND_STR_TRACE,

 ZEND_STR_LAST_KNOWN
} zend_known_string_id;

__attribute__ ((visibility("default"))) uint32_t zend_intern_known_strings(const char **strings, uint32_t count);
# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h" 1
# 47 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
typedef struct _zend_hash_key {
 zend_ulong h;
 zend_string *key;
} zend_hash_key;

typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, zval *source_data, zend_hash_key *hash_key, void *pParam);




__attribute__ ((visibility("default"))) void _zend_hash_init(HashTable *ht, uint32_t nSize, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) void _zend_hash_init_ex(HashTable *ht, uint32_t nSize, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);



__attribute__ ((visibility("default"))) void zend_hash_real_init(HashTable *ht, zend_bool packed);
__attribute__ ((visibility("default"))) void zend_hash_packed_to_hash(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_to_packed(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_extend(HashTable *ht, uint32_t nSize, zend_bool packed);


__attribute__ ((visibility("default"))) zval* _zend_hash_add_or_update(HashTable *ht, zend_string *key, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_update(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_update_ind(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_add(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_add_new(HashTable *ht, zend_string *key,zval *pData );
# 85 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add_or_update(HashTable *ht, const char *key, size_t len, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_update(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_update_ind(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add(HashTable *ht, const char *key, size_t len, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_str_add_new(HashTable *ht, const char *key, size_t len, zval *pData );
# 100 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add_or_update(HashTable *ht, zend_ulong h, zval *pData, uint32_t flag );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_add_new(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_index_update(HashTable *ht, zend_ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_next_index_insert(HashTable *ht, zval *pData );
__attribute__ ((visibility("default"))) zval* _zend_hash_next_index_insert_new(HashTable *ht, zval *pData );
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval* zend_hash_index_add_empty_element(HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) zval* zend_hash_add_empty_element(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval* zend_hash_str_add_empty_element(HashTable *ht, const char *key, size_t len);





typedef int (*apply_func_t)(zval *pDest);
typedef int (*apply_func_arg_t)(zval *pDest, void *argument);
typedef int (*apply_func_args_t)(zval *pDest, int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func);
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void *);
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht, apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func);



__attribute__ ((visibility("default"))) int zend_hash_del(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_del_ind(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_del(HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) int zend_hash_str_del_ind(HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) int zend_hash_index_del(HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) void zend_hash_del_bucket(HashTable *ht, Bucket *p);


__attribute__ ((visibility("default"))) zval* zend_hash_find(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval* zend_hash_str_find(const HashTable *ht, const char *key, size_t len);
__attribute__ ((visibility("default"))) zval* zend_hash_index_find(const HashTable *ht, zend_ulong h);
__attribute__ ((visibility("default"))) zval* _zend_hash_index_find(const HashTable *ht, zend_ulong h);
# 179 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zend_bool zend_hash_exists(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zend_bool zend_hash_str_exists(const HashTable *ht, const char *str, size_t len);
__attribute__ ((visibility("default"))) zend_bool zend_hash_index_exists(const HashTable *ht, zend_ulong h);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index, zend_ulong *num_index, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) zval* zend_hash_get_current_data_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
# 215 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, zend_bool overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) void zend_hash_bucket_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_renum_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) void zend_hash_bucket_packed_swap(Bucket *p, Bucket *q);
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered);
__attribute__ ((visibility("default"))) int zend_hash_sort_ex(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, zend_bool renumber);
__attribute__ ((visibility("default"))) zval* zend_hash_minmax(const HashTable *ht, compare_func_t compar, uint32_t flag);
# 237 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);

__attribute__ ((visibility("default"))) uint32_t zend_array_count(HashTable *ht);
__attribute__ ((visibility("default"))) HashTable* zend_array_dup(HashTable *source);
__attribute__ ((visibility("default"))) void zend_array_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_symtable_clean(HashTable *ht);

__attribute__ ((visibility("default"))) int _zend_handle_numeric_str_ex(const char *key, size_t length, zend_ulong *idx);

__attribute__ ((visibility("default"))) uint32_t zend_hash_iterator_add(HashTable *ht, HashPosition pos);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterator_pos(uint32_t idx, HashTable *ht);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterator_pos_ex(uint32_t idx, zval *array);
__attribute__ ((visibility("default"))) void zend_hash_iterator_del(uint32_t idx);
__attribute__ ((visibility("default"))) HashPosition zend_hash_iterators_lower_pos(HashTable *ht, HashPosition start);
__attribute__ ((visibility("default"))) void _zend_hash_iterators_update(HashTable *ht, HashPosition from, HashPosition to);

static inline __attribute__((always_inline)) void zend_hash_iterators_update(HashTable *ht, HashPosition from, HashPosition to)
{
 if (__builtin_expect(!!(ht->u.v.nIteratorsCount), 0)) {
  _zend_hash_iterators_update(ht, from, to);
 }
}










static inline __attribute__((always_inline)) int _zend_handle_numeric_str(const char *key, size_t length, zend_ulong *idx)
{
 const char *tmp = key;

 if (*tmp > '9') {
  return 0;
 } else if (*tmp < '0') {
  if (*tmp != '-') {
   return 0;
  }
  tmp++;
  if (*tmp > '9' || *tmp < '0') {
   return 0;
  }
 }
 return _zend_handle_numeric_str_ex(key, length, idx);
}
# 294 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline __attribute__((always_inline)) zval *zend_hash_find_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return (zv && zval_get_type(&(*(zv))) == 15) ?
  ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv : ((void *)0)) : zv;
}


static inline __attribute__((always_inline)) int zend_hash_exists_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return zv && (zval_get_type(&(*(zv))) != 15 ||
   zval_get_type(&(*((*(zv)).value.zv))) != 0);
}


static inline __attribute__((always_inline)) zval *zend_hash_str_find_ind(const HashTable *ht, const char *str, size_t len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 return (zv && zval_get_type(&(*(zv))) == 15) ?
  ((zval_get_type(&(*((*(zv)).value.zv))) != 0) ? (*(zv)).value.zv : ((void *)0)) : zv;
}


static inline __attribute__((always_inline)) zval *zend_symtable_update(HashTable *ht, zend_string *key, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update(ht, key, pData );
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_update_ind(HashTable *ht, zend_string *key, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update_ind(ht, key, pData );
 }
}


static inline __attribute__((always_inline)) int zend_symtable_del(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_del_ind(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_find(const HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_find_ind(const HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_exists(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists(ht, key);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_exists_ind(HashTable *ht, zend_string *key)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists_ind(ht, key);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_update(HashTable *ht, const char *str, size_t len, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update(ht, str, len, pData );
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_update_ind(HashTable *ht, const char *str, size_t len, zval *pData)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update_ind(ht, str, len, pData );
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_del(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del(ht, str, len);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_del_ind(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del_ind(ht, str, len);
 }
}


static inline __attribute__((always_inline)) zval *zend_symtable_str_find(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_str_find(ht, str, len);
 }
}


static inline __attribute__((always_inline)) int zend_symtable_str_exists(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_str_exists(ht, str, len);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_new_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add_new(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_add(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_new_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_add_new(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_update_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_update(ht, key, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_update_ptr(HashTable *ht, const char *str, size_t len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_update(ht, str, len, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_add_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_add(ht, key, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_str_add_mem(HashTable *ht, const char *str, size_t len, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_str_add(ht, str, len, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_update_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_update_ptr(ht, key, p);
}

static inline __attribute__((always_inline)) void *zend_hash_str_update_mem(HashTable *ht, const char *str, size_t len, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_str_update_ptr(ht, str, len, p);
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_add(ht, h, &tmp );
 return zv ? (*(zv)).value.ptr : ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_new_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_add_new(ht, h, &tmp );
 return zv ? (*(zv)).value.ptr : ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_index_update_ptr(HashTable *ht, zend_ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_update(ht, h, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_add_mem(HashTable *ht, zend_ulong h, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_index_add(ht, h, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_next_index_insert_ptr(HashTable *ht, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_next_index_insert(ht, &tmp );
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_update_mem(HashTable *ht, zend_ulong h, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
 memcpy(p, pData, size);
 return zend_hash_index_update_ptr(ht, h, p);
}

static inline __attribute__((always_inline)) void *zend_hash_next_index_insert_mem(HashTable *ht, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void *)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_next_index_insert(ht, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) void *zend_hash_find_ptr(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_str_find_ptr(const HashTable *ht, const char *str, size_t len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_index_find_ptr(const HashTable *ht, zend_ulong h)
{
 zval *zv;

 zv = zend_hash_index_find(ht, h);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}

static inline __attribute__((always_inline)) void *zend_symtable_str_find_ptr(HashTable *ht, const char *str, size_t len)
{
 zend_ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find_ptr(ht, idx);
 } else {
  return zend_hash_str_find_ptr(ht, str, len);
 }
}

static inline __attribute__((always_inline)) void *zend_hash_get_current_data_ptr_ex(HashTable *ht, HashPosition *pos)
{
 zval *zv;

 zv = zend_hash_get_current_data_ex(ht, pos);
 if (zv) {
  do { if (__builtin_expect(!((*(zv)).value.ptr), 0)) __builtin_unreachable(); } while (0);
  return (*(zv)).value.ptr;
 } else {
  return ((void *)0);
 }
}
# 926 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_hash.h"
static inline __attribute__((always_inline)) zval *_zend_hash_append(HashTable *ht, zend_string *key, zval *zv)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { zval *_z1 = (&p->val); const zval *_z2 = (zv); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
 return &p->val;
}

static inline __attribute__((always_inline)) zval *_zend_hash_append_ptr(HashTable *ht, zend_string *key, void *ptr)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { (*(&p->val)).value.ptr = (ptr); (*(&p->val)).u1.type_info = 17; } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
 return &p->val;
}

static inline __attribute__((always_inline)) void _zend_hash_append_ind(HashTable *ht, zend_string *key, zval *ptr)
{
 uint32_t idx = ht->nNumUsed++;
 uint32_t nIndex;
 Bucket *p = ht->arData + idx;

 do { (*(&p->val)).value.zv = (ptr); (*(&p->val)).u1.type_info = 15; } while (0);
 if (!((key)->gc.u.v.flags & (1<<1))) {
  ht->u.flags &= ~(1<<4);
  zend_string_addref(key);
  zend_string_hash_val(key);
 }
 p->key = key;
 p->h = (key)->h;
 nIndex = (uint32_t)p->h | ht->nTableMask;
 (p->val).u2.next = ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)];
 ((uint32_t*)((ht)->arData))[(int32_t)(nIndex)] = (idx);
 ht->nNumUsed = idx + 1;
 ht->nNumOfElements++;
}
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ast.h" 1
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ast.h"
enum _zend_ast_kind {

 ZEND_AST_ZVAL = 1 << 6,
 ZEND_AST_ZNODE,


 ZEND_AST_FUNC_DECL,
 ZEND_AST_CLOSURE,
 ZEND_AST_METHOD,
 ZEND_AST_CLASS,


 ZEND_AST_ARG_LIST = 1 << 7,
 ZEND_AST_ARRAY,
 ZEND_AST_ENCAPS_LIST,
 ZEND_AST_EXPR_LIST,
 ZEND_AST_STMT_LIST,
 ZEND_AST_IF,
 ZEND_AST_SWITCH_LIST,
 ZEND_AST_CATCH_LIST,
 ZEND_AST_PARAM_LIST,
 ZEND_AST_CLOSURE_USES,
 ZEND_AST_PROP_DECL,
 ZEND_AST_CONST_DECL,
 ZEND_AST_CLASS_CONST_DECL,
 ZEND_AST_NAME_LIST,
 ZEND_AST_TRAIT_ADAPTATIONS,
 ZEND_AST_USE,


 ZEND_AST_MAGIC_CONST = 0 << 8,
 ZEND_AST_TYPE,


 ZEND_AST_VAR = 1 << 8,
 ZEND_AST_CONST,
 ZEND_AST_UNPACK,
 ZEND_AST_UNARY_PLUS,
 ZEND_AST_UNARY_MINUS,
 ZEND_AST_CAST,
 ZEND_AST_EMPTY,
 ZEND_AST_ISSET,
 ZEND_AST_SILENCE,
 ZEND_AST_SHELL_EXEC,
 ZEND_AST_CLONE,
 ZEND_AST_EXIT,
 ZEND_AST_PRINT,
 ZEND_AST_INCLUDE_OR_EVAL,
 ZEND_AST_UNARY_OP,
 ZEND_AST_PRE_INC,
 ZEND_AST_PRE_DEC,
 ZEND_AST_POST_INC,
 ZEND_AST_POST_DEC,
 ZEND_AST_YIELD_FROM,

 ZEND_AST_GLOBAL,
 ZEND_AST_UNSET,
 ZEND_AST_RETURN,
 ZEND_AST_LABEL,
 ZEND_AST_REF,
 ZEND_AST_HALT_COMPILER,
 ZEND_AST_ECHO,
 ZEND_AST_THROW,
 ZEND_AST_GOTO,
 ZEND_AST_BREAK,
 ZEND_AST_CONTINUE,


 ZEND_AST_DIM = 2 << 8,
 ZEND_AST_PROP,
 ZEND_AST_STATIC_PROP,
 ZEND_AST_CALL,
 ZEND_AST_CLASS_CONST,
 ZEND_AST_ASSIGN,
 ZEND_AST_ASSIGN_REF,
 ZEND_AST_ASSIGN_OP,
 ZEND_AST_BINARY_OP,
 ZEND_AST_GREATER,
 ZEND_AST_GREATER_EQUAL,
 ZEND_AST_AND,
 ZEND_AST_OR,
 ZEND_AST_ARRAY_ELEM,
 ZEND_AST_NEW,
 ZEND_AST_INSTANCEOF,
 ZEND_AST_YIELD,
 ZEND_AST_COALESCE,

 ZEND_AST_STATIC,
 ZEND_AST_WHILE,
 ZEND_AST_DO_WHILE,
 ZEND_AST_IF_ELEM,
 ZEND_AST_SWITCH,
 ZEND_AST_SWITCH_CASE,
 ZEND_AST_DECLARE,
 ZEND_AST_USE_TRAIT,
 ZEND_AST_TRAIT_PRECEDENCE,
 ZEND_AST_METHOD_REFERENCE,
 ZEND_AST_NAMESPACE,
 ZEND_AST_USE_ELEM,
 ZEND_AST_TRAIT_ALIAS,
 ZEND_AST_GROUP_USE,


 ZEND_AST_METHOD_CALL = 3 << 8,
 ZEND_AST_STATIC_CALL,
 ZEND_AST_CONDITIONAL,

 ZEND_AST_TRY,
 ZEND_AST_CATCH,
 ZEND_AST_PARAM,
 ZEND_AST_PROP_ELEM,
 ZEND_AST_CONST_ELEM,


 ZEND_AST_FOR = 4 << 8,
 ZEND_AST_FOREACH,
};

typedef uint16_t zend_ast_kind;
typedef uint16_t zend_ast_attr;

struct _zend_ast {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 zend_ast *child[1];
};


typedef struct _zend_ast_list {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 uint32_t children;
 zend_ast *child[1];
} zend_ast_list;


typedef struct _zend_ast_zval {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zval val;
} zend_ast_zval;


typedef struct _zend_ast_decl {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t start_lineno;
 uint32_t end_lineno;
 uint32_t flags;
 unsigned char *lex_pos;
 zend_string *doc_comment;
 zend_string *name;
 zend_ast *child[4];
} zend_ast_decl;

typedef void (*zend_ast_process_t)(zend_ast *ast);
extern __attribute__ ((visibility("default"))) zend_ast_process_t zend_ast_process;

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_zval_ex(zval *zv, zend_ast_attr attr);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_ex(zend_ast_kind kind, zend_ast_attr attr, ...);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create(zend_ast_kind kind, ...);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_decl(
 zend_ast_kind kind, uint32_t flags, uint32_t start_lineno, zend_string *doc_comment,
 zend_string *name, zend_ast *child0, zend_ast *child1, zend_ast *child2, zend_ast *child3
);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_list(uint32_t init_children, zend_ast_kind kind, ...);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_list_add(zend_ast *list, zend_ast *op);

__attribute__ ((visibility("default"))) int zend_ast_evaluate(zval *result, zend_ast *ast, zend_class_entry *scope);
__attribute__ ((visibility("default"))) zend_string *zend_ast_export(const char *prefix, zend_ast *ast, const char *suffix);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_copy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy_and_free(zend_ast *ast);

typedef void (*zend_ast_apply_func)(zend_ast **ast_ptr);
__attribute__ ((visibility("default"))) void zend_ast_apply(zend_ast *ast, zend_ast_apply_func fn);

static inline __attribute__((always_inline)) zend_bool zend_ast_is_list(zend_ast *ast) {
 return (ast->kind >> 7) & 1;
}
static inline __attribute__((always_inline)) zend_ast_list *zend_ast_get_list(zend_ast *ast) {
 do { if (__builtin_expect(!(zend_ast_is_list(ast)), 0)) __builtin_unreachable(); } while (0);
 return (zend_ast_list *) ast;
}

static inline __attribute__((always_inline)) zval *zend_ast_get_zval(zend_ast *ast) {
 do { if (__builtin_expect(!(ast->kind == ZEND_AST_ZVAL), 0)) __builtin_unreachable(); } while (0);
 return &((zend_ast_zval *) ast)->val;
}
static inline __attribute__((always_inline)) zend_string *zend_ast_get_str(zend_ast *ast) {
 zval *zv = zend_ast_get_zval(ast);
 do { if (__builtin_expect(!(zval_get_type(&(*(zv))) == 6), 0)) __builtin_unreachable(); } while (0);
 return (*(zv)).value.str;
}

static inline __attribute__((always_inline)) uint32_t zend_ast_get_num_children(zend_ast *ast) {
 do { if (__builtin_expect(!(!zend_ast_is_list(ast)), 0)) __builtin_unreachable(); } while (0);
 return ast->kind >> 8;
}
static inline __attribute__((always_inline)) uint32_t zend_ast_get_lineno(zend_ast *ast) {
 if (ast->kind == ZEND_AST_ZVAL) {
  zval *zv = zend_ast_get_zval(ast);
  return zv->u2.lineno;
 } else {
  return ast->lineno;
 }
}

static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval(zval *zv) {
 return zend_ast_create_zval_ex(zv, 0);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval_from_str(zend_string *str) {
 zval zv;
 do { zval *__z = (&zv); zend_string *__s = (str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 return zend_ast_create_zval(&zv);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_zval_from_long(zend_long lval) {
 zval zv;
 { zval *__z = (&zv); (*(__z)).value.lval = lval; (*(__z)).u1.type_info = 4; };
 return zend_ast_create_zval(&zv);
}

static inline __attribute__((always_inline)) zend_ast *zend_ast_create_binary_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_BINARY_OP, opcode, op0, op1);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_assign_op(uint32_t opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_ASSIGN_OP, opcode, op0, op1);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_create_cast(uint32_t type, zend_ast *op0) {
 return zend_ast_create_ex(ZEND_AST_CAST, type, op0);
}
static inline __attribute__((always_inline)) zend_ast *zend_ast_list_rtrim(zend_ast *ast) {
 zend_ast_list *list = zend_ast_get_list(ast);
 if (list->children && list->child[list->children - 1] == ((void *)0)) {
  list->children--;
 }
 return ast;
}
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 zend_refcounted *ref;
 struct _gc_root_buffer *next;
 struct _gc_root_buffer *prev;
 uint32_t refcount;
} gc_root_buffer;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;
 zend_bool gc_full;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 gc_root_buffer to_free;
 gc_root_buffer *next_to_free;

 uint32_t gc_runs;
 uint32_t collected;
# 96 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
} zend_gc_globals;
# 105 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) extern int (*gc_collect_cycles)(void);

__attribute__ ((visibility("default"))) void gc_possible_root(zend_refcounted *ref);
__attribute__ ((visibility("default"))) void gc_remove_from_buffer(zend_refcounted *ref);
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);


__attribute__ ((visibility("default"))) int zend_gc_collect_cycles(void);

# 132 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_check_possible_root(zval *z)
{
 do { if (__builtin_expect(!!((zval_get_type(&(*(z))) == 10)), 0)) { (z) = &(*(z)).value.ref->val; } } while (0);
 if ((((*(z)).u1.v.type_flags & (1<<3)) != 0) && __builtin_expect(!!(!((*(z)).value.counted)->gc.u.v.gc_info), 0)) {
  gc_possible_root((*(z)).value.counted);
 }
}
# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"


__attribute__ ((visibility("default"))) void _zval_dtor_func(zend_refcounted *p );
__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );




static inline __attribute__((always_inline)) void _zval_ptr_dtor_nogc(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<2)) != 0) && !zval_delref_p(zval_ptr)) {
  _zval_dtor_func((*(zval_ptr)).value.counted );
 }
}

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<2)) != 0)) {
  if (!zval_delref_p(zval_ptr)) {
   _zval_dtor_func((*(zval_ptr)).value.counted );
  } else {
   gc_check_possible_root((zval_ptr));
  }
 }
}

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<2)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<4)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<2) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<2)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<4)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<2) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

__attribute__ ((visibility("default"))) size_t zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval *zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor_for_ptr(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 129 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval *p);
__attribute__ ((visibility("default"))) void zval_add_ref_unref(zval *p);


# 40 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h" 1
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter);


 int (*valid)(zend_object_iterator *iter);


 zval *(*get_current_data)(zend_object_iterator *iter);





 void (*get_current_key)(zend_object_iterator *iter, zval *key);


 void (*move_forward)(zend_object_iterator *iter);


 void (*rewind)(zend_object_iterator *iter);


 void (*invalidate_current)(zend_object_iterator *iter);
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 zend_object std;
 zval data;
 zend_object_iterator_funcs *funcs;
 zend_ulong index;
};

typedef struct _zend_class_iterator_funcs {
 zend_object_iterator_funcs *funcs;
 union _zend_function *zf_new_iterator;
 union _zend_function *zf_valid;
 union _zend_function *zf_current;
 union _zend_function *zf_key;
 union _zend_function *zf_next;
 union _zend_function *zf_rewind;
} zend_class_iterator_funcs;



__attribute__ ((visibility("default"))) zend_object_iterator* zend_iterator_unwrap(zval *array_ptr);


__attribute__ ((visibility("default"))) void zend_iterator_init(zend_object_iterator *iter);
__attribute__ ((visibility("default"))) void zend_iterator_dtor(zend_object_iterator *iter);

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);

# 41 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 228 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 253 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 276 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 432 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h" 2




typedef size_t (*zend_stream_fsizer_t)(void* handle);
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len);
typedef void (*zend_stream_closer_t)(void* handle);



typedef enum {
 ZEND_HANDLE_FILENAME,
 ZEND_HANDLE_FD,
 ZEND_HANDLE_FP,
 ZEND_HANDLE_STREAM,
 ZEND_HANDLE_MAPPED
} zend_stream_type;

typedef struct _zend_mmap {
 size_t len;
 size_t pos;
 void *map;
 char *buf;
 void *old_handle;
 zend_stream_closer_t old_closer;
} zend_mmap;

typedef struct _zend_stream {
 void *handle;
 int isatty;
 zend_mmap mmap;
 zend_stream_reader_t reader;
 zend_stream_fsizer_t fsizer;
 zend_stream_closer_t closer;
} zend_stream;

typedef struct _zend_file_handle {
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 const char *filename;
 zend_string *opened_path;
 zend_stream_type type;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle);
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len);
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh);
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);

# 97 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stream.h"
typedef struct stat zend_stat_t;
# 42 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h" 1
# 22 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_smart_str_public.h"
typedef struct {
 zend_string *s;
 size_t a;
} smart_str;
# 43 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 81 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"






__attribute__ ((visibility("default"))) __attribute__((cold)) __attribute__((noreturn)) void zend_error_noreturn(int type, const char *format, ...);





struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

typedef struct _zend_trait_method_reference {
 zend_string *method_name;
 zend_class_entry *ce;
 zend_string *class_name;
} zend_trait_method_reference;

typedef struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;
 union {
  zend_class_entry *ce;
  zend_string *class_name;
 } *exclude_from_classes;
} zend_trait_precedence;

typedef struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 zend_string *alias;




 uint32_t modifiers;
} zend_trait_alias;

struct _zend_class_entry {
 char type;
 zend_string *name;
 struct _zend_class_entry *parent;
 int refcount;
 uint32_t ce_flags;

 int default_properties_count;
 int default_static_members_count;
 zval *default_properties_table;
 zval *default_static_members_table;
 zval *static_members_table;
 HashTable function_table;
 HashTable properties_info;
 HashTable constants_table;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__callstatic;
 union _zend_function *__tostring;
 union _zend_function *__debugInfo;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object* (*create_object)(zend_class_entry *class_type);
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref);
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type);
 union _zend_function *(*get_static_method)(zend_class_entry *ce, zend_string* method);


 int (*serialize)(zval *object, unsigned char **buffer, size_t *buf_len, zend_serialize_data *data);
 int (*unserialize)(zval *object, zend_class_entry *ce, const unsigned char *buf, size_t buf_len, zend_unserialize_data *data);

 uint32_t num_interfaces;
 uint32_t num_traits;
 zend_class_entry **interfaces;

 zend_class_entry **traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   zend_string *filename;
   uint32_t line_start;
   uint32_t line_end;
   zend_string *doc_comment;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) ;
 size_t (*printf_function)(const char *format, ...) ;
 size_t (*write_function)(const char *str, size_t str_length);
 FILE *(*fopen_function)(const char *filename, zend_string **opened_path);
 void (*message_handler)(zend_long message, const void *data);
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 zval *(*get_configuration_directive)(zend_string *name);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds);
 int (*stream_open_function)(const char *filename, zend_file_handle *handle);
 size_t (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 zend_string *(*vstrpprintf_function)(size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len);
 zend_string *(*resolve_path_function)(const char *filename, int filename_len);
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, size_t str_length);
# 235 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

int zend_startup(zend_utility_functions *utility_functions, char **extensions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);

__attribute__ ((visibility("default"))) __attribute__((cold)) void _zend_bailout(char *filename, uint lineno);

__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) int zend_make_printable_zval(zval *expr, zval *expr_copy);
__attribute__ ((visibility("default"))) size_t zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent);
__attribute__ ((visibility("default"))) zend_string *zend_print_zval_r_to_str(zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) ;

__attribute__ ((visibility("default"))) void zend_activate(void);
__attribute__ ((visibility("default"))) void zend_deactivate(void);
__attribute__ ((visibility("default"))) void zend_call_destructors(void);
__attribute__ ((visibility("default"))) void zend_activate_modules(void);
__attribute__ ((visibility("default"))) void zend_deactivate_modules(void);
__attribute__ ((visibility("default"))) void zend_post_deactivate_modules(void);

__attribute__ ((visibility("default"))) void free_estring(char **str_p);

# 269 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"

extern __attribute__ ((visibility("default"))) size_t (*zend_printf)(const char *format, ...) ;
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, zend_string **opened_path);
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) ;
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds);
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle);
extern size_t (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern zend_string *(*zend_vstrpprintf)(size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len);
extern __attribute__ ((visibility("default"))) zend_string *(*zend_resolve_path)(const char *filename, int filename_len);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_error(int type, const char *format, ...) ;
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_error(zend_class_entry *exception_ce, const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_type_error(const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_internal_type_error(zend_bool throw_exception, const char *format, ...);

__attribute__((cold)) void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;






__attribute__ ((visibility("default"))) void zend_message_dispatcher(zend_long message, const void *data);

__attribute__ ((visibility("default"))) zval *zend_get_configuration_directive(zend_string *name);

# 316 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h"
typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current);
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current);
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved);




# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
struct _zend_property_info;
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, void **cache_slot, zval *rv);


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type, zval *rv);
# 50 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, void **cache_slot);


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value);



typedef zval *(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, int type, void **cache_slot);



typedef void (*zend_object_set_t)(zval *object, zval *value);




typedef zval* (*zend_object_get_t)(zval *object, zval *rv);







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, void **cache_slot);


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty);


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, void **cache_slot);


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset);


typedef HashTable *(*zend_object_get_properties_t)(zval *object);

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp);





typedef int (*zend_object_call_method_t)(zend_string *method, zend_object *object, zend_execute_data *execute_data, zval *return_value);
typedef union _zend_function *(*zend_object_get_method_t)(zend_object **object, zend_string *method, const zval *key);
typedef union _zend_function *(*zend_object_get_constructor_t)(zend_object *object);


typedef void (*zend_object_dtor_obj_t)(zend_object *object);
typedef void (*zend_object_free_obj_t)(zend_object *object);
typedef zend_object* (*zend_object_clone_obj_t)(zval *object);



typedef zend_string *(*zend_object_get_class_name_t)(const zend_object *object);

typedef int (*zend_object_compare_t)(zval *object1, zval *object2);
typedef int (*zend_object_compare_zvals_t)(zval *resul, zval *op1, zval *op2);



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type);



typedef int (*zend_object_count_elements_t)(zval *object, zend_long *count);

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zend_object **obj_ptr);

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval **table, int *n);

typedef int (*zend_object_do_operation_t)(zend_uchar opcode, zval *result, zval *op1, zval *op2);

struct _zend_object_handlers {

 int offset;

 zend_object_free_obj_t free_obj;
 zend_object_dtor_obj_t dtor_obj;
 zend_object_clone_obj_t clone_obj;

 zend_object_read_property_t read_property;
 zend_object_write_property_t write_property;
 zend_object_read_dimension_t read_dimension;
 zend_object_write_dimension_t write_dimension;
 zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
 zend_object_get_t get;
 zend_object_set_t set;
 zend_object_has_property_t has_property;
 zend_object_unset_property_t unset_property;
 zend_object_has_dimension_t has_dimension;
 zend_object_unset_dimension_t unset_dimension;
 zend_object_get_properties_t get_properties;
 zend_object_get_method_t get_method;
 zend_object_call_method_t call_method;
 zend_object_get_constructor_t get_constructor;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
 zend_object_do_operation_t do_operation;
 zend_object_compare_zvals_t compare;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;





__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, zend_string *function_name_strval, const zval *key);
__attribute__ ((visibility("default"))) zval *zend_std_get_static_property(zend_class_entry *ce, zend_string *property_name, zend_bool silent);
__attribute__ ((visibility("default"))) __attribute__((cold)) zend_bool zend_std_unset_static_property(zend_class_entry *ce, zend_string *property_name);
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zend_object *object);
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zend_string *member, int silent);
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object);
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp);
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type);
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, void **cache_slot);
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);

__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, zend_string *function_name);

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, zend_string *prop_info_name);

__attribute__ ((visibility("default"))) zend_function *zend_get_call_trampoline_func(zend_class_entry *ce, zend_string *method_name, int is_static);

__attribute__ ((visibility("default"))) uint32_t *zend_get_property_guard(zend_object *zobj, zend_string *member);
# 193 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_object_handlers.h"

# 336 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2






# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multiply.h" 1
# 143 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multiply.h"
static inline __attribute__((always_inline)) size_t zend_safe_address(size_t nmemb, size_t size, size_t offset, int *overflow)
{
 size_t res = nmemb;
 zend_ulong m_overflow = 0;







 __asm__ ("mul" "q" " %3\n\t"
  "add %4,%0\n\t"
  "adc $0,%1"
  : "=&a"(res), "=&d" (m_overflow)
  : "%0"(res),
    "rm"(size),
    "rm"(offset));


 if (__builtin_expect(!!(m_overflow), 0)) {
  *overflow = 1;
  return 0;
 }
 *overflow = 0;
 return res;
}
# 40 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int pow_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1);
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1);
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int zend_is_identical(zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only);
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce);
# 91 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_uchar _is_numeric_string_ex(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors, int *oflow_info);

__attribute__ ((visibility("default"))) const char* zend_memnstr_ex(const char *haystack, const char *needle, size_t needle_len, const char *end);
__attribute__ ((visibility("default"))) const char* zend_memnrstr_ex(const char *haystack, const char *needle, size_t needle_len, const char *end);
# 113 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_long zend_dval_to_lval_slow(double d);

static inline __attribute__((always_inline)) zend_long zend_dval_to_lval(double d)
{
 if (__builtin_expect(!!(!(sizeof (d) == sizeof (float) ? __finitef (d) : sizeof (d) == sizeof (double) ? __finite (d) : __finitel (d))), 0) || __builtin_expect(!!((sizeof (d) == sizeof (float) ? __isnanf (d) : sizeof (d) == sizeof (double) ? __isnan (d) : __isnanl (d))), 0)) {
  return 0;
 } else if (!(!((d) >= (9223372036854775807L) || (d) < (-9223372036854775807L -1)))) {
  return zend_dval_to_lval_slow(d);
 }
 return (zend_long)d;
}


static inline __attribute__((always_inline)) zend_long zend_dval_to_lval_cap(double d)
{
 if (__builtin_expect(!!(!(sizeof (d) == sizeof (float) ? __finitef (d) : sizeof (d) == sizeof (double) ? __finite (d) : __finitel (d))), 0) || __builtin_expect(!!((sizeof (d) == sizeof (float) ? __isnanf (d) : sizeof (d) == sizeof (double) ? __isnan (d) : __isnanl (d))), 0)) {
  return 0;
 } else if (!(!((d) >= (9223372036854775807L) || (d) < (-9223372036854775807L -1)))) {
  return (d > 0 ? (9223372036854775807L) : (-9223372036854775807L -1));
 }
 return (zend_long)d;
}





static inline __attribute__((always_inline)) zend_uchar is_numeric_string_ex(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors, int *oflow_info)
{
 if (*str > '9') {
  return 0;
 }
 return _is_numeric_string_ex(str, length, lval, dval, allow_errors, oflow_info);
}

static inline __attribute__((always_inline)) zend_uchar is_numeric_string(const char *str, size_t length, zend_long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void *)0));
}

__attribute__ ((visibility("default"))) zend_uchar is_numeric_str_function(const zend_string *str, zend_long *lval, double *dval);

static inline __attribute__((always_inline)) const char *
zend_memnstr(const char *haystack, const char *needle, size_t needle_len, const char *end)
{
 const char *p = haystack;
 const char ne = needle[needle_len-1];
 ptrdiff_t off_p;
 size_t off_s;

 if (needle_len == 1) {
  return (const char *)memchr(p, *needle, (end-p));
 }

 off_p = end - haystack;
 off_s = (off_p > 0) ? (size_t)off_p : 0;

 if (needle_len > off_s) {
  return ((void *)0);
 }

 if (__builtin_expect(!!(off_s < 1024 || needle_len < 3), 1)) {
  end -= needle_len;

  while (p <= end) {
   if ((p = (const char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
    if (!memcmp(needle, p, needle_len-1)) {
     return p;
    }
   }

   if (p == ((void *)0)) {
    return ((void *)0);
   }

   p++;
  }

  return ((void *)0);
 } else {
  return zend_memnstr_ex(haystack, needle, needle_len, end);
 }
}

static inline __attribute__((always_inline)) const void *zend_memrchr(const void *s, int c, size_t n)
{
 const unsigned char *e;
 if (n <= 0) {
  return ((void *)0);
 }

 for (e = (const unsigned char *)s + n - 1; e >= (const unsigned char *)s; e--) {
  if (*e == (const unsigned char)c) {
   return (const void *)e;
  }
 }
 return ((void *)0);
}


static inline __attribute__((always_inline)) const char *
zend_memnrstr(const char *haystack, const char *needle, size_t needle_len, char *end)
{
    const char *p = end;
    const char ne = needle[needle_len-1];
    ptrdiff_t off_p;
    size_t off_s;

    if (needle_len == 1) {
        return (const char *)zend_memrchr(haystack, *needle, (p - haystack));
    }

    off_p = end - haystack;
    off_s = (off_p > 0) ? (size_t)off_p : 0;

    if (needle_len > off_s) {
        return ((void *)0);
    }

 if (__builtin_expect(!!(off_s < 1024 || needle_len < 3), 1)) {
  p -= needle_len;

  do {
   if ((p = (const char *)zend_memrchr(haystack, *needle, (p - haystack) + 1)) && ne == p[needle_len-1]) {
    if (!memcmp(needle, p, needle_len - 1)) {
     return p;
    }
   }
  } while (p-- >= haystack);

  return ((void *)0);
 } else {
  return zend_memnrstr_ex(haystack, needle, needle_len, end);
 }
}

__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op);
__attribute__ ((visibility("default"))) void _convert_to_cstring(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_string(zval *op );
__attribute__ ((visibility("default"))) void convert_to_long(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_long_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_long_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);

__attribute__ ((visibility("default"))) zend_long _zval_get_long_func(zval *op);
__attribute__ ((visibility("default"))) double _zval_get_double_func(zval *op);
__attribute__ ((visibility("default"))) zend_string* _zval_get_string_func(zval *op);

static inline __attribute__((always_inline)) zend_long _zval_get_long(zval *op) {
 return zval_get_type(&(*(op))) == 4 ? (*(op)).value.lval : _zval_get_long_func(op);
}
static inline __attribute__((always_inline)) double _zval_get_double(zval *op) {
 return zval_get_type(&(*(op))) == 5 ? (*(op)).value.dval : _zval_get_double_func(op);
}
static inline __attribute__((always_inline)) zend_string *_zval_get_string(zval *op) {
 return zval_get_type(&(*(op))) == 6 ? zend_string_copy((*(op)).value.str) : _zval_get_string_func(op);
}
# 287 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);
__attribute__ ((visibility("default"))) int zend_object_is_true(zval *op);




static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
{
 int result = 0;

again:
 switch (zval_get_type(&(*(op)))) {
  case 3:
   result = 1;
   break;
  case 4:
   if ((*(op)).value.lval) {
    result = 1;
   }
   break;
  case 5:
   if ((*(op)).value.dval) {
    result = 1;
   }
   break;
  case 6:
   if (((*(op)).value.str)->len > 1 || (((*(op)).value.str)->len && ((*(op)).value.str)->val[0] != '0')) {
    result = 1;
   }
   break;
  case 7:
   if (((*(op)).value.arr)->nNumOfElements) {
    result = 1;
   }
   break;
  case 8:
   result = zend_object_is_true(op);
   break;
  case 9:
   if (__builtin_expect(!!((*op).value.res->handle), 1)) {
    result = 1;
   }
   break;
  case 10:
   op = &(*(op)).value.ref->val;
   goto again;
   break;
  default:
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int numeric_compare_function(zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *op1, zval *op2, zend_bool case_insensitive);
__attribute__ ((visibility("default"))) int string_compare_function(zval *op1, zval *op2);
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *op1, zval *op2);

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *op1, zval *op2);


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_copy(char *dest, const char *source, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_dup(const char *source, size_t length);
__attribute__ ((visibility("default"))) char* zend_str_tolower_dup_ex(const char *source, size_t length);
__attribute__ ((visibility("default"))) zend_string* zend_string_tolower(zend_string *str);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp_l(const char *s1, size_t len1, const char *s2, size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, size_t len1, const char *s2, size_t len2, size_t length);

__attribute__ ((visibility("default"))) zend_long zendi_smart_strcmp(zend_string *s1, zend_string *s2);
__attribute__ ((visibility("default"))) int zend_compare_symbol_tables(HashTable *ht1, HashTable *ht2);
__attribute__ ((visibility("default"))) int zend_compare_arrays(zval *a1, zval *a2);
__attribute__ ((visibility("default"))) int zend_compare_objects(zval *o1, zval *o2);

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) zend_long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 445 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) void fast_long_increment_function(zval *op1)
{
# 461 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "incq (%0)\n\t"
  "jno  0f\n\t"
  "movl $0x0, (%0)\n\t"
  "movl $0x43e00000, 0x4(%0)\n\t"
  "movl %1, %c2(%0)\n"
  "0:"
  :
  : "r"(&op1->value),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "cc", "memory");
# 481 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_decrement_function(zval *op1)
{
# 499 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "decq (%0)\n\t"
  "jno  0f\n\t"
  "movl $0x00000000, (%0)\n\t"
  "movl $0xc3e00000, 0x4(%0)\n\t"
  "movl %1,%c2(%0)\n"
  "0:"
  :
  : "r"(&op1->value),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "cc", "memory");
# 519 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) void fast_long_add_function(zval *result, zval *op1, zval *op2)
{
# 547 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "movq	(%1), %%rax\n\t"
  "addq   (%2), %%rax\n\t"
  "jo     0f\n\t"
  "movq   %%rax, (%0)\n\t"
  "movl   %3, %c5(%0)\n\t"
  "jmp    1f\n"
  "0:\n\t"
  "fildq	(%1)\n\t"
  "fildq	(%2)\n\t"
  "faddp	%%st, %%st(1)\n\t"
  "movl   %4, %c5(%0)\n\t"
  "fstpl	(%0)\n"
  "1:"
  :
  : "r"(&result->value),
    "r"(&op1->value),
    "r"(&op2->value),
    "n"(4),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "rax","cc", "memory");
# 583 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2)
{
 if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 4), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   fast_long_add_function(result, op1, op2);
   return SUCCESS;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = ((double)(*(op1)).value.lval) + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 5), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + ((double)(*(op2)).value.lval); (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 }
 return add_function(result, op1, op2);
}

static inline __attribute__((always_inline)) void fast_long_sub_function(zval *result, zval *op1, zval *op2)
{
# 637 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
 __asm__(
  "movq	(%1), %%rax\n\t"
  "subq   (%2), %%rax\n\t"
  "jo     0f\n\t"
  "movq   %%rax, (%0)\n\t"
  "movl   %3, %c5(%0)\n\t"
  "jmp    1f\n"
  "0:\n\t"
  "fildq	(%2)\n\t"
  "fildq	(%1)\n\t"



  "fsubp	%%st, %%st(1)\n\t"

  "movl   %4, %c5(%0)\n\t"
  "fstpl	(%0)\n"
  "1:"
  :
  : "r"(&result->value),
    "r"(&op1->value),
    "r"(&op2->value),
    "n"(4),
    "n"(5),
    "n"((__builtin_offsetof (zval, u1.type_info) - __builtin_offsetof (zval, value)))
  : "rax","cc", "memory");
# 671 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2)
{
 return div_function(result, op1, op2);
}

static inline __attribute__((always_inline)) int fast_equal_check_function(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 4), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   return (*(op1)).value.lval == (*(op2)).value.lval;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   return ((double)(*(op1)).value.lval) == (*(op2)).value.dval;
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 5), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 5), 1)) {
   return (*(op1)).value.dval == (*(op2)).value.dval;
  } else if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
   return (*(op1)).value.dval == ((double)(*(op2)).value.lval);
  }
 } else if (__builtin_expect(!!(zval_get_type(&(*(op1))) == 6), 1)) {
  if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
   if ((*(op1)).value.str == (*(op2)).value.str) {
    return 1;
   } else if (((*(op1)).value.str)->val[0] > '9' || ((*(op2)).value.str)->val[0] > '9') {
    if (((*(op1)).value.str)->len != ((*(op2)).value.str)->len) {
     return 0;
    } else {
     return memcmp(((*(op1)).value.str)->val, ((*(op2)).value.str)->val, ((*(op1)).value.str)->len) == 0;
    }
   } else {
    return zendi_smart_strcmp((*(op1)).value.str, (*(op2)).value.str) == 0;
   }
  }
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_equal_check_long(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 4), 1)) {
  return (*(op1)).value.lval == (*(op2)).value.lval;
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_equal_check_string(zval *op1, zval *op2)
{
 zval result;
 if (__builtin_expect(!!(zval_get_type(&(*(op2))) == 6), 1)) {
  if ((*(op1)).value.str == (*(op2)).value.str) {
   return 1;
  } else if (((*(op1)).value.str)->val[0] > '9' || ((*(op2)).value.str)->val[0] > '9') {
   if (((*(op1)).value.str)->len != ((*(op2)).value.str)->len) {
    return 0;
   } else {
    return memcmp(((*(op1)).value.str)->val, ((*(op2)).value.str)->val, ((*(op1)).value.str)->len) == 0;
   }
  } else {
   return zendi_smart_strcmp((*(op1)).value.str, (*(op2)).value.str) == 0;
  }
 }
 compare_function(&result, op1, op2);
 return (result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_is_identical_function(zval *op1, zval *op2)
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  return 0;
 } else if (zval_get_type(&(*(op1))) <= 3) {
  return 1;
 }
 return zend_is_identical(op1, op2);
}

static inline __attribute__((always_inline)) int fast_is_not_identical_function(zval *op1, zval *op2)
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  return 1;
 } else if (zval_get_type(&(*(op1))) <= 3) {
  return 0;
 }
 return !zend_is_identical(op1, op2);
}
# 802 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_operators.h"
static inline __attribute__((always_inline)) char *zend_print_ulong_to_buf(char *buf, zend_ulong num) {
 *buf = '\0';
 do {
  *--buf = (char) (num % 10) + '0';
  num /= 10;
 } while (num > 0);
 return buf;
}


static inline __attribute__((always_inline)) char *zend_print_long_to_buf(char *buf, zend_long num) {
 if (num < 0) {
     char *result = zend_print_ulong_to_buf(buf, ~((zend_ulong) num) + 1);
     *--result = '-';
  return result;
 } else {
     return zend_print_ulong_to_buf(buf, num);
 }
}

__attribute__ ((visibility("default"))) zend_string* zend_long_to_str(zend_long num);

static inline __attribute__((always_inline)) void zend_unwrap_reference(zval *op)
{
 if (zval_refcount_p(op) == 1) {
  do { zval *_z = (op); zend_reference *ref; do { if (__builtin_expect(!((zval_get_type(&(*(_z))) == 10)), 0)) __builtin_unreachable(); } while (0); ref = (*(_z)).value.ref; do { zval *_z1 = (_z); const zval *_z2 = (&ref->val); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0); } while (0);
 } else {
  zval_delref_p(op);
  do { zval *_z1 = (op); const zval *_z2 = (&(*(op)).value.ref->val); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
 }
}




# 337 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend.h" 2
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 53 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;
# 71 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef union _znode_op {
 uint32_t constant;
 uint32_t var;
 uint32_t num;
 uint32_t opline_num;



 uint32_t jmp_offset;




} znode_op;

typedef struct _znode {
 zend_uchar op_type;
 zend_uchar flag;
 union {
  znode_op op;
  zval constant;
 } u;
} znode;


typedef struct _zend_ast_znode {
 zend_ast_kind kind;
 zend_ast_attr attr;
 uint32_t lineno;
 znode node;
} zend_ast_znode;
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_znode(znode *node);

static inline __attribute__((always_inline)) znode *zend_ast_get_znode(zend_ast *ast) {
 return &((zend_ast_znode *) ast)->node;
}

typedef struct _zend_declarables {
 zend_long ticks;
} zend_declarables;


typedef struct _zend_file_context {
 zend_declarables declarables;
 znode implementing_class;

 zend_string *current_namespace;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 HashTable *imports;
 HashTable *imports_function;
 HashTable *imports_const;
} zend_file_context;

typedef union _zend_parser_stack_elem {
 zend_ast *ast;
 zend_string *str;
 zend_ulong num;
} zend_parser_stack_elem;

void zend_compile_top_stmt(zend_ast *ast);
void zend_compile_stmt(zend_ast *ast);
void zend_compile_expr(znode *node, zend_ast *ast);
void zend_compile_var(znode *node, zend_ast *ast, uint32_t type);
void zend_eval_const_expr(zend_ast **ast_ptr);
void zend_const_expr_to_zval(zval *result, zend_ast *ast);

typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data);

struct _zend_op {
 const void *handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 uint32_t extended_value;
 uint32_t lineno;
 zend_uchar opcode;
 zend_uchar op1_type;
 zend_uchar op2_type;
 zend_uchar result_type;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;

typedef struct _zend_label {
 int brk_cont;
 uint32_t opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 uint32_t try_op;
 uint32_t catch_op;
 uint32_t finally_op;
 uint32_t finally_end;
} zend_try_catch_element;







typedef struct _zend_live_range {
 uint32_t var;
 uint32_t start;
 uint32_t end;
} zend_live_range;


typedef struct _zend_oparray_context {
 uint32_t opcodes_size;
 int vars_size;
 int literals_size;
 int backpatch_count;
 int in_finally;
 uint32_t fast_call_var;
 uint32_t try_catch_offset;
 int current_brk_cont;
 int last_brk_cont;
 zend_brk_cont_element *brk_cont_array;
 HashTable *labels;
} zend_oparray_context;
# 292 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
char *zend_visibility_string(uint32_t fn_flags);

typedef struct _zend_property_info {
 uint32_t offset;

 uint32_t flags;
 zend_string *name;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_property_info;
# 312 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
typedef struct _zend_class_constant {
 zval value;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_class_constant;


typedef struct _zend_internal_arg_info {
 const char *name;
 const char *class_name;
 zend_uchar type_hint;
 zend_uchar pass_by_reference;
 zend_bool allow_null;
 zend_bool is_variadic;
} zend_internal_arg_info;


typedef struct _zend_arg_info {
 zend_string *name;
 zend_string *class_name;
 zend_uchar type_hint;
 zend_uchar pass_by_reference;
 zend_bool allow_null;
 zend_bool is_variadic;
} zend_arg_info;






typedef struct _zend_internal_function_info {
 zend_uintptr_t required_num_args;
 const char *class_name;
 zend_uchar type_hint;
 zend_bool return_reference;
 zend_bool allow_null;
 zend_bool _is_variadic;
} zend_internal_function_info;

struct _zend_op_array {

 zend_uchar type;
 zend_uchar arg_flags[3];
 uint32_t fn_flags;
 zend_string *function_name;
 zend_class_entry *scope;
 zend_function *prototype;
 uint32_t num_args;
 uint32_t required_num_args;
 zend_arg_info *arg_info;


 uint32_t *refcount;

 uint32_t this_var;

 uint32_t last;
 zend_op *opcodes;

 int last_var;
 uint32_t T;
 zend_string **vars;

 int last_live_range;
 int last_try_catch;
 zend_live_range *live_range;
 zend_try_catch_element *try_catch_array;


 HashTable *static_variables;

 zend_string *filename;
 uint32_t line_start;
 uint32_t line_end;
 zend_string *doc_comment;
 uint32_t early_binding;

 int last_literal;
 zval *literals;

 int cache_size;
 void **run_time_cache;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 zend_uchar arg_flags[3];
 uint32_t fn_flags;
 zend_string* function_name;
 zend_class_entry *scope;
 zend_function *prototype;
 uint32_t num_args;
 uint32_t required_num_args;
 zend_internal_arg_info *arg_info;


 void (*handler)(zend_execute_data *execute_data, zval *return_value);
 struct _zend_module_entry *module;
 void *reserved[4];
} zend_internal_function;



union _zend_function {
 zend_uchar type;
 uint32_t quick_arg_flags;

 struct {
  zend_uchar type;
  zend_uchar arg_flags[3];
  uint32_t fn_flags;
  zend_string *function_name;
  zend_class_entry *scope;
  union _zend_function *prototype;
  uint32_t num_args;
  uint32_t required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
};

typedef enum _zend_call_kind {
 ZEND_CALL_NESTED_FUNCTION,
 ZEND_CALL_NESTED_CODE,
 ZEND_CALL_TOP_FUNCTION,
 ZEND_CALL_TOP_CODE
} zend_call_kind;

struct _zend_execute_data {
 const zend_op *opline;
 zend_execute_data *call;
 zval *return_value;
 zend_function *func;
 zval This;
 zend_execute_data *prev_execute_data;
 zend_array *symbol_table;

 void **run_time_cache;


 zval *literals;

};
# 689 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));










extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 102 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 112 "/usr/include/setjmp.h" 3 4

# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;








extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;

__attribute__ ((visibility("default"))) int zendparse(void);







extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 56 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 66 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_stack.h"
typedef struct _zend_stack {
 int size, top, max;
 void *elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack, int size);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element);
__attribute__ ((visibility("default"))) void *zend_stack_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void *zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);
__attribute__ ((visibility("default"))) void zend_stack_clean(zend_stack *stack, void (*func)(void *), zend_bool free_elements);

# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
 zend_bool persistent;
} zend_ptr_stack;





__attribute__ ((visibility("default"))) void zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_init_ex(zend_ptr_stack *stack, zend_bool persistent);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__ ((visibility("default"))) void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
__attribute__ ((visibility("default"))) int zend_ptr_stack_num_elements(zend_ptr_stack *stack);

# 58 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_ptr_stack.h"
static inline __attribute__((always_inline)) void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))) )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_top(zend_ptr_stack *stack)
{
    return stack->elements[stack->top - 1];
}
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object);
__attribute__ ((visibility("default"))) zend_object *zend_objects_new(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object *old_object);
__attribute__ ((visibility("default"))) zend_object *zend_objects_clone_obj(zval *object);

# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h" 2
# 43 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_objects_API.h"
typedef struct _zend_objects_store {
 zend_object **object_buckets;
 uint32_t top;
 uint32_t size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, uint32_t init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects);
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects);
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) void zend_objects_store_put(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_store_del(zend_object *object);
__attribute__ ((visibility("default"))) void zend_objects_store_free(zend_object *object);


__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, zend_object *object);
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zend_object *object);

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects);



__attribute__ ((visibility("default"))) zend_object *zend_object_create_proxy(zval *object, zval *member);

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);


static inline __attribute__((always_inline)) void zend_object_release(zend_object *obj)
{
 if (--(obj)->gc.refcount == 0) {
  zend_objects_store_del(obj);
 } else if (__builtin_expect(!!(!(obj)->gc.u.v.gc_info), 0)) {
  gc_possible_root((zend_refcounted*)obj);
 }
}

static inline __attribute__((always_inline)) size_t zend_object_properties_size(zend_class_entry *ce)
{
 return sizeof(zval) *
  (ce->default_properties_count -
   ((ce->ce_flags & 0x1000000) ? 0 : 1));
}
# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_build.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h" 2
# 69 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 const struct _zend_ini_entry *ini_entry;
 const struct _zend_module_dep *deps;
 const char *name;
 const struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number);
 int (*module_shutdown_func)(int type, int module_number);
 int (*request_startup_func)(int type, int module_number);
 int (*request_shutdown_func)(int type, int module_number);
 void (*info_func)(zend_module_entry *zend_module);
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global);
 void (*globals_dtor)(void *global);
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
 const char *build_id;
};
# 118 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_request_startup(zend_module_entry *module);
int module_registry_unload_temp(const zend_module_entry *module);
# 37 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"





extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);


# 208 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 209 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_float.h" 2
# 38 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length);

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name);
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size);
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from);
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent);
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding);

typedef struct _zend_multibyte_functions {
    const char *provider_name;
    zend_encoding_fetcher encoding_fetcher;
    zend_encoding_name_getter encoding_name_getter;
    zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
    zend_encoding_detector encoding_detector;
    zend_encoding_converter encoding_converter;
    zend_encoding_list_parser encoding_list_parser;
    zend_encoding_internal_encoding_getter internal_encoding_getter;
    zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;






__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions);
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name);
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size);
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from);
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size);
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length);


# 39 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_arena.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_arena.h"
typedef struct _zend_arena zend_arena;

struct _zend_arena {
 char *ptr;
 char *end;
 zend_arena *prev;
};

static inline __attribute__((always_inline)) zend_arena* zend_arena_create(size_t size)
{
 zend_arena *arena = (zend_arena*)(__builtin_constant_p((size) ) ? (((size) <= 8) ? _emalloc_8() : (((size) <= 16) ? _emalloc_16() : (((size) <= 24) ? _emalloc_24() : (((size) <= 32) ? _emalloc_32() : (((size) <= 40) ? _emalloc_40() : (((size) <= 48) ? _emalloc_48() : (((size) <= 56) ? _emalloc_56() : (((size) <= 64) ? _emalloc_64() : (((size) <= 80) ? _emalloc_80() : (((size) <= 96) ? _emalloc_96() : (((size) <= 112) ? _emalloc_112() : (((size) <= 128) ? _emalloc_128() : (((size) <= 160) ? _emalloc_160() : (((size) <= 192) ? _emalloc_192() : (((size) <= 224) ? _emalloc_224() : (((size) <= 256) ? _emalloc_256() : (((size) <= 320) ? _emalloc_320() : (((size) <= 384) ? _emalloc_384() : (((size) <= 448) ? _emalloc_448() : (((size) <= 512) ? _emalloc_512() : (((size) <= 640) ? _emalloc_640() : (((size) <= 768) ? _emalloc_768() : (((size) <= 896) ? _emalloc_896() : (((size) <= 1024) ? _emalloc_1024() : (((size) <= 1280) ? _emalloc_1280() : (((size) <= 1536) ? _emalloc_1536() : (((size) <= 1792) ? _emalloc_1792() : (((size) <= 2048) ? _emalloc_2048() : (((size) <= 2560) ? _emalloc_2560() : (((size) <= 3072) ? _emalloc_3072() : (((size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((size)) : _emalloc_huge((size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((size) ) );

 arena->ptr = (char*) arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L));
 arena->end = (char*) arena + size;
 arena->prev = ((void *)0);
 return arena;
}

static inline __attribute__((always_inline)) void zend_arena_destroy(zend_arena *arena)
{
 do {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  arena = prev;
 } while (arena);
}



static inline __attribute__((always_inline)) void* zend_arena_alloc(zend_arena **arena_ptr, size_t size)
{
 zend_arena *arena = *arena_ptr;
 char *ptr = arena->ptr;

 size = (((size) + 8 - 1L) & ~(8 - 1L));

 if (__builtin_expect(!!(size <= (size_t)(arena->end - ptr)), 1)) {
  arena->ptr = ptr + size;
 } else {
  size_t arena_size =
   __builtin_expect(!!((size + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L))) > (size_t)(arena->end - (char*) arena)), 0) ?
    (size + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L))) :
    (size_t)(arena->end - (char*) arena);
  zend_arena *new_arena = (zend_arena*)(__builtin_constant_p((arena_size) ) ? (((arena_size) <= 8) ? _emalloc_8() : (((arena_size) <= 16) ? _emalloc_16() : (((arena_size) <= 24) ? _emalloc_24() : (((arena_size) <= 32) ? _emalloc_32() : (((arena_size) <= 40) ? _emalloc_40() : (((arena_size) <= 48) ? _emalloc_48() : (((arena_size) <= 56) ? _emalloc_56() : (((arena_size) <= 64) ? _emalloc_64() : (((arena_size) <= 80) ? _emalloc_80() : (((arena_size) <= 96) ? _emalloc_96() : (((arena_size) <= 112) ? _emalloc_112() : (((arena_size) <= 128) ? _emalloc_128() : (((arena_size) <= 160) ? _emalloc_160() : (((arena_size) <= 192) ? _emalloc_192() : (((arena_size) <= 224) ? _emalloc_224() : (((arena_size) <= 256) ? _emalloc_256() : (((arena_size) <= 320) ? _emalloc_320() : (((arena_size) <= 384) ? _emalloc_384() : (((arena_size) <= 448) ? _emalloc_448() : (((arena_size) <= 512) ? _emalloc_512() : (((arena_size) <= 640) ? _emalloc_640() : (((arena_size) <= 768) ? _emalloc_768() : (((arena_size) <= 896) ? _emalloc_896() : (((arena_size) <= 1024) ? _emalloc_1024() : (((arena_size) <= 1280) ? _emalloc_1280() : (((arena_size) <= 1536) ? _emalloc_1536() : (((arena_size) <= 1792) ? _emalloc_1792() : (((arena_size) <= 2048) ? _emalloc_2048() : (((arena_size) <= 2560) ? _emalloc_2560() : (((arena_size) <= 3072) ? _emalloc_3072() : (((arena_size) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((arena_size)) : _emalloc_huge((arena_size))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((arena_size) ) );

  ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L));
  new_arena->ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1L) & ~(8 - 1L)) + size;
  new_arena->end = (char*) new_arena + arena_size;
  new_arena->prev = arena;
  *arena_ptr = new_arena;
 }

 return (void*) ptr;
}

static inline __attribute__((always_inline)) void* zend_arena_calloc(zend_arena **arena_ptr, size_t count, size_t unit_size)
{
 int overflow;
 size_t size;
 void *ret;

 size = zend_safe_address(unit_size, count, 0, &overflow);
 if (__builtin_expect(!!(overflow), 0)) {
  zend_error((1<<0L), "Possible integer overflow in zend_arena_calloc() (%zu * %zu)", unit_size, count);
 }
 ret = zend_arena_alloc(arena_ptr, size);
 memset(ret, 0, size);
 return ret;
}

static inline __attribute__((always_inline)) void* zend_arena_checkpoint(zend_arena *arena)
{
 return arena->ptr;
}

static inline __attribute__((always_inline)) void zend_arena_release(zend_arena **arena_ptr, void *checkpoint)
{
 zend_arena *arena = *arena_ptr;

 while (__builtin_expect(!!((char*)checkpoint > arena->end), 0) ||
        __builtin_expect(!!((char*)checkpoint <= (char*)arena), 0)) {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  *arena_ptr = arena = prev;
 }
 do { if (__builtin_expect(!((char*)checkpoint > (char*)arena && (char*)checkpoint <= arena->end), 0)) __builtin_unreachable(); } while (0);
 arena->ptr = (char*)checkpoint;
}
# 41 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h" 2
# 66 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_globals.h"
typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack loop_var_stack;

 zend_class_entry *active_class_entry;

 zend_string *compiled_filename;

 int zend_lineno;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 struct _zend_ini_parser_param *ini_parser_param;

 uint32_t start_lineno;
 zend_bool increment_lineno;

 zend_string *doc_comment;
 uint32_t extra_fn_flags;

 uint32_t compiler_options;

 HashTable const_filenames;

 zend_oparray_context context;
 zend_file_context file_context;

 zend_arena *arena;

 zend_string *empty_string;
 zend_string *one_char_string[256];
 zend_string **known_strings;
 uint32_t known_strings_count;

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;

 zend_ast *ast;
 zend_arena *ast_arena;

 zend_stack delayed_oplines_stack;





};


struct _zend_executor_globals {
 zval uninitialized_zval;
 zval error_zval;


 zend_array *symtable_cache[32];
 zend_array **symtable_cache_limit;
 zend_array **symtable_cache_ptr;

 zend_array symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int exit_status;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zval *vm_stack_top;
 zval *vm_stack_end;
 zend_vm_stack vm_stack;

 struct _zend_execute_data *current_execute_data;
 zend_class_entry *fake_scope;

 zend_long precision;

 int ticks_count;

 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;

 zend_bool timed_out;
 zend_long hard_timeout;





 HashTable regular_list;
 HashTable persistent_list;

 int user_error_handler_error_reporting;
 zval user_error_handler;
 zval user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_stack user_error_handlers;
 zend_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 zend_long timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zend_object *exception, *prev_exception;
 const zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_module_entry *current_module;

 zend_bool active;
 zend_bool valid_symbol_table;

 zend_long assertions;

 uint32_t ht_iterators_count;
 uint32_t ht_iterators_used;
 HashTableIterator *ht_iterators;
 HashTableIterator ht_iterators_slots[16];

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


 zend_function trampoline;
 zend_op call_trampoline_op;

 void *reserved[4];
};

struct _zend_ini_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 char *filename;
 int lineno;


 int scanner_mode;
};

typedef enum {
 ON_TOKEN,
 ON_FEEDBACK,
 ON_STOP
} zend_php_scanner_event;

struct _zend_php_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;


 int scanned_string_len;


 void (* on_event)(zend_php_scanner_event event, int token, int line);
};
# 690 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);

void zend_oparray_context_begin(zend_oparray_context *prev_context);
void zend_oparray_context_end(zend_oparray_context *prev_context);
void zend_file_context_begin(zend_file_context *prev_context);
void zend_file_context_end(zend_file_context *prev_context);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type);
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename);

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval);
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) zend_string *zend_set_compiled_filename(zend_string *new_compiled_filename);
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(zend_string *original_compiled_filename);
__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, uint32_t var);






typedef int ( *unary_op_type)(zval *, zval *);
typedef int ( *binary_op_type)(zval *, zval *, zval *);

__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_stop_lexing(void);
void zend_emit_final_return(int return_one);
zend_ast *zend_ast_append_str(zend_ast *left, zend_ast *right);
uint32_t zend_add_class_modifier(uint32_t flags, uint32_t new_flag);
uint32_t zend_add_member_modifier(uint32_t flags, uint32_t new_flag);
void zend_handle_encoding_declaration(zend_ast *ast);


void zend_do_free(znode *op1);

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, const zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array);

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_verify_namespace(void);

void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline);

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);





__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type);
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename);
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename);
__attribute__ ((visibility("default"))) void zend_try_exception_handler();
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type, zval *retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle);
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size);
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array);
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle);
__attribute__ ((visibility("default"))) void zend_cleanup_user_class_data(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce);
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) void zend_cleanup_op_array_data(zend_op_array *op_array);
__attribute__ ((visibility("default"))) int clean_non_persistent_function_full(zval *zv);
__attribute__ ((visibility("default"))) int clean_non_persistent_class_full(zval *zv);

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function);
__attribute__ ((visibility("default"))) void zend_function_dtor(zval *zv);
__attribute__ ((visibility("default"))) void destroy_zend_class(zval *zv);
void zend_class_add_ref(zval *zv);

__attribute__ ((visibility("default"))) zend_string *zend_mangle_property_name(const char *src1, size_t src1_length, const char *src2, size_t src2_length, int internal);


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const zend_string *name, const char **class_name, const char **prop_name, size_t *prop_len);




zend_op *get_next_op(zend_op_array *op_array);
void init_op(zend_op *op);
int get_next_op_number(zend_op_array *op_array);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array);
zend_brk_cont_element *get_next_brk_cont_element(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name);
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers);
uint32_t zend_get_class_fetch_type(zend_string *name);
__attribute__ ((visibility("default"))) zend_uchar zend_get_call_op(const zend_op *init_op, zend_function *fbc);

typedef zend_bool (*zend_auto_global_callback)(zend_string *name);
typedef struct _zend_auto_global {
 zend_string *name;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(zend_string *name, zend_bool jit, zend_auto_global_callback auto_global_callback);
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(zend_string *name);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_str(char *name, size_t len);
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);
__attribute__ ((visibility("default"))) void zend_set_function_arg_flags(zend_function *func);

int zendlex(zend_parser_stack_elem *elem);

int zend_add_literal(zend_op_array *op_array, zval *zv);

__attribute__ ((visibility("default"))) void zend_assert_valid_class_name(const zend_string *const_name);



# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h" 1
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm_opcodes.h"


__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);
__attribute__ ((visibility("default"))) uint32_t zend_get_opcode_flags(zend_uchar opcode);


# 821 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h" 2
# 904 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
static inline __attribute__((always_inline)) int zend_check_arg_send_type(const zend_function *zf, uint32_t arg_num, uint32_t mask)
{
 arg_num--;
 if (__builtin_expect(!!(arg_num >= zf->common.num_args), 0)) {
  if (__builtin_expect(!!((zf->common.fn_flags & 0x1000000) == 0), 1)) {
   return 0;
  }
  arg_num = zf->common.num_args;
 }
 return __builtin_expect(!!((zf->common.arg_info[arg_num].pass_by_reference & mask) != 0), 0);
}
# 968 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"

# 1028 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.h"
__attribute__ ((visibility("default"))) zend_bool zend_binary_op_produces_numeric_string_error(uint32_t opcode, zval *op1, zval *op2);
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h" 1
# 33 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 zend_string *name;
 int flags;
 int module_number;
} zend_constant;
# 61 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_constants.h"

void clean_module_constants(int module_number);
void free_zend_constant(zval *zv);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_verify_const_access(zend_class_constant *c, zend_class_entry *ce);
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name);
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, size_t name_len);
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, uint32_t flags);
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, size_t name_len, zend_bool bval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, size_t name_len, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, size_t name_len, zend_long lval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, size_t name_len, double dval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, size_t name_len, char *strval, int flags, int module_number);
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, size_t name_len, char *strval, size_t strlen, int flags, int module_number);
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c);
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, uint32_t flags);

# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h" 1
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_list.h"


typedef void (*rsrc_dtor_func_t)(zend_resource *res);


typedef struct _zend_rsrc_list_dtors_entry {
 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
} zend_rsrc_list_dtors_entry;


__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(zval *ptr);
void plist_entry_destructor(zval *ptr);

void zend_clean_module_rsrc_dtors(int module_number);
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_close_rsrc_list(HashTable *ht);
void zend_destroy_rsrc_list(HashTable *ht);
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) zval *zend_list_insert(void *ptr, int type);
__attribute__ ((visibility("default"))) int zend_list_free(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_list_delete(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_list_close(zend_resource *res);

__attribute__ ((visibility("default"))) zend_resource *zend_register_resource(void *rsrc_pointer, int rsrc_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zend_resource *res, const char *resource_type_name, int resource_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource2(zend_resource *res, const char *resource_type_name, int resource_type, int resource_type2);
__attribute__ ((visibility("default"))) void *zend_fetch_resource_ex(zval *res, const char *resource_type_name, int resource_type);
__attribute__ ((visibility("default"))) void *zend_fetch_resource2_ex(zval *res, const char *resource_type_name, int resource_type, int resource_type2);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(zend_resource *res);
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(const char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;


# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2


# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h" 1
# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

struct _zend_fcall_info;
__attribute__ ((visibility("default"))) extern void (*zend_execute_ex)(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data, zval *return_value);

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void zend_init_execute_data(zend_execute_data *execute_data, zend_op_array *op_array, zval *return_value);
__attribute__ ((visibility("default"))) void zend_execute(zend_op_array *op_array, zval *return_value);
__attribute__ ((visibility("default"))) void execute_ex(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class(zend_string *name);
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class_ex(zend_string *name, const zval *key, int use_autoload);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_called_scope(zend_execute_data *ex);
__attribute__ ((visibility("default"))) zend_object *zend_get_this_object(zend_execute_data *ex);
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name);
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, size_t str_len, zval *retval_ptr, char *string_name);
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions);
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, size_t str_len, zval *retval_ptr, char *string_name, int handle_exceptions);


extern __attribute__ ((visibility("default"))) const zend_internal_function zend_pass_function;

__attribute__ ((visibility("default"))) void zend_check_internal_arg_type(zend_function *zf, uint32_t arg_num, zval *arg);
__attribute__ ((visibility("default"))) int zend_check_arg_type(zend_function *zf, uint32_t arg_num, zval *arg, zval *default_value, void **cache_slot);
__attribute__ ((visibility("default"))) void zend_check_missing_arg(zend_execute_data *execute_data, uint32_t arg_num, void **cache_slot);

static inline __attribute__((always_inline)) zval* zend_assign_to_variable(zval *variable_ptr, zval *value, zend_uchar value_type)
{
 zend_refcounted *ref = ((void *)0);

 if ((__builtin_constant_p(value_type & ((1<<2)|(1<<4))) ? (value_type & ((1<<2)|(1<<4))) : (1)) && (zval_get_type(&(*(value))) == 10)) {
  ref = (*(value)).value.counted;
  value = &(*(value)).value.ref->val;
 }

 do {
  if (__builtin_expect(!!((((*(variable_ptr)).u1.v.type_flags & (1<<2)) != 0)), 0)) {
   zend_refcounted *garbage;

   if ((zval_get_type(&(*(variable_ptr))) == 10)) {
    variable_ptr = &(*(variable_ptr)).value.ref->val;
    if (__builtin_expect(!!(!(((*(variable_ptr)).u1.v.type_flags & (1<<2)) != 0)), 1)) {
     break;
    }
   }
   if (zval_get_type(&(*(variable_ptr))) == 8 &&
       __builtin_expect(!!(((*(variable_ptr))).value.obj->handlers->set != ((void *)0)), 0)) {
    ((*(variable_ptr))).value.obj->handlers->set(variable_ptr, value);
    return variable_ptr;
   }
   if ((__builtin_constant_p(value_type & ((1<<2)|(1<<4))) ? (value_type & ((1<<2)|(1<<4))) : (1)) && variable_ptr == value) {
    return variable_ptr;
   }
   garbage = (*(variable_ptr)).value.counted;
   if (--(garbage)->gc.refcount == 0) {
    do { zval *_z1 = (variable_ptr); const zval *_z2 = (value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
    if (value_type & ((1<<0)|(1<<4))) {
     if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)), 0)) {
      zval_addref_p(variable_ptr);
     }
    } else if ((__builtin_constant_p(value_type == (1<<2)) ? (value_type == (1<<2)) : (1)) && __builtin_expect(!!(ref), 0)) {
     if (__builtin_expect(!!(--(ref)->gc.refcount == 0), 0)) {
      do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0);
     } else if ((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)) {
      zval_addref_p(variable_ptr);
     }
    }
    _zval_dtor_func(garbage );
    return variable_ptr;
   } else {

    if (((((*(variable_ptr)).u1.v.type_flags & (1<<3)) != 0)) &&
        __builtin_expect(!!(!(garbage)->gc.u.v.gc_info), 0)) {
     gc_possible_root(garbage);
    }
   }
  }
 } while (0);

 do { zval *_z1 = (variable_ptr); const zval *_z2 = (value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 if (value_type & ((1<<0)|(1<<4))) {
  if (__builtin_expect(!!((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)), 0)) {
   zval_addref_p(variable_ptr);
  }
 } else if ((__builtin_constant_p(value_type == (1<<2)) ? (value_type == (1<<2)) : (1)) && __builtin_expect(!!(ref), 0)) {
  if (__builtin_expect(!!(--(ref)->gc.refcount == 0), 0)) {
   do { if (__builtin_constant_p(sizeof(zend_reference))) { if (sizeof(zend_reference) <= 8) { _efree_8(ref); } else if (sizeof(zend_reference) <= 16) { _efree_16(ref); } else if (sizeof(zend_reference) <= 24) { _efree_24(ref); } else if (sizeof(zend_reference) <= 32) { _efree_32(ref); } else if (sizeof(zend_reference) <= 40) { _efree_40(ref); } else if (sizeof(zend_reference) <= 48) { _efree_48(ref); } else if (sizeof(zend_reference) <= 56) { _efree_56(ref); } else if (sizeof(zend_reference) <= 64) { _efree_64(ref); } else if (sizeof(zend_reference) <= 80) { _efree_80(ref); } else if (sizeof(zend_reference) <= 96) { _efree_96(ref); } else if (sizeof(zend_reference) <= 112) { _efree_112(ref); } else if (sizeof(zend_reference) <= 128) { _efree_128(ref); } else if (sizeof(zend_reference) <= 160) { _efree_160(ref); } else if (sizeof(zend_reference) <= 192) { _efree_192(ref); } else if (sizeof(zend_reference) <= 224) { _efree_224(ref); } else if (sizeof(zend_reference) <= 256) { _efree_256(ref); } else if (sizeof(zend_reference) <= 320) { _efree_320(ref); } else if (sizeof(zend_reference) <= 384) { _efree_384(ref); } else if (sizeof(zend_reference) <= 448) { _efree_448(ref); } else if (sizeof(zend_reference) <= 512) { _efree_512(ref); } else if (sizeof(zend_reference) <= 640) { _efree_640(ref); } else if (sizeof(zend_reference) <= 768) { _efree_768(ref); } else if (sizeof(zend_reference) <= 896) { _efree_896(ref); } else if (sizeof(zend_reference) <= 1024) { _efree_1024(ref); } else if (sizeof(zend_reference) <= 1280) { _efree_1280(ref); } else if (sizeof(zend_reference) <= 1536) { _efree_1536(ref); } else if (sizeof(zend_reference) <= 1792) { _efree_1792(ref); } else if (sizeof(zend_reference) <= 2048) { _efree_2048(ref); } else if (sizeof(zend_reference) <= 2560) { _efree_2560(ref); } else if (sizeof(zend_reference) <= 3072) { _efree_3072(ref); } else if (sizeof(zend_reference) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large(ref, sizeof(zend_reference)); } else { _efree_huge(ref, sizeof(zend_reference)); } } else { _efree(ref); } } while (0);
  } else if ((((*(variable_ptr)).u1.type_info & ((1<<2) << 8)) != 0)) {
   zval_addref_p(variable_ptr);
  }
 }
 return variable_ptr;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval *pp);
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval *pp, zend_class_entry *scope);


struct _zend_vm_stack {
 zval *top;
 zval *end;
 zend_vm_stack prev;
};
# 158 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) void zend_vm_stack_init(void);
__attribute__ ((visibility("default"))) void zend_vm_stack_destroy(void);
__attribute__ ((visibility("default"))) void* zend_vm_stack_extend(size_t size);

static inline __attribute__((always_inline)) void zend_vm_init_call_frame(zend_execute_data *call, uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 call->func = func;
 if (object) {
  (call->This).value.obj = object;
  do { ((call)->This).u1.type_info = ((1) ? (8 | (( (1<<2) | (1<<3) ) << 8)) : 0) | ((call_info) << 16); } while (0);
 } else {
  (call->This).value.ce = called_scope;
  do { ((call)->This).u1.type_info = ((0) ? (8 | (( (1<<2) | (1<<3) ) << 8)) : 0) | ((call_info) << 16); } while (0);
 }
 (call)->This.u2.num_args = num_args;
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame_ex(uint32_t used_stack, uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 zend_execute_data *call = (zend_execute_data*)(executor_globals.vm_stack_top);

 ;

 if (__builtin_expect(!!(used_stack > (size_t)(((char*)(executor_globals.vm_stack_end)) - (char*)call)), 0)) {
  call = (zend_execute_data*)zend_vm_stack_extend(used_stack);
  ;
  zend_vm_init_call_frame(call, call_info | (1 << 7), func, num_args, called_scope, object);
  return call;
 } else {
  (executor_globals.vm_stack_top) = (zval*)((char*)call + used_stack);
  zend_vm_init_call_frame(call, call_info, func, num_args, called_scope, object);
  return call;
 }
}

static inline __attribute__((always_inline)) uint32_t zend_vm_calc_used_stack(uint32_t num_args, zend_function *func)
{
 uint32_t used_stack = ((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + num_args;

 if (__builtin_expect(!!(((func->type & 1) == 0)), 1)) {
  used_stack += func->op_array.last_var + func->op_array.T - (((func->op_array.num_args)<(num_args))?(func->op_array.num_args):(num_args));
 }
 return used_stack * sizeof(zval);
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame(uint32_t call_info, zend_function *func, uint32_t num_args, zend_class_entry *called_scope, zend_object *object)
{
 uint32_t used_stack = zend_vm_calc_used_stack(num_args, func);

 return zend_vm_stack_push_call_frame_ex(used_stack, call_info,
  func, num_args, called_scope, object);
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_extra_args_ex(uint32_t call_info, zend_execute_data *call)
{
 if (__builtin_expect(!!(call_info & (1 << 2)), 0)) {
  zval *end = (((zval*)(call)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(call->func->op_array.last_var + call->func->op_array.T))));
   zval *p = end + ((call)->This.u2.num_args - call->func->op_array.num_args);
  do {
   p--;
   if ((((*(p)).u1.v.type_flags & (1<<2)) != 0)) {
    if (!zval_delref_p(p)) {
     zend_refcounted *r = (*(p)).value.counted;
     do { (*(p)).u1.type_info = 1; } while (0);
     _zval_dtor_func(r );
    } else {
     gc_check_possible_root((p));
    }
   }
  } while (p != end);
  }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_extra_args(zend_execute_data *call)
{
 zend_vm_stack_free_extra_args_ex((((call)->This).u1.type_info >> 16), call);
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_args(zend_execute_data *call)
{
 uint32_t num_args = (call)->This.u2.num_args;

 if (__builtin_expect(!!(num_args > 0), 1)) {
  zval *end = (((zval*)(call)) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(1)) - 1))));
  zval *p = end + num_args;

  do {
   p--;
   if ((((*(p)).u1.v.type_flags & (1<<2)) != 0)) {
    if (!zval_delref_p(p)) {
     zend_refcounted *r = (*(p)).value.counted;
     do { (*(p)).u1.type_info = 1; } while (0);
     _zval_dtor_func(r );
    }
   }
  } while (p != end);
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame_ex(uint32_t call_info, zend_execute_data *call)
{
 ;

 if (__builtin_expect(!!(call_info & (1 << 7)), 0)) {
  zend_vm_stack p = (executor_globals.vm_stack);
  zend_vm_stack prev = p->prev;

  do { if (__builtin_expect(!(call == (zend_execute_data*)(((zval*)((executor_globals.vm_stack))) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L))))), 0)) __builtin_unreachable(); } while (0);
  (executor_globals.vm_stack_top) = prev->top;
  (executor_globals.vm_stack_end) = prev->end;
  (executor_globals.vm_stack) = prev;
  _efree((p) );
 } else {
  (executor_globals.vm_stack_top) = (zval*)call;
 }

 ;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame(zend_execute_data *call)
{
 zend_vm_stack_free_call_frame_ex((((call)->This).u1.type_info >> 16), call);
}


__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space);
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) zend_string *zend_get_executed_filename_ex(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_executed_scope(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(zend_long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) __attribute__((noreturn)) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type);
void zend_verify_abstract_class(zend_class_entry *ce);

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim);
__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval_is(zval *result, zval *container, zval *dim, int dim_type);

__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, uint32_t var);
# 311 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef zval* zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type);

__attribute__ ((visibility("default"))) void zend_clean_and_cache_symbol_table(zend_array *symbol_table);
void zend_free_compiled_variables(zend_execute_data *execute_data);
void zend_cleanup_unfinished_execution(zend_execute_data *execute_data, uint32_t op_num, uint32_t catch_op_num);
# 366 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_execute.h"

# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(zend_execute_data *execute_data, zval *return_value);
 const struct _zend_internal_arg_info *arg_info;
 uint32_t num_args;
 uint32_t flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 zval function_name;
 zval *retval;
 zval *params;
 zend_object *object;
 zend_bool no_separation;
 uint32_t param_count;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zend_object *object;
} zend_fcall_info_cache;
# 243 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array);


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array);
# 264 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_throw(int num_args, const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args, zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args, zval *this_ptr, const char *type_spec, ...);

__attribute__ ((visibility("default"))) int zend_parse_parameter(int flags, int arg_num, zval *arg, const char *spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type);
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table);
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module);
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module);
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type);

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry);
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce);
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry);
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry, int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, size_t name_len, zend_class_entry *ce);






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, size_t function_name_length);
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, size_t class_name_length);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_param_count(void);
# 311 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zend_object *object, uint check_flags, zend_string **callable_name, zend_fcall_info_cache *fcc, char **error);
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, zend_string **callable_name);
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, zend_string **callable_name);
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, zend_string *name, zval *property, int access_type, zend_string *doc_comment);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, size_t name_length, zval *property, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, size_t name_length, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_long value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, size_t name_length, zend_long value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, size_t name_length, double value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value, int access_type);
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_len, int access_type);

__attribute__ ((visibility("default"))) int zend_declare_class_constant_ex(zend_class_entry *ce, zend_string *name, zval *value, int access_type, zend_string *doc_comment);
__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length);
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value);

__attribute__ ((visibility("default"))) int zend_update_class_constants(zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_update_property_ex(zend_class_entry *scope, zval *object, zend_string *name, zval *value);
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) void zend_update_property_str(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_string *value);
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, size_t name_length, const char *value);
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, size_t name_length, const char *value, size_t value_length);

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, size_t name_length, zval *value);
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, size_t name_length);
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, size_t name_length, zend_long value);
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, size_t name_length, double value);
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, size_t name_length, const char *value);
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, size_t name_length, const char *value, size_t value_length);

__attribute__ ((visibility("default"))) zval *zend_read_property_ex(zend_class_entry *scope, zval *object, zend_string *name, zend_bool silent, zval *rv);
__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, size_t name_length, zend_bool silent, zval *rv);

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, size_t name_length, zend_bool silent);

__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 380 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint32_t size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__ ((visibility("default"))) void object_properties_init_ex(zend_object *object, HashTable *properties);
__attribute__ ((visibility("default"))) void object_properties_load(zend_object *object, HashTable *properties);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties);

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, size_t key_len, zend_long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, size_t key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, size_t key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_str_ex(zval *arg, const char *key, size_t key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, size_t key_len, char *str);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, size_t key_len, char *str, size_t length);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
# 416 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, zend_ulong idx, zend_long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, zend_ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, zend_ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, zend_ulong idx, zend_resource *r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, zend_ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_str(zval *arg, zend_ulong idx, zend_string *str);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, zend_ulong idx, const char *str);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, zend_ulong idx, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, zend_ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, zend_long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, zend_resource *r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_str(zval *arg, zend_string *str);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) zval *add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, size_t length);




__attribute__ ((visibility("default"))) zval *add_get_index_long(zval *arg, zend_ulong idx, zend_long l);
__attribute__ ((visibility("default"))) zval *add_get_index_double(zval *arg, zend_ulong idx, double d);
__attribute__ ((visibility("default"))) zval *add_get_index_str(zval *arg, zend_ulong index, zend_string *str);
__attribute__ ((visibility("default"))) zval *add_get_index_string(zval *arg, zend_ulong idx, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_index_stringl(zval *arg, zend_ulong idx, const char *str, size_t length);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, size_t key_len, zend_long l);
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, size_t key_len);
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, size_t key_len, zend_long b);
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, size_t key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, size_t key_len, double d);
__attribute__ ((visibility("default"))) int add_property_str_ex(zval *arg, const char *key, size_t key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, size_t key_len, const char *str);
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, size_t key_len, const char *str, size_t length);
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, size_t key_len, zval *value);
# 471 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _call_user_function_ex(zval *object, zval *function_name, zval *retval_ptr, uint32_t param_count, zval params[], int no_separation);






__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 490 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, zend_string **callable_name, char **error);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval **params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval *params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args);
__attribute__ ((visibility("default"))) int zend_fcall_info_args_ex(zend_fcall_info *fci, zend_function *func, zval *args);





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci, int argc, zval *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci, int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci, int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval *retval, zval *args);

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache);

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) int zend_delete_global_variable(zend_string *name);

__attribute__ ((visibility("default"))) zend_array *zend_rebuild_symbol_table(void);
__attribute__ ((visibility("default"))) void zend_attach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) void zend_detach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) int zend_set_local_var(zend_string *name, zval *value, int force);
__attribute__ ((visibility("default"))) int zend_set_local_var_str(const char *name, size_t len, zval *value, int force);
__attribute__ ((visibility("default"))) int zend_forbid_dynamic_call(const char *func_name);

__attribute__ ((visibility("default"))) zend_string *zend_find_alias_name(zend_class_entry *ce, zend_string *name);
__attribute__ ((visibility("default"))) zend_string *zend_resolve_method_name(zend_class_entry *ce, zend_function *f);

__attribute__ ((visibility("default"))) const char *zend_get_object_type(const zend_class_entry *ce);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(zend_execute_data *execute_data, zval *return_value);
__attribute__ ((visibility("default"))) void zif_display_disabled_class(zend_execute_data *execute_data, zval *return_value);

# 694 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
typedef enum _zend_expected_type {
 Z_EXPECTED_LONG, Z_EXPECTED_BOOL, Z_EXPECTED_STRING, Z_EXPECTED_ARRAY, Z_EXPECTED_FUNC, Z_EXPECTED_RESOURCE, Z_EXPECTED_PATH, Z_EXPECTED_OBJECT, Z_EXPECTED_DOUBLE,
 Z_EXPECTED_LAST
} zend_expected_type;

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameters_count_error(int num_args, int min_num_args, int max_num_args);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameter_type_error(int num, zend_expected_type expected_type, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_parameter_class_error(int num, char *name, zval *arg);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_wrong_callback_error(int severity, int num, char *error);
# 1048 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_arg_class(zval *arg, zend_class_entry **pce, int num, int check_null);
__attribute__ ((visibility("default"))) int zend_parse_arg_bool_slow(zval *arg, zend_bool *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_bool_weak(zval *arg, zend_bool *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_slow(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_weak(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_cap_slow(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_long_cap_weak(zval *arg, zend_long *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_double_slow(zval *arg, double *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_double_weak(zval *arg, double *dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_str_slow(zval *arg, zend_string **dest);
__attribute__ ((visibility("default"))) int zend_parse_arg_str_weak(zval *arg, zend_string **dest);

static inline __attribute__((always_inline)) int zend_parse_arg_bool(zval *arg, zend_bool *dest, zend_bool *is_null, int check_null)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 3), 1)) {
  *dest = 1;
 } else if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 2), 1)) {
  *dest = 0;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0;
 } else {
  return zend_parse_arg_bool_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_long(zval *arg, zend_long *dest, zend_bool *is_null, int check_null, int cap)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 4), 1)) {
  *dest = (*(arg)).value.lval;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0;
 } else if (cap) {
  return zend_parse_arg_long_cap_slow(arg, dest);
 } else {
  return zend_parse_arg_long_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_double(zval *arg, double *dest, zend_bool *is_null, int check_null)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 5), 1)) {
  *dest = (*(arg)).value.dval;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *is_null = 1;
  *dest = 0.0;
 } else {
  return zend_parse_arg_double_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_str(zval *arg, zend_string **dest, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 6), 1)) {
  *dest = (*(arg)).value.str;
 } else if (check_null && zval_get_type(&(*(arg))) == 1) {
  *dest = ((void *)0);
 } else {
  return zend_parse_arg_str_slow(arg, dest);
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_string(zval *arg, char **dest, size_t *dest_len, int check_null)
{
 zend_string *str;

 if (!zend_parse_arg_str(arg, &str, check_null)) {
  return 0;
 }
 if (check_null && __builtin_expect(!!(!str), 0)) {
  *dest = ((void *)0);
  *dest_len = 0;
 } else {
  *dest = (str)->val;
  *dest_len = (str)->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_path_str(zval *arg, zend_string **dest, int check_null)
{
 if (!zend_parse_arg_str(arg, dest, check_null) ||
     (*dest && __builtin_expect(!!((strlen((*dest)->val) != (*dest)->len)), 0))) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_path(zval *arg, char **dest, size_t *dest_len, int check_null)
{
 zend_string *str;

 if (!zend_parse_arg_path_str(arg, &str, check_null)) {
  return 0;
 }
 if (check_null && __builtin_expect(!!(!str), 0)) {
  *dest = ((void *)0);
  *dest_len = 0;
 } else {
  *dest = (str)->val;
  *dest_len = (str)->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_array(zval *arg, zval **dest, int check_null, int or_object)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1) ||
  (or_object && __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_array_ht(zval *arg, HashTable **dest, int check_null, int or_object, int separate)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 7), 1)) {
  *dest = (*(arg)).value.arr;
 } else if (or_object && __builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1)) {
  if (separate
   && (*(arg)).value.obj->properties
   && __builtin_expect(!!(((*(arg)).value.obj->properties)->gc.refcount > 1), 0)) {
   if (__builtin_expect(!!(!(((*(arg)).value.obj->properties)->gc.u.v.flags & (1<<1))), 1)) {
    ((*(arg)).value.obj->properties)->gc.refcount--;
   }
   (*(arg)).value.obj->properties = zend_array_dup((*(arg)).value.obj->properties);
  }
  *dest = (*(arg)).value.obj->handlers->get_properties(arg);
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_object(zval *arg, zval **dest, zend_class_entry *ce, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 8), 1) &&
     (!ce || __builtin_expect(!!(instanceof_function(((*(arg)).value.obj->ce), ce) != 0), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_resource(zval *arg, zval **dest, int check_null)
{
 if (__builtin_expect(!!(zval_get_type(&(*(arg))) == 9), 1)) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 1)) {
  *dest = ((void *)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int zend_parse_arg_func(zval *arg, zend_fcall_info *dest_fci, zend_fcall_info_cache *dest_fcc, int check_null, char **error)
{
 if (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0)) {
  dest_fci->size = 0;
  dest_fcc->initialized = 0;
  *error = ((void *)0);
 } else if (__builtin_expect(!!(zend_fcall_info_init(arg, 0, dest_fci, dest_fcc, ((void *)0), error) != SUCCESS), 0)) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) void zend_parse_arg_zval(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null &&
     (__builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0) ||
      (__builtin_expect(!!((zval_get_type(&(*(arg))) == 10)), 0) &&
       __builtin_expect(!!(zval_get_type(&(*(&(*(arg)).value.ref->val))) == 1), 0)))) ? ((void *)0) : arg;
}

static inline __attribute__((always_inline)) void zend_parse_arg_zval_deref(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null && __builtin_expect(!!(zval_get_type(&(*(arg))) == 1), 0)) ? ((void *)0) : arg;
}


# 29 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_exceptions.h"


extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_throwable;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_exception;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_error_exception;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_parse_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_type_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_arithmetic_error;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_division_by_zero_error;

__attribute__ ((visibility("default"))) void zend_exception_set_previous(zend_object *exception, zend_object *add_previous);
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_exception_internal(zval *exception);

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_exception_base(zval *object);


__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);


__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);

__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) __attribute__((cold)) zend_object *zend_throw_exception(zend_class_entry *exception_ce, const char *message, zend_long code);
__attribute__ ((visibility("default"))) __attribute__((cold)) zend_object *zend_throw_exception_ex(zend_class_entry *exception_ce, zend_long code, const char *format, ...);
__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_throw_exception_object(zval *exception);
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zend_object *zend_throw_error_exception(zend_class_entry *exception_ce, const char *message, zend_long code, int severity);

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex);


__attribute__ ((visibility("default"))) __attribute__((cold)) void zend_exception_error(zend_object *exception, int severity);


size_t zend_spprintf(char **message, size_t max_len, const char *format, ...);
zend_string *zend_strpprintf(size_t max_len, const char *format, ...);


# 30 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h"


extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_traversable;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_aggregate;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_iterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_arrayaccess;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_serializable;

typedef struct _zend_user_iterator {
 zend_object_iterator it;
 zend_class_entry *ce;
 zval value;
} zend_user_iterator;

__attribute__ ((visibility("default"))) zval* zend_call_method(zval *object_pp, zend_class_entry *obj_ce, zend_function **fn_proxy, const char *function_name, size_t function_name_len, zval *retval, int param_count, zval* arg1, zval* arg2);
# 63 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_interfaces.h"
__attribute__ ((visibility("default"))) void zend_user_it_rewind(zend_object_iterator *_iter);
__attribute__ ((visibility("default"))) int zend_user_it_valid(zend_object_iterator *_iter);
__attribute__ ((visibility("default"))) void zend_user_it_get_current_key(zend_object_iterator *_iter, zval *key);
__attribute__ ((visibility("default"))) zval *zend_user_it_get_current_data(zend_object_iterator *_iter);
__attribute__ ((visibility("default"))) void zend_user_it_move_forward(zend_object_iterator *_iter);
__attribute__ ((visibility("default"))) void zend_user_it_invalidate_current(zend_object_iterator *_iter);

__attribute__ ((visibility("default"))) void zend_user_it_new_iterator(zend_class_entry *ce, zval *object, zval *iterator);
__attribute__ ((visibility("default"))) zend_object_iterator *zend_user_it_get_new_iterator(zend_class_entry *ce, zval *object, int by_ref);

__attribute__ ((visibility("default"))) void zend_register_interfaces(void);

__attribute__ ((visibility("default"))) int zend_user_serialize(zval *object, unsigned char **buffer, size_t *buf_len, zend_serialize_data *data);
__attribute__ ((visibility("default"))) int zend_user_unserialize(zval *object, zend_class_entry *ce, const unsigned char *buf, size_t buf_len, zend_unserialize_data *data);

__attribute__ ((visibility("default"))) int zend_class_serialize_deny(zval *object, unsigned char **buffer, size_t *buf_len, zend_serialize_data *data);
__attribute__ ((visibility("default"))) int zend_class_unserialize_deny(zval *object, zend_class_entry *ce, const unsigned char *buf, size_t buf_len, zend_unserialize_data *data);


# 31 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 1
# 26 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/TSRM.h" 1
# 27 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 1
# 13 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config.h" 2
# 14 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4

# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 153 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 307 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));






extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);




extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);



extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 204 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 246 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 327 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 333 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 343 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 350 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 353 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));







extern int sighold (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 29 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 15 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 37 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1151 "/usr/include/unistd.h" 3 4

# 38 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 42 "/home/ct584/git/bughunter/repositories/php-src/TSRM/tsrm_config_common.h" 2
# 28 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2



# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2


# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4






# 1 "/usr/include/time.h" 1 3 4
# 34 "/usr/include/utime.h" 2 3 4



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 90 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 173 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 200 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 244 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 254 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 277 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
# 292 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (const struct dirent *),
        int (*__cmp) (const struct dirent **,
        const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
# 314 "/usr/include/dirent.h" 3 4
extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 339 "/usr/include/dirent.h" 3 4
extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 369 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (const struct dirent **__e1,
   const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 395 "/usr/include/dirent.h" 3 4
extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




# 91 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h" 2
# 145 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) int virtual_cwd_activate(void);
__attribute__ ((visibility("default"))) int virtual_cwd_deactivate(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length);
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size);
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path);
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path));
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath);
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path);
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path);
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode);
__attribute__ ((visibility("default"))) int virtual_open(const char *path, int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode);
__attribute__ ((visibility("default"))) int virtual_rename(const char *oldname, const char *newname);
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, zend_stat_t *buf);
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, zend_stat_t *buf);
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path);
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode);
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname);
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname);
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type);
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode);
# 192 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf);

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode);

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link);
# 206 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath);

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path);




typedef struct _realpath_cache_bucket {
 zend_ulong key;
 char *path;
 char *realpath;
 struct _realpath_cache_bucket *next;
 time_t expires;
 int path_len;
 int realpath_len;
 int is_dir;






} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 zend_long realpath_cache_size;
 zend_long realpath_cache_size_limit;
 zend_long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len);
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t);
__attribute__ ((visibility("default"))) zend_long realpath_cache_size(void);
__attribute__ ((visibility("default"))) zend_long realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 32 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2

# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_language_scanner.h"
typedef struct _zend_lex_state {
 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;

 zend_file_handle *in;
 uint lineno;
 zend_string *filename;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;


 void (* on_event)(zend_php_scanner_event event, int token, int line);

 zend_ast *ast;
 zend_arena *ast_arena;
} zend_lex_state;

typedef struct _zend_heredoc_label {
 char *label;
 int length;
} zend_heredoc_label;


__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state);
__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state);
__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename);
__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding);
__attribute__ ((visibility("default"))) void zend_lex_tstring(zval *zv);


# 34 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_inheritance.h" 1
# 25 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_inheritance.h"


__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface);
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface);

__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait);
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce);

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce);
void zend_do_early_binding(void);

void zend_check_deprecated_constructor(const zend_class_entry *ce);


# 35 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 1 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm.h" 1
# 24 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_vm.h"


__attribute__ ((visibility("default"))) void zend_vm_use_old_executor(void);
__attribute__ ((visibility("default"))) void zend_vm_set_opcode_handler(zend_op* opcode);
__attribute__ ((visibility("default"))) void zend_vm_set_opcode_handler_ex(zend_op* opcode, uint32_t op1_info, uint32_t op2_info, uint32_t res_info);
__attribute__ ((visibility("default"))) void zend_serialize_opcode_handler(zend_op *op);
__attribute__ ((visibility("default"))) void zend_deserialize_opcode_handler(zend_op *op);
__attribute__ ((visibility("default"))) int zend_vm_call_opcode_handler(zend_execute_data *ex);


# 36 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c" 2
# 57 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
typedef struct _zend_loop_var {
 zend_uchar opcode;
 zend_uchar var_type;
 uint32_t var_num;
 union {
  uint32_t try_catch_offset;
  uint32_t live_range_offset;
 } u;
} zend_loop_var;

static inline void zend_alloc_cache_slot(uint32_t literal) {
 zend_op_array *op_array = (compiler_globals.active_op_array);
 (op_array->literals[literal]).u2.cache_slot = op_array->cache_size;
 op_array->cache_size += sizeof(void*);
}



static inline void zend_alloc_polymorphic_cache_slot(uint32_t literal) {
 zend_op_array *op_array = (compiler_globals.active_op_array);
 (op_array->literals[literal]).u2.cache_slot = op_array->cache_size;
 op_array->cache_size += 2 * sizeof(void*);
}

__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type);
__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename);


__attribute__ ((visibility("default"))) zend_compiler_globals compiler_globals;
__attribute__ ((visibility("default"))) zend_executor_globals executor_globals;


static zend_op *zend_emit_op(znode *result, zend_uchar opcode, znode *op1, znode *op2);

static void zend_destroy_property_info_internal(zval *zv)
{
 zend_property_info *property_info = (*(zv)).value.ptr;

 zend_string_release(property_info->name);
 free(property_info);
}


static void zend_destroy_class_constant_internal(zval *zv)
{
 free((*(zv)).value.ptr);
}


static zend_string *zend_new_interned_string_safe(zend_string *str) {
 zend_string *interned_str;

 zend_string_addref(str);
 interned_str = zend_new_interned_string(str);
 if (str != interned_str) {
  return interned_str;
 } else {
  zend_string_release(str);
  return str;
 }
}


static zend_string *zend_build_runtime_definition_key(zend_string *name, unsigned char *lex_pos)
{
 zend_string *result;
 char char_pos_buf[32];
 size_t char_pos_len = sprintf(char_pos_buf, "%p", lex_pos);
 zend_string *filename = (compiler_globals.active_op_array)->filename;


 result = zend_string_alloc(1 + (name)->len + (filename)->len + char_pos_len, 0);
  sprintf((result)->val, "%c%s%s%s", '\0', (name)->val, (filename)->val, char_pos_buf);
 return zend_new_interned_string(result);
}


static zend_bool zend_get_unqualified_name(const zend_string *name, const char **result, size_t *result_len)
{
 const char *ns_separator = zend_memrchr((name)->val, '\\', (name)->len);
 if (ns_separator != ((void *)0)) {
  *result = ns_separator + 1;
  *result_len = (name)->val + (name)->len - *result;
  return 1;
 }

 return 0;
}


struct reserved_class_name {
 const char *name;
 size_t len;
};
static const struct reserved_class_name reserved_class_names[] = {
 {("bool"), (sizeof("bool")-1)},
 {("false"), (sizeof("false")-1)},
 {("float"), (sizeof("float")-1)},
 {("int"), (sizeof("int")-1)},
 {("null"), (sizeof("null")-1)},
 {("parent"), (sizeof("parent")-1)},
 {("self"), (sizeof("self")-1)},
 {("static"), (sizeof("static")-1)},
 {("string"), (sizeof("string")-1)},
 {("true"), (sizeof("true")-1)},
 {("void"), (sizeof("void")-1)},
 {((void *)0), 0}
};

static zend_bool zend_is_reserved_class_name(const zend_string *name)
{
 const struct reserved_class_name *reserved = reserved_class_names;

 const char *uqname = (name)->val;
 size_t uqname_len = (name)->len;
 zend_get_unqualified_name(name, &uqname, &uqname_len);

 for (; reserved->name; ++reserved) {
  if (uqname_len == reserved->len
   && zend_binary_strcasecmp(uqname, uqname_len, reserved->name, reserved->len) == 0
  ) {
   return 1;
  }
 }

 return 0;
}


__attribute__ ((visibility("default"))) void zend_assert_valid_class_name(const zend_string *name)
{
 if (zend_is_reserved_class_name(name)) {
  zend_error_noreturn((1<<6L),
   "Cannot use '%s' as class name as it is reserved", (name)->val);
 }
}


typedef struct _builtin_type_info {
 const char* name;
 const size_t name_len;
 const zend_uchar type;
} builtin_type_info;

static const builtin_type_info builtin_types[] = {
 {("int"), (sizeof("int")-1), 4},
 {("float"), (sizeof("float")-1), 5},
 {("string"), (sizeof("string")-1), 6},
 {("bool"), (sizeof("bool")-1), 13},
 {("void"), (sizeof("void")-1), 18},
 {((void *)0), 0, 0}
};


static inline __attribute__((always_inline)) zend_uchar zend_lookup_builtin_type_by_name(const zend_string *name)
{
 const builtin_type_info *info = &builtin_types[0];

 for (; info->name; ++info) {
  if ((name)->len == info->name_len
   && zend_binary_strcasecmp((name)->val, (name)->len, info->name, info->name_len) == 0
  ) {
   return info->type;
  }
 }

 return 0;
}



void zend_oparray_context_begin(zend_oparray_context *prev_context)
{
 *prev_context = (compiler_globals.context);
 (compiler_globals.context).opcodes_size = 64;
 (compiler_globals.context).vars_size = 0;
 (compiler_globals.context).literals_size = 0;
 (compiler_globals.context).backpatch_count = 0;
 (compiler_globals.context).in_finally = 0;
 (compiler_globals.context).fast_call_var = -1;
 (compiler_globals.context).try_catch_offset = -1;
 (compiler_globals.context).current_brk_cont = -1;
 (compiler_globals.context).last_brk_cont = 0;
 (compiler_globals.context).brk_cont_array = ((void *)0);
 (compiler_globals.context).labels = ((void *)0);
}


void zend_oparray_context_end(zend_oparray_context *prev_context)
{
 if ((compiler_globals.context).brk_cont_array) {
  _efree(((compiler_globals.context).brk_cont_array) );
  (compiler_globals.context).brk_cont_array = ((void *)0);
 }
 if ((compiler_globals.context).labels) {
  zend_hash_destroy((compiler_globals.context).labels);
  do { if (__builtin_constant_p(sizeof(HashTable))) { if (sizeof(HashTable) <= 8) { _efree_8((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 16) { _efree_16((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 24) { _efree_24((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 32) { _efree_32((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 40) { _efree_40((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 48) { _efree_48((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 56) { _efree_56((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 64) { _efree_64((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 80) { _efree_80((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 96) { _efree_96((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 112) { _efree_112((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 128) { _efree_128((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 160) { _efree_160((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 192) { _efree_192((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 224) { _efree_224((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 256) { _efree_256((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 320) { _efree_320((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 384) { _efree_384((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 448) { _efree_448((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 512) { _efree_512((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 640) { _efree_640((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 768) { _efree_768((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 896) { _efree_896((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 1024) { _efree_1024((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 1280) { _efree_1280((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 1536) { _efree_1536((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 1792) { _efree_1792((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 2048) { _efree_2048((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 2560) { _efree_2560((compiler_globals.context).labels); } else if (sizeof(HashTable) <= 3072) { _efree_3072((compiler_globals.context).labels); } else if (sizeof(HashTable) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large((compiler_globals.context).labels, sizeof(HashTable)); } else { _efree_huge((compiler_globals.context).labels, sizeof(HashTable)); } } else { _efree((compiler_globals.context).labels); } } while (0);
  (compiler_globals.context).labels = ((void *)0);
 }
 (compiler_globals.context) = *prev_context;
}


static void zend_reset_import_tables(void)
{
 if (((compiler_globals.file_context).imports)) {
  zend_hash_destroy(((compiler_globals.file_context).imports));
  _efree((((compiler_globals.file_context).imports)) );
  ((compiler_globals.file_context).imports) = ((void *)0);
 }

 if (((compiler_globals.file_context).imports_function)) {
  zend_hash_destroy(((compiler_globals.file_context).imports_function));
  _efree((((compiler_globals.file_context).imports_function)) );
  ((compiler_globals.file_context).imports_function) = ((void *)0);
 }

 if (((compiler_globals.file_context).imports_const)) {
  zend_hash_destroy(((compiler_globals.file_context).imports_const));
  _efree((((compiler_globals.file_context).imports_const)) );
  ((compiler_globals.file_context).imports_const) = ((void *)0);
 }
}


static void zend_end_namespace(void) {
 ((compiler_globals.file_context).in_namespace) = 0;
 zend_reset_import_tables();
 if (((compiler_globals.file_context).current_namespace)) {
  zend_string_release(((compiler_globals.file_context).current_namespace));
  ((compiler_globals.file_context).current_namespace) = ((void *)0);
 }
}


void zend_file_context_begin(zend_file_context *prev_context)
{
 *prev_context = (compiler_globals.file_context);
 ((compiler_globals.file_context).imports) = ((void *)0);
 ((compiler_globals.file_context).imports_function) = ((void *)0);
 ((compiler_globals.file_context).imports_const) = ((void *)0);
 ((compiler_globals.file_context).current_namespace) = ((void *)0);
 ((compiler_globals.file_context).in_namespace) = 0;
 ((compiler_globals.file_context).has_bracketed_namespaces) = 0;
 ((compiler_globals.file_context).declarables).ticks = 0;
}


void zend_file_context_end(zend_file_context *prev_context)
{
 zend_end_namespace();
 (compiler_globals.file_context) = *prev_context;
}


void zend_init_compiler_data_structures(void)
{
 zend_stack_init(&(compiler_globals.loop_var_stack), sizeof(zend_loop_var));
 zend_stack_init(&(compiler_globals.delayed_oplines_stack), sizeof(zend_op));
 (compiler_globals.active_class_entry) = ((void *)0);
 (compiler_globals.in_compilation) = 0;
 (compiler_globals.start_lineno) = 0;
 _zend_hash_init((&(compiler_globals.const_filenames)), (8), (((void *)0)), (0) );

 (compiler_globals.encoding_declared) = 0;
}


__attribute__ ((visibility("default"))) void file_handle_dtor(zend_file_handle *fh)
{

 zend_file_handle_dtor(fh);
}


void init_compiler(void)
{
 (compiler_globals.arena) = zend_arena_create(64 * 1024);
 (compiler_globals.active_op_array) = ((void *)0);
 memset(&(compiler_globals.context), 0, sizeof((compiler_globals.context)));
 zend_init_compiler_data_structures();
 zend_init_rsrc_list();
 _zend_hash_init((&(compiler_globals.filenames_table)), (8), (_zval_ptr_dtor), (0) );
 zend_llist_init(&(compiler_globals.open_files), sizeof(zend_file_handle), (void (*)(void *)) file_handle_dtor, 0);
 (compiler_globals.unclean_shutdown) = 0;
}


void shutdown_compiler(void)
{
 zend_stack_destroy(&(compiler_globals.loop_var_stack));
 zend_stack_destroy(&(compiler_globals.delayed_oplines_stack));
 zend_hash_destroy(&(compiler_globals.filenames_table));
 zend_hash_destroy(&(compiler_globals.const_filenames));
 zend_arena_destroy((compiler_globals.arena));
}


__attribute__ ((visibility("default"))) zend_string *zend_set_compiled_filename(zend_string *new_compiled_filename)
{
 zval *p, rv;

 if ((p = zend_hash_find(&(compiler_globals.filenames_table), new_compiled_filename))) {
  do { if (__builtin_expect(!(zval_get_type(&(*(p))) == 6), 0)) __builtin_unreachable(); } while (0);
  (compiler_globals.compiled_filename) = (*(p)).value.str;
  return (*(p)).value.str;
 }

 do { zval *__z = (&rv); zend_string *__s = (new_compiled_filename); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
 _zend_hash_update(&(compiler_globals.filenames_table), new_compiled_filename, &rv );

 (compiler_globals.compiled_filename) = new_compiled_filename;
 return new_compiled_filename;
}


__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(zend_string *original_compiled_filename)
{
 (compiler_globals.compiled_filename) = original_compiled_filename;
}


__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_filename(void)
{
 return (compiler_globals.compiled_filename);
}


__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void)
{
 return (compiler_globals.zend_lineno);
}


__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void)
{
 return (compiler_globals.in_compilation);
}


static uint32_t get_temporary_variable(zend_op_array *op_array)
{
 return (uint32_t)op_array->T++;
}


static int lookup_cv(zend_op_array *op_array, zend_string* name) {
 int i = 0;
 zend_ulong hash_value = zend_string_hash_val(name);

 while (i < op_array->last_var) {
  if ((op_array->vars[i])->val == (name)->val ||
      ((op_array->vars[i])->h == hash_value &&
       (op_array->vars[i])->len == (name)->len &&
       memcmp((op_array->vars[i])->val, (name)->val, (name)->len) == 0)) {
   zend_string_release(name);
   return (int)(zend_intptr_t)(((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(i))));
  }
  i++;
 }
 i = op_array->last_var;
 op_array->last_var++;
 if (op_array->last_var > (compiler_globals.context).vars_size) {
  (compiler_globals.context).vars_size += 16;
  op_array->vars = _erealloc((op_array->vars), ((compiler_globals.context).vars_size * sizeof(zend_string*)) );
 }

 op_array->vars[i] = zend_new_interned_string(name);
 return (int)(zend_intptr_t)(((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(i))));
}


void zend_del_literal(zend_op_array *op_array, int n)
{
 _zval_ptr_dtor_nogc((((op_array)->literals + (n))) );
 if (n + 1 == op_array->last_literal) {
  op_array->last_literal--;
 } else {
  do { (*(((op_array)->literals + (n)))).u1.type_info = 0; } while (0);
 }
}



static inline void zend_insert_literal(zend_op_array *op_array, zval *zv, int literal_position)
{
 if (zval_get_type(&(*(zv))) == 6 || zval_get_type(&(*(zv))) == 11) {
  zend_string_hash_val((*(zv)).value.str);
  (*(zv)).value.str = zend_new_interned_string((*(zv)).value.str);
  if ((((*(zv)).value.str)->gc.u.v.flags & (1<<1))) {
   (*(zv)).u1.v.type_flags &= ~ ((1<<2) | (1<<4));
  }
 }
 do { zval *_z1 = (((op_array)->literals + (literal_position))); const zval *_z2 = (zv); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 (op_array->literals[literal_position]).u2.cache_slot = -1;
}





int zend_add_literal(zend_op_array *op_array, zval *zv)
{
 int i = op_array->last_literal;
 op_array->last_literal++;
 if (i >= (compiler_globals.context).literals_size) {
  while (i >= (compiler_globals.context).literals_size) {
   (compiler_globals.context).literals_size += 16;
  }
  op_array->literals = (zval*)_erealloc((op_array->literals), ((compiler_globals.context).literals_size * sizeof(zval)) );
 }
 zend_insert_literal(op_array, zv, i);
 return i;
}


static inline int zend_add_literal_string(zend_op_array *op_array, zend_string **str)
{
 int ret;
 zval zv;
 do { zval *__z = (&zv); zend_string *__s = (*str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 ret = zend_add_literal(op_array, &zv);
 *str = (zv).value.str;
 return ret;
}


static int zend_add_func_name_literal(zend_op_array *op_array, zend_string *name)
{

 int ret = zend_add_literal_string(op_array, &name);


 zend_string *lc_name = zend_string_tolower(name);
 zend_add_literal_string(op_array, &lc_name);

 return ret;
}


static int zend_add_ns_func_name_literal(zend_op_array *op_array, zend_string *name)
{
 const char *unqualified_name;
 size_t unqualified_name_len;


 int ret = zend_add_literal_string(op_array, &name);


 zend_string *lc_name = zend_string_tolower(name);
 zend_add_literal_string(op_array, &lc_name);


 if (zend_get_unqualified_name(name, &unqualified_name, &unqualified_name_len)) {
  lc_name = zend_string_alloc(unqualified_name_len, 0);
  zend_str_tolower_copy((lc_name)->val, unqualified_name, unqualified_name_len);
  zend_add_literal_string(op_array, &lc_name);
 }

 return ret;
}


static int zend_add_class_name_literal(zend_op_array *op_array, zend_string *name)
{

 int ret = zend_add_literal_string(op_array, &name);


 zend_string *lc_name = zend_string_tolower(name);
 zend_add_literal_string(op_array, &lc_name);

 zend_alloc_cache_slot(ret);

 return ret;
}


static int zend_add_const_name_literal(zend_op_array *op_array, zend_string *name, zend_bool unqualified)
{
 zend_string *tmp_name;

 int ret = zend_add_literal_string(op_array, &name);

 size_t ns_len = 0, after_ns_len = (name)->len;
 const char *after_ns = zend_memrchr((name)->val, '\\', (name)->len);
 if (after_ns) {
  after_ns += 1;
  ns_len = after_ns - (name)->val - 1;
  after_ns_len = (name)->len - ns_len - 1;


  tmp_name = zend_string_init((name)->val, (name)->len, 0);
  zend_str_tolower((tmp_name)->val, ns_len);
  zend_add_literal_string(op_array, &tmp_name);


  tmp_name = zend_string_tolower(name);
  zend_add_literal_string(op_array, &tmp_name);

  if (!unqualified) {
   return ret;
  }
 } else {
  after_ns = (name)->val;
 }


 tmp_name = zend_string_init(after_ns, after_ns_len, 0);
 zend_add_literal_string(op_array, &tmp_name);


 tmp_name = zend_string_alloc(after_ns_len, 0);
 zend_str_tolower_copy((tmp_name)->val, after_ns, after_ns_len);
 zend_add_literal_string(op_array, &tmp_name);

 return ret;
}
# 583 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
void zend_stop_lexing(void)
{
 if((language_scanner_globals.on_event)) (language_scanner_globals.on_event)(ON_STOP, 0, 0);

 (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_limit);
}

static uint32_t zend_start_live_range(zend_op_array *op_array, uint32_t start)
{
 zend_live_range *range;

 op_array->last_live_range++;
 op_array->live_range = _erealloc((op_array->live_range), (sizeof(zend_live_range) * op_array->last_live_range) );
 range = op_array->live_range + op_array->last_live_range - 1;
 range->start = start;
 return op_array->last_live_range - 1;
}


static uint32_t zend_start_live_range_ex(zend_op_array *op_array, uint32_t start)
{
 if (op_array->last_live_range == 0 ||
     op_array->live_range[op_array->last_live_range - 1].start <= start) {
  return zend_start_live_range(op_array, start);
 } else {

  uint32_t n = op_array->last_live_range;


  op_array->last_live_range = n + 1;
  op_array->live_range = _erealloc((op_array->live_range), (sizeof(zend_live_range) * op_array->last_live_range) );
  do {
   op_array->live_range[n] = op_array->live_range[n-1];
   n--;
  } while (n != 0 && op_array->live_range[n-1].start > start);


  op_array->live_range[n].start = start;


  if (!zend_stack_is_empty(&(compiler_globals.loop_var_stack))) {
   zend_loop_var *loop_var = zend_stack_top(&(compiler_globals.loop_var_stack));
   zend_loop_var *base = zend_stack_base(&(compiler_globals.loop_var_stack));
   int check_opcodes = 0;

   for (; loop_var >= base; loop_var--) {
    if (loop_var->opcode == 62) {

     break;
    } else if (loop_var->opcode == 70 ||
              loop_var->opcode == 127) {
     if (loop_var->u.live_range_offset >= n) {
      loop_var->u.live_range_offset++;
      check_opcodes = 1;
     } else {
      break;
     }
    }
   }


   if (check_opcodes) {
    zend_op *opline = op_array->opcodes + op_array->live_range[n+1].start;
    zend_op *end = op_array->opcodes + op_array->last;

    while (opline < end) {
     if ((opline->opcode == 70 ||
          opline->opcode == 127) &&
         (opline->extended_value & (1<<0)) &&
         opline->op2.num >= n) {
      opline->op2.num++;
     }
     opline++;
    }
   }
  }
  return n;
 }
}


static void zend_end_live_range(zend_op_array *op_array, uint32_t offset, uint32_t end, uint32_t kind, uint32_t var)
{
 zend_live_range *range = op_array->live_range + offset;

 if (range->start == end && offset == op_array->last_live_range - 1) {
  op_array->last_live_range--;
 } else {
  range->end = end;
  range->var = (var * sizeof(zval)) | kind;
 }
}


static inline void zend_begin_loop(zend_uchar free_opcode, const znode *loop_var)
{
 zend_brk_cont_element *brk_cont_element;
 int parent = (compiler_globals.context).current_brk_cont;
 zend_loop_var info = {0};

 (compiler_globals.context).current_brk_cont = (compiler_globals.context).last_brk_cont;
 brk_cont_element = get_next_brk_cont_element();
 brk_cont_element->parent = parent;

 if (loop_var && (loop_var->op_type & ((1<<2)|(1<<1)))) {
  uint32_t start = get_next_op_number((compiler_globals.active_op_array));

  info.opcode = free_opcode;
  info.var_type = loop_var->op_type;
  info.var_num = loop_var->u.op.var;
  info.u.live_range_offset = zend_start_live_range((compiler_globals.active_op_array), start);
  brk_cont_element->start = start;
 } else {
  info.opcode = 0;


  brk_cont_element->start = -1;
 }

 zend_stack_push(&(compiler_globals.loop_var_stack), &info);
}


static inline void zend_end_loop(int cont_addr, const znode *var_node)
{
 uint32_t end = get_next_op_number((compiler_globals.active_op_array));
 zend_brk_cont_element *brk_cont_element
  = &(compiler_globals.context).brk_cont_array[(compiler_globals.context).current_brk_cont];
 brk_cont_element->cont = cont_addr;
 brk_cont_element->brk = end;
 (compiler_globals.context).current_brk_cont = brk_cont_element->parent;

 if (brk_cont_element->start != -1) {
  zend_loop_var *loop_var = zend_stack_top(&(compiler_globals.loop_var_stack));
  zend_end_live_range((compiler_globals.active_op_array), loop_var->u.live_range_offset, end,
   loop_var->opcode == 127 ? 1 : 0,
   var_node->u.op.var);
 }

 zend_stack_del_top(&(compiler_globals.loop_var_stack));
}


void zend_do_free(znode *op1)
{
 if (op1->op_type == (1<<1)) {
  zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];

  while (opline->opcode == 58) {
   opline--;
  }

  if (opline->result_type == (1<<1) && opline->result.var == op1->u.op.var) {
   if (opline->opcode == 52 || opline->opcode == 13) {
    return;
   }
  }

  zend_emit_op(((void *)0), 70, op1, ((void *)0));
 } else if (op1->op_type == (1<<2)) {
  zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];
  while (opline->opcode == 58 ||
    opline->opcode == 103 ||
    opline->opcode == 137) {
   opline--;
  }
  if (opline->result_type == (1<<2)
   && opline->result.var == op1->u.op.var) {
   if (opline->opcode == 80 ||
       opline->opcode == 81 ||
       opline->opcode == 82 ||
       opline->opcode == 173) {



    zend_emit_op(((void *)0), 70, op1, ((void *)0));
   } else {
    opline->result_type = (1<<3);
   }
  } else {
   while (opline >= (compiler_globals.active_op_array)->opcodes) {
    if (opline->opcode == 98 &&
        opline->op1_type == (1<<2) &&
        opline->op1.var == op1->u.op.var) {
     zend_emit_op(((void *)0), 70, op1, ((void *)0));
     return;
    }
    if (opline->result_type == (1<<2)
     && opline->result.var == op1->u.op.var) {
     if (opline->opcode == 68) {
      zend_emit_op(((void *)0), 70, op1, ((void *)0));
     }
     break;
    }
    opline--;
   }
  }
 } else if (op1->op_type == (1<<0)) {



  _zval_ptr_dtor_nogc((&op1->u.constant) );
 }
}


uint32_t zend_add_class_modifier(uint32_t flags, uint32_t new_flag)
{
 uint32_t new_flags = flags | new_flag;
 if ((flags & 0x20) && (new_flag & 0x20)) {
  zend_error_noreturn((1<<6L), "Multiple abstract modifiers are not allowed");
 }
 if ((flags & 0x04) && (new_flag & 0x04)) {
  zend_error_noreturn((1<<6L), "Multiple final modifiers are not allowed");
 }
 if ((new_flags & 0x20) && (new_flags & 0x04)) {
  zend_error_noreturn((1<<6L), "Cannot use the final modifier on an abstract class");
 }
 return new_flags;
}


uint32_t zend_add_member_modifier(uint32_t flags, uint32_t new_flag)
{
 uint32_t new_flags = flags | new_flag;
 if ((flags & (0x100 | 0x200 | 0x400)) && (new_flag & (0x100 | 0x200 | 0x400))) {
  zend_error_noreturn((1<<6L), "Multiple access type modifiers are not allowed");
 }
 if ((flags & 0x02) && (new_flag & 0x02)) {
  zend_error_noreturn((1<<6L), "Multiple abstract modifiers are not allowed");
 }
 if ((flags & 0x01) && (new_flag & 0x01)) {
  zend_error_noreturn((1<<6L), "Multiple static modifiers are not allowed");
 }
 if ((flags & 0x04) && (new_flag & 0x04)) {
  zend_error_noreturn((1<<6L), "Multiple final modifiers are not allowed");
 }
 if ((new_flags & 0x02) && (new_flags & 0x04)) {
  zend_error_noreturn((1<<6L), "Cannot use the final modifier on an abstract class member");
 }
 return new_flags;
}


zend_string *zend_concat3(char *str1, size_t str1_len, char *str2, size_t str2_len, char *str3, size_t str3_len)
{
 size_t len = str1_len + str2_len + str3_len;
 zend_string *res = zend_string_alloc(len, 0);

 memcpy((res)->val, str1, str1_len);
 memcpy((res)->val + str1_len, str2, str2_len);
 memcpy((res)->val + str1_len + str2_len, str3, str3_len);
 (res)->val[len] = '\0';

 return res;
}

zend_string *zend_concat_names(char *name1, size_t name1_len, char *name2, size_t name2_len) {
 return zend_concat3(name1, name1_len, "\\", 1, name2, name2_len);
}

zend_string *zend_prefix_with_ns(zend_string *name) {
 if (((compiler_globals.file_context).current_namespace)) {
  zend_string *ns = ((compiler_globals.file_context).current_namespace);
  return zend_concat_names((ns)->val, (ns)->len, (name)->val, (name)->len);
 } else {
  return zend_string_copy(name);
 }
}

void *zend_hash_find_ptr_lc(HashTable *ht, const char *str, size_t len) {
 void *result;
 zend_string *lcname;
 zend_bool use_heap;;

 do { (lcname) = (zend_string *)(((use_heap) = (__builtin_expect(!!((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) > ((32 * 1024))), 0))) ? (__builtin_constant_p((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) ) ? (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 8) ? _emalloc_8() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 16) ? _emalloc_16() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 24) ? _emalloc_24() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 32) ? _emalloc_32() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 40) ? _emalloc_40() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 48) ? _emalloc_48() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 56) ? _emalloc_56() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 64) ? _emalloc_64() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 80) ? _emalloc_80() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 96) ? _emalloc_96() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 112) ? _emalloc_112() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 128) ? _emalloc_128() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 160) ? _emalloc_160() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 192) ? _emalloc_192() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 224) ? _emalloc_224() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 256) ? _emalloc_256() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 320) ? _emalloc_320() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 384) ? _emalloc_384() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 448) ? _emalloc_448() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 512) ? _emalloc_512() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 640) ? _emalloc_640() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 768) ? _emalloc_768() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 896) ? _emalloc_896() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1024) ? _emalloc_1024() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1280) ? _emalloc_1280() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1536) ? _emalloc_1536() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 1792) ? _emalloc_1792() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 2048) ? _emalloc_2048() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 2560) ? _emalloc_2560() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= 3072) ? _emalloc_3072() : (((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L)))) : _emalloc_huge((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L))) ) ) : __builtin_alloca (((((((zend_long) (((char *) (&(((zend_string*)((void *)0))->val))) - ((char *) ((void *)0)))) + len + 1)) + ((8) - 1L)) & ~((8) - 1L)))); (lcname)->gc.refcount = 1; (lcname)->gc.u.type_info = 6; zend_string_forget_hash_val(lcname); (lcname)->len = len; } while (0);
 zend_str_tolower_copy((lcname)->val, str, len);
 result = zend_hash_find_ptr(ht, lcname);
 do { if (__builtin_expect(!!(use_heap), 0)) _efree((lcname) ); } while (0);

 return result;
}

zend_string *zend_resolve_non_class_name(
 zend_string *name, uint32_t type, zend_bool *is_fully_qualified,
 zend_bool case_sensitive, HashTable *current_import_sub
) {
 char *compound;
 *is_fully_qualified = 0;

 if ((name)->val[0] == '\\') {

  *is_fully_qualified = 1;
  return zend_string_init((name)->val + 1, (name)->len - 1, 0);
 }

 if (type == 0) {
  *is_fully_qualified = 1;
  return zend_string_copy(name);
 }

 if (type == 2) {
  *is_fully_qualified = 1;
  return zend_prefix_with_ns(name);
 }

 if (current_import_sub) {

  zend_string *import_name;
  if (case_sensitive) {
   import_name = zend_hash_find_ptr(current_import_sub, name);
  } else {
   import_name = zend_hash_find_ptr_lc(current_import_sub, (name)->val, (name)->len);
  }

  if (import_name) {
   *is_fully_qualified = 1;
   return zend_string_copy(import_name);
  }
 }

 compound = memchr((name)->val, '\\', (name)->len);
 if (compound) {
  *is_fully_qualified = 1;
 }

 if (compound && ((compiler_globals.file_context).imports)) {

  size_t len = compound - (name)->val;
  zend_string *import_name = zend_hash_find_ptr_lc(((compiler_globals.file_context).imports), (name)->val, len);

  if (import_name) {
   return zend_concat_names(
    (import_name)->val, (import_name)->len, (name)->val + len + 1, (name)->len - len - 1);
  }
 }

 return zend_prefix_with_ns(name);
}


zend_string *zend_resolve_function_name(zend_string *name, uint32_t type, zend_bool *is_fully_qualified)
{
 return zend_resolve_non_class_name(
  name, type, is_fully_qualified, 0, ((compiler_globals.file_context).imports_function));
}


zend_string *zend_resolve_const_name(zend_string *name, uint32_t type, zend_bool *is_fully_qualified) {
 return zend_resolve_non_class_name(
  name, type, is_fully_qualified, 1, ((compiler_globals.file_context).imports_const));
}


zend_string *zend_resolve_class_name(zend_string *name, uint32_t type)
{
 char *compound;

 if (type == 2) {
  return zend_prefix_with_ns(name);
 }

 if (type == 0 || (name)->val[0] == '\\') {

  if ((name)->val[0] == '\\') {
   name = zend_string_init((name)->val + 1, (name)->len - 1, 0);
  } else {
   zend_string_addref(name);
  }

  if (0 != zend_get_class_fetch_type(name)) {
   zend_error_noreturn((1<<6L), "'\\%s' is an invalid class name", (name)->val);
  }
  return name;
 }

 if (((compiler_globals.file_context).imports)) {
  compound = memchr((name)->val, '\\', (name)->len);
  if (compound) {

   size_t len = compound - (name)->val;
   zend_string *import_name =
    zend_hash_find_ptr_lc(((compiler_globals.file_context).imports), (name)->val, len);

   if (import_name) {
    return zend_concat_names(
     (import_name)->val, (import_name)->len, (name)->val + len + 1, (name)->len - len - 1);
   }
  } else {

   zend_string *import_name
    = zend_hash_find_ptr_lc(((compiler_globals.file_context).imports), (name)->val, (name)->len);

   if (import_name) {
    return zend_string_copy(import_name);
   }
  }
 }


 return zend_prefix_with_ns(name);
}


zend_string *zend_resolve_class_name_ast(zend_ast *ast)
{
 zval *class_name = zend_ast_get_zval(ast);
 if (zval_get_type(&(*(class_name))) != 6) {
  zend_error_noreturn((1<<6L), "Illegal class name");
 }
 return zend_resolve_class_name((*(class_name)).value.str, ast->attr);
}


static void label_ptr_dtor(zval *zv)
{
 do { if (__builtin_constant_p(sizeof(zend_label))) { if (sizeof(zend_label) <= 8) { _efree_8((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 16) { _efree_16((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 24) { _efree_24((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 32) { _efree_32((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 40) { _efree_40((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 48) { _efree_48((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 56) { _efree_56((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 64) { _efree_64((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 80) { _efree_80((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 96) { _efree_96((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 112) { _efree_112((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 128) { _efree_128((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 160) { _efree_160((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 192) { _efree_192((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 224) { _efree_224((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 256) { _efree_256((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 320) { _efree_320((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 384) { _efree_384((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 448) { _efree_448((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 512) { _efree_512((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 640) { _efree_640((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 768) { _efree_768((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 896) { _efree_896((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 1024) { _efree_1024((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 1280) { _efree_1280((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 1536) { _efree_1536((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 1792) { _efree_1792((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 2048) { _efree_2048((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 2560) { _efree_2560((*(zv)).value.ptr); } else if (sizeof(zend_label) <= 3072) { _efree_3072((*(zv)).value.ptr); } else if (sizeof(zend_label) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) { _efree_large((*(zv)).value.ptr, sizeof(zend_label)); } else { _efree_huge((*(zv)).value.ptr, sizeof(zend_label)); } } else { _efree((*(zv)).value.ptr); } } while (0);
}


static void str_dtor(zval *zv) {
 zend_string_release((*(zv)).value.str);
}


static zend_bool zend_is_call(zend_ast *ast);

static uint32_t zend_add_try_element(uint32_t try_op)
{
 zend_op_array *op_array = (compiler_globals.active_op_array);
 uint32_t try_catch_offset = op_array->last_try_catch++;
 zend_try_catch_element *elem;

 op_array->try_catch_array = _safe_erealloc((op_array->try_catch_array), (sizeof(zend_try_catch_element)), (op_array->last_try_catch), (0) )
                                                                                         ;

 elem = &op_array->try_catch_array[try_catch_offset];
 elem->try_op = try_op;
 elem->catch_op = 0;
 elem->finally_op = 0;
 elem->finally_end = 0;

 return try_catch_offset;
}


__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function)
{
 if (function->type == 2) {
  zend_op_array *op_array = &function->op_array;

  if (op_array->refcount) {
   (*op_array->refcount)++;
  }
  if (op_array->static_variables) {
   if (!((op_array->static_variables)->gc.u.v.flags & (1<<1))) {
    (op_array->static_variables)->gc.refcount++;
   }
  }
  op_array->run_time_cache = ((void *)0);
 } else if (function->type == 1) {
  if (function->common.function_name) {
   zend_string_addref(function->common.function_name);
  }
 }
}


__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, const zend_op *opline, HashTable *function_table, zend_bool compile_time)
{
 zend_function *function, *new_function;
 zval *lcname, *rtd_key;

 if (compile_time) {
  lcname = ((op_array)->literals + (opline->op1.constant));
  rtd_key = lcname + 1;
 } else {
  lcname = ((zval*)(((char*)((op_array)->literals)) + (opline->op1).constant));
  rtd_key = lcname + 1;
 }

 function = zend_hash_find_ptr(function_table, (*(rtd_key)).value.str);
 new_function = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
 memcpy(new_function, function, sizeof(zend_op_array));
 if (zend_hash_add_ptr(function_table, (*(lcname)).value.str, new_function) == ((void *)0)) {
  int error_level = compile_time ? (1<<6L) : (1<<0L);
  zend_function *old_function;

  if ((old_function = zend_hash_find_ptr(function_table, (*(lcname)).value.str)) != ((void *)0)
   && old_function->type == 2
   && old_function->op_array.last > 0) {
   zend_error_noreturn(error_level, "Cannot redeclare %s() (previously declared in %s:%d)",
      (function->common.function_name)->val,
      (old_function->op_array.filename)->val,
      old_function->op_array.opcodes[0].lineno);
  } else {
   zend_error_noreturn(error_level, "Cannot redeclare %s()", (function->common.function_name)->val);
  }
  return FAILURE;
 } else {
  if (function->op_array.refcount) {
   (*function->op_array.refcount)++;
  }
  function->op_array.static_variables = ((void *)0);
  return SUCCESS;
 }
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array* op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time)
{
 zend_class_entry *ce;
 zval *lcname, *rtd_key;

 if (compile_time) {
  lcname = ((op_array)->literals + (opline->op1.constant));
  rtd_key = lcname + 1;
 } else {
  lcname = ((zval*)(((char*)((op_array)->literals)) + (opline->op1).constant));
  rtd_key = lcname + 1;
 }
 if ((ce = zend_hash_find_ptr(class_table, (*(rtd_key)).value.str)) == ((void *)0)) {
  zend_error_noreturn((1<<6L), "Internal Zend error - Missing class information for %s", ((*(rtd_key)).value.str)->val);
  return ((void *)0);
 }
 ce->refcount++;
 if (zend_hash_add_ptr(class_table, (*(lcname)).value.str, ce) == ((void *)0)) {
  ce->refcount--;
  if (!compile_time) {





   zend_error_noreturn((1<<6L), "Cannot declare %s %s, because the name is already in use", zend_get_object_type(ce), (ce->name)->val);
  }
  return ((void *)0);
 } else {
  if (!(ce->ce_flags & (0x40|0x80000|0x400000))) {
   zend_verify_abstract_class(ce);
  }
  return ce;
 }
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time)
{
 zend_class_entry *ce;
 zval *lcname, *rtd_key;

 if (compile_time) {
  lcname = ((op_array)->literals + (opline->op1.constant));
  rtd_key = lcname + 1;
 } else {
  lcname = ((zval*)(((char*)((op_array)->literals)) + (opline->op1).constant));
  rtd_key = lcname + 1;
 }

 ce = zend_hash_find_ptr(class_table, (*(rtd_key)).value.str);

 if (!ce) {
  if (!compile_time) {





   zend_error_noreturn((1<<6L), "Cannot declare  %s, because the name is already in use", zend_get_object_type(((*(lcname)).value.obj->ce)), ((*(lcname)).value.str)->val);
  }
  return ((void *)0);
 }

 if (zend_hash_exists(class_table, (*(lcname)).value.str)) {
  zend_error_noreturn((1<<6L), "Cannot declare %s %s, because the name is already in use", zend_get_object_type(ce), (ce->name)->val);
 }

 zend_do_inheritance(ce, parent_ce);

 ce->refcount++;


 if (zend_hash_add_ptr(class_table, (*(lcname)).value.str, ce) == ((void *)0)) {
  zend_error_noreturn((1<<6L), "Cannot declare %s %s, because the name is already in use", zend_get_object_type(ce), (ce->name)->val);
 }
 return ce;
}


void zend_do_early_binding(void)
{
 zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];
 HashTable *table;

 while (opline->opcode == 105 && opline > (compiler_globals.active_op_array)->opcodes) {
  opline--;
 }

 switch (opline->opcode) {
  case 141:
   if (do_bind_function((compiler_globals.active_op_array), opline, (compiler_globals.function_table), 1) == FAILURE) {
    return;
   }
   table = (compiler_globals.function_table);
   break;
  case 139:
   if (do_bind_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), 1) == ((void *)0)) {
    return;
   }
   table = (compiler_globals.class_table);
   break;
  case 140:
   {
    zend_op *fetch_class_opline = opline-1;
    zval *parent_name;
    zend_class_entry *ce;

    parent_name = (((compiler_globals.active_op_array))->literals + ((fetch_class_opline->op2).constant));
    if (((ce = zend_lookup_class_ex((*(parent_name)).value.str, parent_name + 1, 0)) == ((void *)0)) ||
        (((compiler_globals.compiler_options) & (1<<3)) &&
         (ce->type == 1))) {
     if ((compiler_globals.compiler_options) & (1<<4)) {
      uint32_t *opline_num = &(compiler_globals.active_op_array)->early_binding;

      while (*opline_num != (uint32_t)-1) {
       opline_num = &(compiler_globals.active_op_array)->opcodes[*opline_num].result.opline_num;
      }
      *opline_num = opline - (compiler_globals.active_op_array)->opcodes;
      opline->opcode = 145;
      opline->result_type = (1<<3);
      opline->result.opline_num = -1;
     }
     return;
    }
    if (do_bind_inherited_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), ce, 1) == ((void *)0)) {
     return;
    }

    zend_del_literal((compiler_globals.active_op_array), fetch_class_opline->op2.constant);
    do { (fetch_class_opline)->op1.num = 0; (fetch_class_opline)->op2.num = 0; (fetch_class_opline)->result.num = 0; (fetch_class_opline)->opcode = 0; (fetch_class_opline)->op1_type = (1<<3); (fetch_class_opline)->op2_type = (1<<3); (fetch_class_opline)->result_type = (1<<3); } while (0);

    table = (compiler_globals.class_table);
    break;
   }
  case 146:
  case 144:
  case 154:
  case 155:


   return;
  default:
   zend_error_noreturn((1<<6L), "Invalid binding type");
   return;
 }

 zend_hash_del(table, (*((((compiler_globals.active_op_array))->literals + ((opline->op1).constant))+1)).value.str);
 zend_del_literal((compiler_globals.active_op_array), opline->op1.constant+1);
 zend_del_literal((compiler_globals.active_op_array), opline->op1.constant);
 do { (opline)->op1.num = 0; (opline)->op2.num = 0; (opline)->result.num = 0; (opline)->opcode = 0; (opline)->op1_type = (1<<3); (opline)->op2_type = (1<<3); (opline)->result_type = (1<<3); } while (0);
}


static void zend_mark_function_as_generator()
{
 if (!(compiler_globals.active_op_array)->function_name) {
  zend_error_noreturn((1<<6L),
   "The \"yield\" expression can only be used inside a function");
 }

 if ((compiler_globals.active_op_array)->fn_flags & 0x40000000) {
  const char *msg = "Generators may only declare a return type of Generator, Iterator or Traversable, %s is not permitted";
  zend_arg_info return_info = (compiler_globals.active_op_array)->arg_info[-1];

  if (!return_info.class_name) {
   zend_error_noreturn((1<<6L), msg, zend_get_type_by_const(return_info.type_hint));
  }

  if (!((return_info.class_name)->len == sizeof("Traversable") - 1 && !zend_binary_strcasecmp((return_info.class_name)->val, (return_info.class_name)->len, ("Traversable"), sizeof("Traversable") - 1))
   && !((return_info.class_name)->len == sizeof("Iterator") - 1 && !zend_binary_strcasecmp((return_info.class_name)->val, (return_info.class_name)->len, ("Iterator"), sizeof("Iterator") - 1))
   && !((return_info.class_name)->len == sizeof("Generator") - 1 && !zend_binary_strcasecmp((return_info.class_name)->val, (return_info.class_name)->len, ("Generator"), sizeof("Generator") - 1))) {
   zend_error_noreturn((1<<6L), msg, (return_info.class_name)->val);
  }
 }

 (compiler_globals.active_op_array)->fn_flags |= 0x800000;
}


__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array)
{
 if (op_array->early_binding != (uint32_t)-1) {
  zend_bool orig_in_compilation = (compiler_globals.in_compilation);
  uint32_t opline_num = op_array->early_binding;
  zend_class_entry *ce;

  (compiler_globals.in_compilation) = 1;
  while (opline_num != (uint32_t)-1) {
   zval *parent_name = ((zval*)(((char*)((op_array)->literals)) + (op_array->opcodes[opline_num-1].op2).constant));
   if ((ce = zend_lookup_class_ex((*(parent_name)).value.str, parent_name + 1, 0)) != ((void *)0)) {
    do_bind_inherited_class(op_array, &op_array->opcodes[opline_num], (executor_globals.class_table), ce, 0);
   }
   opline_num = op_array->opcodes[opline_num].result.opline_num;
  }
  (compiler_globals.in_compilation) = orig_in_compilation;
 }
}


__attribute__ ((visibility("default"))) zend_string *zend_mangle_property_name(const char *src1, size_t src1_length, const char *src2, size_t src2_length, int internal)
{
 size_t prop_name_length = 1 + src1_length + 1 + src2_length;
 zend_string *prop_name = zend_string_alloc(prop_name_length, internal);

 (prop_name)->val[0] = '\0';
 memcpy((prop_name)->val + 1, src1, src1_length+1);
 memcpy((prop_name)->val + 1 + src1_length + 1, src2, src2_length+1);
 return prop_name;
}


static inline __attribute__((always_inline)) size_t zend_strnlen(const char* s, size_t maxlen)
{
 size_t len = 0;
 while (*s++ && maxlen--) len++;
 return len;
}


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const zend_string *name, const char **class_name, const char **prop_name, size_t *prop_len)
{
 size_t class_name_len;
 size_t anonclass_src_len;

 *class_name = ((void *)0);

 if (!(name)->len || (name)->val[0] != '\0') {
  *prop_name = (name)->val;
  if (prop_len) {
   *prop_len = (name)->len;
  }
  return SUCCESS;
 }
 if ((name)->len < 3 || (name)->val[1] == '\0') {
  zend_error((1<<3L), "Illegal member variable name");
  *prop_name = (name)->val;
  if (prop_len) {
   *prop_len = (name)->len;
  }
  return FAILURE;
 }

 class_name_len = zend_strnlen((name)->val + 1, (name)->len - 2);
 if (class_name_len >= (name)->len - 2 || (name)->val[class_name_len + 1] != '\0') {
  zend_error((1<<3L), "Corrupt member variable name");
  *prop_name = (name)->val;
  if (prop_len) {
   *prop_len = (name)->len;
  }
  return FAILURE;
 }

 *class_name = (name)->val + 1;
 anonclass_src_len = zend_strnlen(*class_name + class_name_len + 1, (name)->len - class_name_len - 2);
 if (class_name_len + anonclass_src_len + 2 != (name)->len) {
  class_name_len += anonclass_src_len + 1;
 }
 *prop_name = (name)->val + class_name_len + 2;
 if (prop_len) {
  *prop_len = (name)->len - class_name_len - 2;
 }
 return SUCCESS;
}


static zend_constant *zend_lookup_reserved_const(const char *name, size_t len)
{
 zend_constant *c = zend_hash_find_ptr_lc((executor_globals.zend_constants), name, len);
 if (c && !(c->flags & (1<<0)) && (c->flags & (1<<2))) {
  return c;
 }
 return ((void *)0);
}


static zend_bool zend_try_ct_eval_const(zval *zv, zend_string *name, zend_bool is_fully_qualified)
{
 zend_constant *c;


 c = zend_hash_find_ptr((executor_globals.zend_constants), name);
 if (c && (
       ((c->flags & (1<<1)) && !((compiler_globals.compiler_options) & (1<<7)))
    || (zval_get_type(&(c->value)) < 8 && !((compiler_globals.compiler_options) & (1<<5)))
 )) {
  do { zval *_z1 = (zv); const zval *_z2 = (&c->value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & (((1<<2)|(1<<1)) << 8)) != 0) { if ((_t & (((1<<4)|(1<<1)) << 8)) != 0) { _zval_copy_ctor_func(_z1 ); } else { (_gc)->gc.refcount++; } } } while (0);
  return 1;
 }

 {

  const char *lookup_name = (name)->val;
  size_t lookup_len = (name)->len;

  if (!is_fully_qualified) {
   zend_get_unqualified_name(name, &lookup_name, &lookup_len);
  }

  c = zend_lookup_reserved_const(lookup_name, lookup_len);
  if (c) {
   do { zval *_z1 = (zv); const zval *_z2 = (&c->value); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & (((1<<2)|(1<<1)) << 8)) != 0) { if ((_t & (((1<<4)|(1<<1)) << 8)) != 0) { _zval_copy_ctor_func(_z1 ); } else { (_gc)->gc.refcount++; } } } while (0);
   return 1;
  }
 }

 return 0;
}


static inline zend_bool zend_is_scope_known()
{
 if ((compiler_globals.active_op_array)->fn_flags & 0x100000) {

  return 0;
 }

 if (!(compiler_globals.active_class_entry)) {


  return (compiler_globals.active_op_array)->function_name != ((void *)0);
 }


 return ((compiler_globals.active_class_entry)->ce_flags & 0x80) == 0;
}


static inline zend_bool class_name_refers_to_active_ce(zend_string *class_name, uint32_t fetch_type)
{
 if (!(compiler_globals.active_class_entry)) {
  return 0;
 }
 if (fetch_type == 1 && zend_is_scope_known()) {
  return 1;
 }
 return fetch_type == 0
  && ((class_name)->len == ((compiler_globals.active_class_entry)->name)->len && !zend_binary_strcasecmp((class_name)->val, (class_name)->len, ((compiler_globals.active_class_entry)->name)->val, ((compiler_globals.active_class_entry)->name)->len));
}


uint32_t zend_get_class_fetch_type(zend_string *name)
{
 if (((name)->len == sizeof("self") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("self"), sizeof("self") - 1))) {
  return 1;
 } else if (((name)->len == sizeof("parent") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("parent"), sizeof("parent") - 1))) {
  return 2;
 } else if (((name)->len == sizeof("static") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("static"), sizeof("static") - 1))) {
  return 3;
 } else {
  return 0;
 }
}


static uint32_t zend_get_class_fetch_type_ast(zend_ast *name_ast)
{

 if (name_ast->attr == 0) {
  return 0;
 }

 return zend_get_class_fetch_type(zend_ast_get_str(name_ast));
}


static void zend_ensure_valid_class_fetch_type(uint32_t fetch_type)
{
 if (fetch_type != 0 && !(compiler_globals.active_class_entry) && zend_is_scope_known()) {
  zend_error_noreturn((1<<6L), "Cannot use \"%s\" when no class scope is active",
   fetch_type == 1 ? "self" :
   fetch_type == 2 ? "parent" : "static");
 }
}


static zend_bool zend_try_compile_const_expr_resolve_class_name(zval *zv, zend_ast *class_ast, zend_ast *name_ast, zend_bool constant)
{
 uint32_t fetch_type;

 if (name_ast->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 if (!((zend_ast_get_str(name_ast))->len == sizeof("class") - 1 && !zend_binary_strcasecmp((zend_ast_get_str(name_ast))->val, (zend_ast_get_str(name_ast))->len, ("class"), sizeof("class") - 1))) {
  return 0;
 }

 if (class_ast->kind != ZEND_AST_ZVAL) {
  zend_error_noreturn((1<<6L),
   "Dynamic class names are not allowed in compile-time ::class fetch");
 }

 fetch_type = zend_get_class_fetch_type(zend_ast_get_str(class_ast));
 zend_ensure_valid_class_fetch_type(fetch_type);

 switch (fetch_type) {
  case 1:
   if (constant || ((compiler_globals.active_class_entry) && zend_is_scope_known())) {
    do { zval *__z = (zv); zend_string *__s = ((compiler_globals.active_class_entry)->name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    do { (*(zv)).u1.type_info = 1; } while (0);
   }
   return 1;
  case 3:
  case 2:
   if (constant) {
    zend_error_noreturn((1<<6L),
     "%s::class cannot be used for compile-time class name resolution",
     fetch_type == 3 ? "static" : "parent"
    );
   } else {
    do { (*(zv)).u1.type_info = 1; } while (0);
   }
   return 1;
  case 0:
   do { zval *__z = (zv); zend_string *__s = (zend_resolve_class_name_ast(class_ast)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
   return 1;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


static zend_bool zend_try_ct_eval_class_const(zval *zv, zend_string *class_name, zend_string *name)
{
 uint32_t fetch_type = zend_get_class_fetch_type(class_name);
 zend_class_constant *cc;
 zval *c;

 if (class_name_refers_to_active_ce(class_name, fetch_type)) {
  cc = zend_hash_find_ptr(&(compiler_globals.active_class_entry)->constants_table, name);
 } else if (fetch_type == 0 && !((compiler_globals.compiler_options) & (1<<5))) {
  zend_class_entry *ce = zend_hash_find_ptr_lc((compiler_globals.class_table), (class_name)->val, (class_name)->len);
  if (ce) {
   cc = zend_hash_find_ptr(&ce->constants_table, name);
  } else {
   return 0;
  }
 } else {
  return 0;
 }

 if ((compiler_globals.compiler_options) & (1<<7)) {
  return 0;
 }

 if (!cc || !zend_verify_const_access(cc, (compiler_globals.active_class_entry))) {
  return 0;
 }

 c = &cc->value;


 if (zval_get_type(&(*(c))) < 8) {
  do { zval *_z1 = (zv); const zval *_z2 = (c); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & (((1<<2)|(1<<1)) << 8)) != 0) { if ((_t & (((1<<4)|(1<<1)) << 8)) != 0) { _zval_copy_ctor_func(_z1 ); } else { (_gc)->gc.refcount++; } } } while (0);
  return 1;
 }

 return 0;
}


static void zend_add_to_list(void *result, void *item)
{
 void** list = *(void**)result;
 size_t n = 0;

 if (list) {
  while (list[n]) {
   n++;
  }
 }

 list = _erealloc((list), (sizeof(void*) * (n+2)) );

 list[n] = item;
 list[n+1] = ((void *)0);

 *(void**)result = list;
}


void zend_do_extended_info(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array));

 opline->opcode = 101;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_begin(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array));

 opline->opcode = 102;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_end(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array));

 opline->opcode = 103;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


zend_bool zend_is_auto_global_str(char *name, size_t len) {
 zend_auto_global *auto_global;

 if ((auto_global = zend_hash_str_find_ptr((compiler_globals.auto_globals), name, len)) != ((void *)0)) {
  if (auto_global->armed) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name);
  }
  return 1;
 }
 return 0;
}


zend_bool zend_is_auto_global(zend_string *name)
{
 zend_auto_global *auto_global;

 if ((auto_global = zend_hash_find_ptr((compiler_globals.auto_globals), name)) != ((void *)0)) {
  if (auto_global->armed) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name);
  }
  return 1;
 }
 return 0;
}


int zend_register_auto_global(zend_string *name, zend_bool jit, zend_auto_global_callback auto_global_callback)
{
 zend_auto_global auto_global;
 int retval;

 auto_global.name = zend_new_interned_string(name);
 auto_global.auto_global_callback = auto_global_callback;
 auto_global.jit = jit;

 retval = zend_hash_add_mem((compiler_globals.auto_globals), auto_global.name, &auto_global, sizeof(zend_auto_global)) != ((void *)0) ? SUCCESS : FAILURE;

 zend_string_release(name);
 return retval;
}


__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void)
{
 zend_auto_global *auto_global;

 do { Bucket *_p = ((compiler_globals.auto_globals))->arData; Bucket *_end = _p + ((compiler_globals.auto_globals))->nNumUsed; for (; _p != _end; _p++) { zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; auto_global = (*(_z)).value.ptr; {
  if (auto_global->jit) {
   auto_global->armed = 1;
  } else if (auto_global->auto_global_callback) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name);
  } else {
   auto_global->armed = 0;
  }
 } } } while (0);
}


int zendlex(zend_parser_stack_elem *elem)
{
 zval zv;
 int retval;

 if ((compiler_globals.increment_lineno)) {
  (compiler_globals.zend_lineno)++;
  (compiler_globals.increment_lineno) = 0;
 }

again:
 do { (*(&zv)).u1.type_info = 0; } while (0);
 retval = lex_scan(&zv);
 if ((executor_globals.exception)) {
  return 392;
 }

 switch (retval) {
  case 377:
  case 378:
  case 379:
  case 382:
   goto again;

  case 381:
   if ((language_scanner_globals.yy_text)[(language_scanner_globals.yy_leng)-1] != '>') {
    (compiler_globals.increment_lineno) = 1;
   }
   retval = ';';
   break;
  case 380:
   retval = 328;
   break;
 }
 if (zval_get_type(&(zv)) != 0) {
  elem->ast = zend_ast_create_zval(&zv);
 }

 return retval;
}


__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers)
{
 zend_bool persistent_hashes = (ce->type == 1) ? 1 : 0;

 ce->refcount = 1;
 ce->ce_flags = 0x100000;

 if ((compiler_globals.compiler_options) & (1<<9)) {
  ce->ce_flags |= 0x1000000;
 }

 ce->default_properties_table = ((void *)0);
 ce->default_static_members_table = ((void *)0);
 _zend_hash_init_ex((&ce->properties_info), (8), ((persistent_hashes ? zend_destroy_property_info_internal : ((void *)0))), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->constants_table), (8), ((persistent_hashes ? zend_destroy_class_constant_internal : ((void *)0))), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->function_table), (8), (zend_function_dtor), (persistent_hashes), (0) );

 if (ce->type == 1) {
# 1752 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
  ce->static_members_table = ((void *)0);

 } else {
  ce->static_members_table = ce->default_static_members_table;
  ce->info.user.doc_comment = ((void *)0);
 }

 ce->default_properties_count = 0;
 ce->default_static_members_count = 0;

 if (nullify_handlers) {
  ce->constructor = ((void *)0);
  ce->destructor = ((void *)0);
  ce->clone = ((void *)0);
  ce->__get = ((void *)0);
  ce->__set = ((void *)0);
  ce->__unset = ((void *)0);
  ce->__isset = ((void *)0);
  ce->__call = ((void *)0);
  ce->__callstatic = ((void *)0);
  ce->__tostring = ((void *)0);
  ce->create_object = ((void *)0);
  ce->get_iterator = ((void *)0);
  ce->iterator_funcs.funcs = ((void *)0);
  ce->interface_gets_implemented = ((void *)0);
  ce->get_static_method = ((void *)0);
  ce->parent = ((void *)0);
  ce->num_interfaces = 0;
  ce->interfaces = ((void *)0);
  ce->num_traits = 0;
  ce->traits = ((void *)0);
  ce->trait_aliases = ((void *)0);
  ce->trait_precedences = ((void *)0);
  ce->serialize = ((void *)0);
  ce->unserialize = ((void *)0);
  ce->serialize_func = ((void *)0);
  ce->unserialize_func = ((void *)0);
  ce->__debugInfo = ((void *)0);
  if (ce->type == 1) {
   ce->info.internal.module = ((void *)0);
   ce->info.internal.builtin_functions = ((void *)0);
  }
 }
}


__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, uint32_t var)
{
 return op_array->vars[((uint32_t)(((zval*)(((char*)(((void *)0))) + ((int)(var)))) - (((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(0))))))];
}


zend_ast *zend_ast_append_str(zend_ast *left_ast, zend_ast *right_ast)
{
 zval *left_zv = zend_ast_get_zval(left_ast);
 zend_string *left = (*(left_zv)).value.str;
 zend_string *right = zend_ast_get_str(right_ast);

 zend_string *result;
 size_t left_len = (left)->len;
 size_t len = left_len + (right)->len + 1;

 result = zend_string_extend(left, len, 0);
 (result)->val[left_len] = '\\';
 memcpy(&(result)->val[left_len + 1], (right)->val, (right)->len);
 (result)->val[len] = '\0';
 zend_string_release(right);

 do { zval *__z = (left_zv); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 return left_ast;
}


void zend_verify_namespace(void)
{
 if (((compiler_globals.file_context).has_bracketed_namespaces) && !((compiler_globals.file_context).in_namespace)) {
  zend_error_noreturn((1<<6L), "No code may exist outside of namespace {}");
 }
}




__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len)
{
 register char *end = path + len - 1;
 unsigned int len_adjust = 0;
# 1874 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
 if (len == 0) {

  return 0;
 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {

  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }


 while (end >= path && !(*(end) == '/')) {
  end--;
 }
 if (end < path) {
# 1906 "/home/ct584/git/bughunter/repositories/php-src/Zend/zend_compile.c"
  path[0] = '.';
  path[1] = '\0';
  return 1 + len_adjust;

 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {
  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }
 *(end+1) = '\0';

 return (size_t)(end + 1 - path) + len_adjust;
}


static void zend_adjust_for_fetch_type(zend_op *opline, uint32_t type)
{
 zend_uchar factor = (opline->opcode == 173) ? 1 : 3;

 switch (type & 7) {
  case 0:
   return;
  case 1:
   opline->opcode += 1 * factor;
   return;
  case 2:
   opline->opcode += 2 * factor;
   return;
  case 3:
   opline->opcode += 3 * factor;
   return;
  case 4:
   opline->opcode += 4 * factor;
   opline->extended_value |= type >> 3;
   return;
  case 5:
   opline->opcode += 5 * factor;
   return;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


static inline void zend_make_var_result(znode *result, zend_op *opline)
{
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->result; } } while (0);
}


static inline void zend_make_tmp_result(znode *result, zend_op *opline)
{
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->result; } } while (0);
}


static void zend_find_live_range(zend_op *opline, zend_uchar type, uint32_t var)
{
 zend_op *def = opline;

 while (def != (compiler_globals.active_op_array)->opcodes) {
  def--;
  if (def->result_type == type && def->result.var == var) {
   if (def->opcode == 72 ||
       def->opcode == 55) {

    continue;
   } else if (def->opcode == 46 ||
              def->opcode == 47 ||
              def->opcode == 52 ||
              def->opcode == 13) {

    break;
   } else if (def->opcode == 139 ||
              def->opcode == 140 ||
              def->opcode == 145 ||
              def->opcode == 171 ||
              def->opcode == 172) {

    break;
   } else if (def->opcode == 162) {

    break;
   } else if (def->opcode == 68) {


    def = (compiler_globals.active_op_array)->opcodes + def->op2.opline_num - 1;
    if (def + 1 == opline) {
     break;
    }
   }

         zend_end_live_range((compiler_globals.active_op_array),
    zend_start_live_range_ex((compiler_globals.active_op_array),
     def + 1 - (compiler_globals.active_op_array)->opcodes),
    opline - (compiler_globals.active_op_array)->opcodes,
    0, var);
      break;
  }
 }
}


static inline __attribute__((always_inline)) int zend_is_def_range(zend_op *opline, zend_uchar type, uint32_t var)
{
 while (1) {
  if (opline->result_type == type && opline->result.var == var) {
   return opline->opcode != 72 &&
    opline->opcode != 55;
  } else if (opline->opcode == 137) {
   return (opline-1)->result_type == type &&
    (opline-1)->result.var == var;
  } else if (opline->opcode == 58 ||
             opline->opcode == 0 ||
             opline->opcode == 104 ||
             opline->opcode == 101 ||
             opline->opcode == 102 ||
             opline->opcode == 103 ||
             opline->opcode == 105) {
   opline--;
  } else {
   return 0;
  }
 }
}


static void zend_check_live_ranges(zend_op *opline)
{
 if ((opline->op1_type & ((1<<2)|(1<<1))) &&
  !zend_is_def_range(opline - 1, opline->op1_type, opline->op1.var)) {

  if (opline->opcode == 137) {
   if (!zend_is_def_range(opline - 2, opline->op1_type, opline->op1.var)) {
    zend_find_live_range(opline - 1, opline->op1_type, opline->op1.var);
   }
  } else if (opline->opcode == 113 ||
             opline->opcode == 68 ||
             opline->opcode == 181 ||
             opline->opcode == 144 ||
             opline->opcode == 154 ||
             opline->opcode == 155 ||
             opline->opcode == 146) {

  } else if (opline->opcode == 163) {

  } else if (opline->opcode == 48 ||
             opline->opcode == 78 ||
             opline->opcode == 126 ||
          opline->opcode == 127 ||
          opline->opcode == 55 ||
          opline->opcode == 56 ||
          opline->opcode == 58 ||
          opline->opcode == 98 ||
          opline->opcode == 124 ||
          opline->opcode == 182) {

  } else {
   zend_find_live_range(opline, opline->op1_type, opline->op1.var);
  }
 }

 if ((opline->op2_type & ((1<<2)|(1<<1))) &&
  !zend_is_def_range(opline - 1, opline->op2_type, opline->op2.var)) {

  if (opline->opcode == 137) {
   if (!zend_is_def_range(opline - 2, opline->op2_type, opline->op2.var)) {
    zend_find_live_range(opline-1, opline->op2_type, opline->op2.var);
   }
  } else if (opline->opcode == 173 ||
             opline->opcode == 174 ||
             opline->opcode == 175 ||
             opline->opcode == 176 ||
             opline->opcode == 177 ||
             opline->opcode == 178 ||
             opline->opcode == 179 ||
             opline->opcode == 180 ||
             opline->opcode == 138) {

  } else {
   zend_find_live_range(opline, opline->op2_type, opline->op2.var);
  }
 }
}


static zend_op *zend_emit_op(znode *result, zend_uchar opcode, znode *op1, znode *op2)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array));
 opline->opcode = opcode;

 if (op1 == ((void *)0)) {
  opline->op1_type = (1<<3);
 } else {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant); } else { opline->op1 = (op1)->u.op; } } while (0);
 }

 if (op2 == ((void *)0)) {
  opline->op2_type = (1<<3);
 } else {
  do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant); } else { opline->op2 = (op2)->u.op; } } while (0);
 }

 zend_check_live_ranges(opline);

 if (result) {
  zend_make_var_result(result, opline);
 }
 return opline;
}


static zend_op *zend_emit_op_tmp(znode *result, zend_uchar opcode, znode *op1, znode *op2)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array));
 opline->opcode = opcode;

 if (op1 == ((void *)0)) {
  opline->op1_type = (1<<3);
 } else {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant); } else { opline->op1 = (op1)->u.op; } } while (0);
 }

 if (op2 == ((void *)0)) {
  opline->op2_type = (1<<3);
 } else {
  do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant); } else { opline->op2 = (op2)->u.op; } } while (0);
 }

 zend_check_live_ranges(opline);

 if (result) {
  zend_make_tmp_result(result, opline);
 }

 return opline;
}


static void zend_emit_tick(void)
{
 zend_op *opline;


 if ((compiler_globals.active_op_array)->last && (compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last - 1].opcode == 105) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array));

 opline->opcode = 105;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 opline->extended_value = ((compiler_globals.file_context).declarables).ticks;
}


static inline zend_op *zend_emit_op_data(znode *value)
{
 return zend_emit_op(((void *)0), 137, value, ((void *)0));
}


static inline uint32_t zend_emit_jump(uint32_t opnum_target)
{
 uint32_t opnum = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = zend_emit_op(((void *)0), 42, ((void *)0), ((void *)0));
 opline->op1.opline_num = opnum_target;
 return opnum;
}


static inline uint32_t zend_emit_cond_jump(zend_uchar opcode, znode *cond, uint32_t opnum_target)
{
 uint32_t opnum = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = zend_emit_op(((void *)0), opcode, cond, ((void *)0));
 opline->op2.opline_num = opnum_target;
 return opnum;
}


static inline void zend_update_jump_target(uint32_t opnum_jump, uint32_t opnum_target)
{
 zend_op *opline = &(compiler_globals.active_op_array)->opcodes[opnum_jump];
 switch (opline->opcode) {
  case 42:
   opline->op1.opline_num = opnum_target;
   break;
  case 43:
  case 44:
  case 46:
  case 47:
  case 152:
   opline->op2.opline_num = opnum_target;
   break;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


static inline void zend_update_jump_target_to_next(uint32_t opnum_jump)
{
 zend_update_jump_target(opnum_jump, get_next_op_number((compiler_globals.active_op_array)));
}


static inline zend_op *zend_delayed_emit_op(znode *result, zend_uchar opcode, znode *op1, znode *op2)
{
 zend_op tmp_opline;
 init_op(&tmp_opline);
 tmp_opline.opcode = opcode;
 if (op1 == ((void *)0)) {
  tmp_opline.op1_type = (1<<3);
 } else {
  do { tmp_opline.op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { tmp_opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant); } else { tmp_opline.op1 = (op1)->u.op; } } while (0);
 }
 if (op2 == ((void *)0)) {
  tmp_opline.op2_type = (1<<3);
 } else {
  do { tmp_opline.op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { tmp_opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant); } else { tmp_opline.op2 = (op2)->u.op; } } while (0);
 }
 if (result) {
  zend_make_var_result(result, &tmp_opline);
 }

 zend_stack_push(&(compiler_globals.delayed_oplines_stack), &tmp_opline);
 return zend_stack_top(&(compiler_globals.delayed_oplines_stack));
}


static inline uint32_t zend_delayed_compile_begin(void)
{
 return zend_stack_count(&(compiler_globals.delayed_oplines_stack));
}


static zend_op *zend_delayed_compile_end(uint32_t offset)
{
 zend_op *opline = ((void *)0), *oplines = zend_stack_base(&(compiler_globals.delayed_oplines_stack));
 uint32_t i, count = zend_stack_count(&(compiler_globals.delayed_oplines_stack));

 do { if (__builtin_expect(!(count >= offset), 0)) __builtin_unreachable(); } while (0);
 for (i = offset; i < count; ++i) {
  opline = get_next_op((compiler_globals.active_op_array));
  memcpy(opline, &oplines[i], sizeof(zend_op));
  zend_check_live_ranges(opline);
 }
 (compiler_globals.delayed_oplines_stack).top = offset;
 return opline;
}


static void zend_emit_return_type_check(
  znode *expr, zend_arg_info *return_info, zend_bool implicit)
{

 if (return_info->type_hint == 18) {
  if (expr) {
   if (expr->op_type == (1<<0) && zval_get_type(&(expr->u.constant)) == 1) {
    zend_error_noreturn((1<<6L),
     "A void function must not return a value "
     "(did you mean \"return;\" instead of \"return null;\"?)");
   } else {
    zend_error_noreturn((1<<6L), "A void function must not return a value");
   }
  }

  return;
 }

 if (return_info->type_hint != 0) {
  zend_op *opline;

  if (!expr && !implicit) {
   if (return_info->allow_null) {
    zend_error_noreturn((1<<6L),
     "A function with return type must return a value "
     "(did you mean \"return null;\" instead of \"return;\"?)");
   } else {
    zend_error_noreturn((1<<6L),
     "A function with return type must return a value");
   }
  }

  if (expr && expr->op_type == (1<<0)) {
   if ((return_info->type_hint == zval_get_type(&(expr->u.constant)))
    ||((return_info->type_hint == 13)
     && (zval_get_type(&(expr->u.constant)) == 2
      || zval_get_type(&(expr->u.constant)) == 3))
    || (return_info->allow_null
     && zval_get_type(&(expr->u.constant)) == 1)) {

    return;
   }
  }

  opline = zend_emit_op(((void *)0), 124, expr, ((void *)0));
  if (expr && expr->op_type == (1<<0)) {
   opline->result_type = expr->op_type = (1<<1);
   opline->result.var = expr->u.op.var = get_temporary_variable((compiler_globals.active_op_array));
  }
  if (return_info->class_name) {
   opline->op2.num = (compiler_globals.active_op_array)->cache_size;
   (compiler_globals.active_op_array)->cache_size += sizeof(void*);
  } else {
   opline->op2.num = -1;
  }
 }
}


void zend_emit_final_return(int return_one)
{
 znode zn;
 zend_op *ret;
 zend_bool returns_reference = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 if ((compiler_globals.active_op_array)->fn_flags & 0x40000000
   && !((compiler_globals.active_op_array)->fn_flags & 0x800000)) {
  zend_emit_return_type_check(((void *)0), (compiler_globals.active_op_array)->arg_info - 1, 1);
 }

 zn.op_type = (1<<0);
 if (return_one) {
  { zval *__z = (&zn.u.constant); (*(__z)).value.lval = 1; (*(__z)).u1.type_info = 4; };
 } else {
  do { (*(&zn.u.constant)).u1.type_info = 1; } while (0);
 }

 ret = zend_emit_op(((void *)0), returns_reference ? 111 : 62, &zn, ((void *)0));
 ret->extended_value = -1;
}


static inline zend_bool zend_is_variable(zend_ast *ast)
{
 return ast->kind == ZEND_AST_VAR || ast->kind == ZEND_AST_DIM
  || ast->kind == ZEND_AST_PROP || ast->kind == ZEND_AST_STATIC_PROP
  || ast->kind == ZEND_AST_CALL || ast->kind == ZEND_AST_METHOD_CALL
  || ast->kind == ZEND_AST_STATIC_CALL;
}


static inline zend_bool zend_is_call(zend_ast *ast)
{
 return ast->kind == ZEND_AST_CALL
  || ast->kind == ZEND_AST_METHOD_CALL
  || ast->kind == ZEND_AST_STATIC_CALL;
}


static inline zend_bool zend_is_unticked_stmt(zend_ast *ast)
{
 return ast->kind == ZEND_AST_STMT_LIST || ast->kind == ZEND_AST_LABEL
  || ast->kind == ZEND_AST_PROP_DECL || ast->kind == ZEND_AST_CLASS_CONST_DECL
  || ast->kind == ZEND_AST_USE_TRAIT || ast->kind == ZEND_AST_METHOD;
}


static inline zend_bool zend_can_write_to_variable(zend_ast *ast)
{
 while (ast->kind == ZEND_AST_DIM || ast->kind == ZEND_AST_PROP) {
  ast = ast->child[0];
 }

 return zend_is_variable(ast);
}


static inline zend_bool zend_is_const_default_class_ref(zend_ast *name_ast)
{
 if (name_ast->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 return 0 == zend_get_class_fetch_type_ast(name_ast);
}


static inline void zend_handle_numeric_op(znode *node)
{
 if (node->op_type == (1<<0) && zval_get_type(&(node->u.constant)) == 6) {
  zend_ulong index;

  if (_zend_handle_numeric_str(((node->u.constant).value.str)->val, ((node->u.constant).value.str)->len, &index)) {
   _zval_ptr_dtor((&node->u.constant) );
   { zval *__z = (&node->u.constant); (*(__z)).value.lval = index; (*(__z)).u1.type_info = 4; };
  }
 }
}


static inline void zend_set_class_name_op1(zend_op *opline, znode *class_node)
{
 if (class_node->op_type == (1<<0)) {
  opline->op1_type = (1<<0);
  opline->op1.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node->u.constant).value.str);
 } else {
  do { opline->op1_type = (class_node)->op_type; if ((class_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(class_node)->u.constant); } else { opline->op1 = (class_node)->u.op; } } while (0);
 }
}


static zend_op *zend_compile_class_ref(znode *result, zend_ast *name_ast, int throw_exception)
{
 zend_op *opline;
 znode name_node;
 zend_compile_expr(&name_node, name_ast);

 if (name_node.op_type == (1<<0)) {
  zend_string *name;
  uint32_t fetch_type;

  if (zval_get_type(&(name_node.u.constant)) != 6) {
   zend_error_noreturn((1<<6L), "Illegal class name");
  }

  name = (name_node.u.constant).value.str;
  fetch_type = zend_get_class_fetch_type(name);

  opline = zend_emit_op(result, 109, ((void *)0), ((void *)0));
  opline->extended_value = fetch_type | (throw_exception ? 0x0200 : 0);

  if (fetch_type == 0) {
   uint32_t type = name_ast->kind == ZEND_AST_ZVAL ? name_ast->attr : 0;
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
    zend_resolve_class_name(name, type));
  } else {
   zend_ensure_valid_class_fetch_type(fetch_type);
  }

  zend_string_release(name);
 } else {
  opline = zend_emit_op(result, 109, ((void *)0), &name_node);
  opline->extended_value = 0 | (throw_exception ? 0x0200 : 0);
 }

 return opline;
}


static void zend_compile_class_ref_ex(znode *result, zend_ast *name_ast, uint32_t fetch_flags)
{
 uint32_t fetch_type;

 if (name_ast->kind != ZEND_AST_ZVAL) {
  znode name_node;

  zend_compile_expr(&name_node, name_ast);

  if (name_node.op_type == (1<<0)) {
   zend_string *name;

   if (zval_get_type(&(name_node.u.constant)) != 6) {
    zend_error_noreturn((1<<6L), "Illegal class name");
   }

   name = (name_node.u.constant).value.str;
   fetch_type = zend_get_class_fetch_type(name);

   if (fetch_type == 0) {
    result->op_type = (1<<0);
    do { zval *__z = (&result->u.constant); zend_string *__s = (zend_resolve_class_name(name, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
   } else {
    zend_ensure_valid_class_fetch_type(fetch_type);
    result->op_type = (1<<3);
    result->u.op.num = fetch_type | fetch_flags;
   }

   zend_string_release(name);
  } else {
   zend_op *opline = zend_emit_op(result, 109, ((void *)0), &name_node);
   opline->extended_value = 0 | fetch_flags;
  }
  return;
 }


 if (name_ast->attr == 0) {
  result->op_type = (1<<0);
  do { zval *__z = (&result->u.constant); zend_string *__s = (zend_resolve_class_name_ast(name_ast)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
  return;
 }

 fetch_type = zend_get_class_fetch_type(zend_ast_get_str(name_ast));
 if (0 == fetch_type) {
  result->op_type = (1<<0);
  do { zval *__z = (&result->u.constant); zend_string *__s = (zend_resolve_class_name_ast(name_ast)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
 } else {
  zend_ensure_valid_class_fetch_type(fetch_type);
  result->op_type = (1<<3);
  result->u.op.num = fetch_type | fetch_flags;
 }
}


static int zend_try_compile_cv(znode *result, zend_ast *ast)
{
 zend_ast *name_ast = ast->child[0];
 if (name_ast->kind == ZEND_AST_ZVAL) {
  zend_string *name = _zval_get_string((zend_ast_get_zval(name_ast)));

  if (zend_is_auto_global(name)) {
   zend_string_release(name);
   return FAILURE;
  }

  result->op_type = (1<<4);
  result->u.op.var = lookup_cv((compiler_globals.active_op_array), name);


  name = (compiler_globals.active_op_array)->vars[((uint32_t)(((zval*)(((char*)(((void *)0))) + ((int)(result->u.op.var)))) - (((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(0))))))];

  if (((name)->len == sizeof("this")-1 && !memcmp((name)->val, "this", sizeof("this") - 1))) {
   (compiler_globals.active_op_array)->this_var = result->u.op.var;
  }
  return SUCCESS;
 }

 return FAILURE;
}


static zend_op *zend_compile_simple_var_no_cv(znode *result, zend_ast *ast, uint32_t type, int delayed)
{
 zend_ast *name_ast = ast->child[0];
 znode name_node;
 zend_op *opline;

 zend_compile_expr(&name_node, name_ast);
 if (name_node.op_type == (1<<0)) {
  if (zval_get_type(&(*(&name_node.u.constant))) != 6) { _convert_to_string((&name_node.u.constant) ); };
 }

 if (delayed) {
  opline = zend_delayed_emit_op(result, 80, &name_node, ((void *)0));
 } else {
  opline = zend_emit_op(result, 80, &name_node, ((void *)0));
 }

 if (name_node.op_type == (1<<0) &&
     zend_is_auto_global((name_node.u.constant).value.str)) {

  opline->extended_value = 0x00000000;
 } else {
  opline->extended_value = 0x10000000;

  if (ast->kind != ZEND_AST_ZVAL
   && (compiler_globals.active_op_array)->scope && (compiler_globals.active_op_array)->this_var == (uint32_t)-1
  ) {
   zend_string *key = (compiler_globals.known_strings)[ZEND_STR_THIS];
   (compiler_globals.active_op_array)->this_var = lookup_cv((compiler_globals.active_op_array), key);
  }
 }

 return opline;
}


static void zend_compile_simple_var(znode *result, zend_ast *ast, uint32_t type, int delayed)
{
 if (zend_try_compile_cv(result, ast) == FAILURE) {
  zend_op *opline = zend_compile_simple_var_no_cv(result, ast, type, delayed);
  zend_adjust_for_fetch_type(opline, type);
 }
}


static void zend_separate_if_call_and_write(znode *node, zend_ast *ast, uint32_t type)
{
 if (type != 0 && type != 3 && zend_is_call(ast)) {
  if (node->op_type == (1<<2)) {
   zend_op *opline = zend_emit_op(((void *)0), 156, node, ((void *)0));
   opline->result_type = (1<<2);
   opline->result.var = opline->op1.var;
  } else {
   zend_error_noreturn((1<<6L), "Cannot use result of built-in function in write context");
  }
 }
}


void zend_delayed_compile_var(znode *result, zend_ast *ast, uint32_t type);
void zend_compile_assign(znode *result, zend_ast *ast);
static void zend_compile_list_assign(znode *result, zend_ast *ast, znode *expr_node, zend_bool old_style);

static inline void zend_emit_assign_znode(zend_ast *var_ast, znode *value_node)
{
 znode dummy_node;
 if (var_ast->kind == ZEND_AST_ARRAY) {
  zend_compile_list_assign(&dummy_node, var_ast, value_node, var_ast->attr);
 } else {
  zend_ast *assign_ast = zend_ast_create(ZEND_AST_ASSIGN, var_ast,
   zend_ast_create_znode(value_node));
  zend_compile_assign(&dummy_node, assign_ast);
 }
 zend_do_free(&dummy_node);
}


static zend_op *zend_delayed_compile_dim(znode *result, zend_ast *ast, uint32_t type)
{
 zend_ast *var_ast = ast->child[0];
 zend_ast *dim_ast = ast->child[1];

 znode var_node, dim_node;

 zend_delayed_compile_var(&var_node, var_ast, type);
 zend_separate_if_call_and_write(&var_node, var_ast, type);

 if (dim_ast == ((void *)0)) {
  if (type == 0 || type == 3) {
   zend_error_noreturn((1<<6L), "Cannot use [] for reading");
  }
  if (type == 5) {
   zend_error_noreturn((1<<6L), "Cannot use [] for unsetting");
  }
  dim_node.op_type = (1<<3);
 } else {
  zend_compile_expr(&dim_node, dim_ast);
  zend_handle_numeric_op(&dim_node);
 }

 return zend_delayed_emit_op(result, 81, &var_node, &dim_node);
}


static inline zend_op *zend_compile_dim_common(znode *result, zend_ast *ast, uint32_t type)
{
 uint32_t offset = zend_delayed_compile_begin();
 zend_delayed_compile_dim(result, ast, type);
 return zend_delayed_compile_end(offset);
}


void zend_compile_dim(znode *result, zend_ast *ast, uint32_t type)
{
 zend_op *opline = zend_compile_dim_common(result, ast, type);
 zend_adjust_for_fetch_type(opline, type);
}


static zend_bool is_this_fetch(zend_ast *ast)
{
 if (ast->kind == ZEND_AST_VAR && ast->child[0]->kind == ZEND_AST_ZVAL) {
  zval *name = zend_ast_get_zval(ast->child[0]);
  return zval_get_type(&(*(name))) == 6 && (((*(name)).value.str)->len == sizeof("this")-1 && !memcmp(((*(name)).value.str)->val, "this", sizeof("this") - 1));
 }

 return 0;
}


static zend_op *zend_delayed_compile_prop(znode *result, zend_ast *ast, uint32_t type)
{
 zend_ast *obj_ast = ast->child[0];
 zend_ast *prop_ast = ast->child[1];

 znode obj_node, prop_node;
 zend_op *opline;

 if (is_this_fetch(obj_ast)) {
  obj_node.op_type = (1<<3);
 } else {
  zend_delayed_compile_var(&obj_node, obj_ast, type);
  zend_separate_if_call_and_write(&obj_node, obj_ast, type);
 }
 zend_compile_expr(&prop_node, prop_ast);

 opline = zend_delayed_emit_op(result, 82, &obj_node, &prop_node);
 if (opline->op2_type == (1<<0)) {
  if (zval_get_type(&(*((((compiler_globals.active_op_array))->literals + ((opline->op2).constant))))) != 6) { _convert_to_string(((((compiler_globals.active_op_array))->literals + ((opline->op2).constant))) ); };
  zend_alloc_polymorphic_cache_slot(opline->op2.constant);
 }

 return opline;
}


static zend_op *zend_compile_prop_common(znode *result, zend_ast *ast, uint32_t type)
{
 uint32_t offset = zend_delayed_compile_begin();
 zend_delayed_compile_prop(result, ast, type);
 return zend_delayed_compile_end(offset);
}


void zend_compile_prop(znode *result, zend_ast *ast, uint32_t type)
{
 zend_op *opline = zend_compile_prop_common(result, ast, type);
 zend_adjust_for_fetch_type(opline, type);
}


zend_op *zend_compile_static_prop_common(znode *result, zend_ast *ast, uint32_t type, int delayed)
{
 zend_ast *class_ast = ast->child[0];
 zend_ast *prop_ast = ast->child[1];

 znode class_node, prop_node;
 zend_op *opline;

 zend_compile_class_ref_ex(&class_node, class_ast, 0x0200);

 zend_compile_expr(&prop_node, prop_ast);

 if (delayed) {
  opline = zend_delayed_emit_op(result, 173, &prop_node, ((void *)0));
 } else {
  opline = zend_emit_op(result, 173, &prop_node, ((void *)0));
 }
 if (opline->op1_type == (1<<0)) {
  if (zval_get_type(&(*((((compiler_globals.active_op_array))->literals + ((opline->op1).constant))))) != 6) { _convert_to_string(((((compiler_globals.active_op_array))->literals + ((opline->op1).constant))) ); };
  zend_alloc_polymorphic_cache_slot(opline->op1.constant);
 }
 if (class_node.op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node.u.constant).value.str);
 } else {
  do { opline->op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant); } else { opline->op2 = (&class_node)->u.op; } } while (0);
 }

 return opline;
}


void zend_compile_static_prop(znode *result, zend_ast *ast, uint32_t type, int delayed)
{
 zend_op *opline = zend_compile_static_prop_common(result, ast, type, delayed);
 zend_adjust_for_fetch_type(opline, type);
}


static void zend_verify_list_assign_target(zend_ast *var_ast, zend_bool old_style) {
 if (var_ast->kind == ZEND_AST_ARRAY) {
  if (old_style != var_ast->attr) {
   zend_error((1<<6L), "Cannot mix [] and list()");
  }
 } else if (!zend_can_write_to_variable(var_ast)) {
  zend_error((1<<6L), "Assignments can only happen to writable values");
 }
}


static void zend_compile_unkeyed_list_assign(zend_ast_list *list, znode *expr_node, zend_bool old_style)
{
 uint32_t i;
 zend_bool has_elems = 0;

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *var_ast;
  znode fetch_result, dim_node;

  if (elem_ast == ((void *)0)) {
   continue;
  }
  if (elem_ast->attr) {
   zend_error((1<<6L), "[] and list() assignments cannot be by reference");
  }

  var_ast = elem_ast->child[0];
  has_elems = 1;

  dim_node.op_type = (1<<0);
  { zval *__z = (&dim_node.u.constant); (*(__z)).value.lval = i; (*(__z)).u1.type_info = 4; };

  if (expr_node->op_type == (1<<0)) {
   do { if ((((*((&(expr_node->u.constant)))).u1.v.type_flags & (1<<2)) != 0)) { zval_addref_p((&(expr_node->u.constant))); } } while (0);
  }

  if (elem_ast->child[1] != ((void *)0)) {
   zend_error((1<<6L), "Cannot mix keyed and unkeyed array entries in assignments");
  }

  zend_verify_list_assign_target(var_ast, old_style);

  zend_emit_op(&fetch_result, 98, expr_node, &dim_node);
  zend_emit_assign_znode(var_ast, &fetch_result);
 }

 if (has_elems == 0) {
  zend_error_noreturn((1<<6L), "Cannot use empty list");
 }

}


static void zend_compile_keyed_list_assign(zend_ast_list *list, znode *expr_node, zend_bool old_style)
{
 uint32_t i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *pair_ast = list->child[i];
  zend_ast *var_ast = pair_ast->child[0];
  zend_ast *key_ast = pair_ast->child[1];
  znode fetch_result, dim_node;

  if (pair_ast->attr) {
   zend_error((1<<6L), "[] and list() assignments cannot be by reference");
  }

  zend_compile_expr(&dim_node, key_ast);

  if (expr_node->op_type == (1<<0)) {
   do { if ((((*((&(expr_node->u.constant)))).u1.v.type_flags & (1<<2)) != 0)) { zval_addref_p((&(expr_node->u.constant))); } } while (0);
  }

  if (var_ast == ((void *)0)) {
   zend_error((1<<6L), "Cannot use empty array entries in keyed array");
  }

  if (key_ast == ((void *)0)) {
   zend_error((1<<6L), "Cannot mix keyed and unkeyed array entries in assignments");
  }

  zend_verify_list_assign_target(var_ast, old_style);

  zend_emit_op(&fetch_result, 98, expr_node, &dim_node);
  zend_emit_assign_znode(var_ast, &fetch_result);
 }
}


static void zend_compile_list_assign(znode *result, zend_ast *ast, znode *expr_node, zend_bool old_style)
{
 zend_ast_list *list = zend_ast_get_list(ast);

 if (list->children > 0 && list->child[0] != ((void *)0) && list->child[0]->child[1] != ((void *)0) ) {
  zend_compile_keyed_list_assign(list, expr_node, old_style);
 } else {
  zend_compile_unkeyed_list_assign(list, expr_node, old_style);
 }

 *result = *expr_node;
}


static void zend_ensure_writable_variable(const zend_ast *ast)
{
 if (ast->kind == ZEND_AST_CALL) {
  zend_error_noreturn((1<<6L), "Can't use function return value in write context");
 }
 if (ast->kind == ZEND_AST_METHOD_CALL || ast->kind == ZEND_AST_STATIC_CALL) {
  zend_error_noreturn((1<<6L), "Can't use method return value in write context");
 }
}



zend_bool zend_is_assign_to_self(zend_ast *var_ast, zend_ast *expr_ast)
{
 if (expr_ast->kind != ZEND_AST_VAR || expr_ast->child[0]->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 while (zend_is_variable(var_ast) && var_ast->kind != ZEND_AST_VAR) {
  var_ast = var_ast->child[0];
 }

 if (var_ast->kind != ZEND_AST_VAR || var_ast->child[0]->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 {
  zend_string *name1 = _zval_get_string((zend_ast_get_zval(var_ast->child[0])));
  zend_string *name2 = _zval_get_string((zend_ast_get_zval(expr_ast->child[0])));
  zend_bool result = zend_string_equals(name1, name2);
  zend_string_release(name1);
  zend_string_release(name2);
  return result;
 }
}



zend_bool zend_list_has_assign_to(zend_ast *list_ast, zend_string *name)
{
 zend_ast_list *list = zend_ast_get_list(list_ast);
 uint32_t i;
 for (i = 0; i < list->children; i++) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *var_ast;

  if (!elem_ast) {
   continue;
  }
  var_ast = elem_ast->child[0];


  if (var_ast->kind == ZEND_AST_ARRAY && zend_list_has_assign_to(var_ast, name)) {
   return 1;
  }

  if (var_ast->kind == ZEND_AST_VAR && var_ast->child[0]->kind == ZEND_AST_ZVAL) {
   zend_string *var_name = _zval_get_string((zend_ast_get_zval(var_ast->child[0])));
   zend_bool result = zend_string_equals(var_name, name);
   zend_string_release(var_name);
   if (result) {
    return 1;
   }
  }
 }

 return 0;
}



zend_bool zend_list_has_assign_to_self(zend_ast *list_ast, zend_ast *expr_ast)
{

 if (expr_ast->kind == ZEND_AST_VAR && expr_ast->child[0]->kind == ZEND_AST_ZVAL) {
  zend_string *name = _zval_get_string((zend_ast_get_zval(expr_ast->child[0])));
  zend_bool result = zend_list_has_assign_to(list_ast, name);
  zend_string_release(name);
  return result;
 }
 return 0;
}


void zend_compile_assign(znode *result, zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 zend_ast *expr_ast = ast->child[1];

 znode var_node, expr_node;
 zend_op *opline;
 uint32_t offset;

 if (is_this_fetch(var_ast)) {
  zend_error_noreturn((1<<6L), "Cannot re-assign $this");
 }

 zend_ensure_writable_variable(var_ast);

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
  case ZEND_AST_STATIC_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_var(&var_node, var_ast, 1);
   zend_compile_expr(&expr_node, expr_ast);
   zend_delayed_compile_end(offset);
   zend_emit_op(result, 38, &var_node, &expr_node);
   return;
  case ZEND_AST_DIM:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_dim(result, var_ast, 1);

   if (zend_is_assign_to_self(var_ast, expr_ast)) {

    zend_compile_simple_var_no_cv(&expr_node, expr_ast, 0, 0);
   } else {
    zend_compile_expr(&expr_node, expr_ast);
   }

   opline = zend_delayed_compile_end(offset);
   opline->opcode = 147;

   opline = zend_emit_op_data(&expr_node);
   return;
  case ZEND_AST_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_prop(result, var_ast, 1);
   zend_compile_expr(&expr_node, expr_ast);

   opline = zend_delayed_compile_end(offset);
   opline->opcode = 136;

   zend_emit_op_data(&expr_node);
   return;
  case ZEND_AST_ARRAY:
   if (zend_list_has_assign_to_self(var_ast, expr_ast)) {

    zend_compile_simple_var_no_cv(&expr_node, expr_ast, 0, 0);
   } else {
    zend_compile_expr(&expr_node, expr_ast);
   }

   zend_compile_list_assign(result, var_ast, &expr_node, var_ast->attr);
   return;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;;
 }
}


void zend_compile_assign_ref(znode *result, zend_ast *ast)
{
 zend_ast *target_ast = ast->child[0];
 zend_ast *source_ast = ast->child[1];

 znode target_node, source_node;
 zend_op *opline;
 uint32_t offset;

 if (is_this_fetch(target_ast)) {
  zend_error_noreturn((1<<6L), "Cannot re-assign $this");
 }
 zend_ensure_writable_variable(target_ast);

 offset = zend_delayed_compile_begin();
 zend_delayed_compile_var(&target_node, target_ast, 1);
 zend_delayed_compile_var(&source_node, source_ast, 1);
 zend_delayed_compile_end(offset);

 if (source_node.op_type != (1<<2) && zend_is_call(source_ast)) {
  zend_error_noreturn((1<<6L), "Cannot use result of built-in function in write context");
 }

 opline = zend_emit_op(result, 39, &target_node, &source_node);

 if (zend_is_call(source_ast)) {
  opline->extended_value = 1<<0;
 }
}


static inline void zend_emit_assign_ref_znode(zend_ast *var_ast, znode *value_node)
{
 zend_ast *assign_ast = zend_ast_create(ZEND_AST_ASSIGN_REF, var_ast,
  zend_ast_create_znode(value_node));
 zend_compile_assign_ref(((void *)0), assign_ast);
}


void zend_compile_compound_assign(znode *result, zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 zend_ast *expr_ast = ast->child[1];
 uint32_t opcode = ast->attr;

 znode var_node, expr_node;
 zend_op *opline;
 uint32_t offset;

 zend_ensure_writable_variable(var_ast);

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
  case ZEND_AST_STATIC_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_var(&var_node, var_ast, 2);
   zend_compile_expr(&expr_node, expr_ast);
   zend_delayed_compile_end(offset);
   zend_emit_op(result, opcode, &var_node, &expr_node);
   return;
  case ZEND_AST_DIM:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_dim(result, var_ast, 2);
   zend_compile_expr(&expr_node, expr_ast);

   opline = zend_delayed_compile_end(offset);
   opline->opcode = opcode;
   opline->extended_value = 147;

   opline = zend_emit_op_data(&expr_node);
   return;
  case ZEND_AST_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_prop(result, var_ast, 2);
   zend_compile_expr(&expr_node, expr_ast);

   opline = zend_delayed_compile_end(offset);
   opline->opcode = opcode;
   opline->extended_value = 136;

   zend_emit_op_data(&expr_node);
   return;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


uint32_t zend_compile_args(zend_ast *ast, zend_function *fbc)
{
 zend_ast_list *args = zend_ast_get_list(ast);
 uint32_t i;
 zend_bool uses_arg_unpack = 0;
 uint32_t arg_count = 0;

 for (i = 0; i < args->children; ++i) {
  zend_ast *arg = args->child[i];
  uint32_t arg_num = i + 1;

  znode arg_node;
  zend_op *opline;
  zend_uchar opcode;

  if (arg->kind == ZEND_AST_UNPACK) {
   uses_arg_unpack = 1;
   fbc = ((void *)0);

   zend_compile_expr(&arg_node, arg->child[0]);
   opline = zend_emit_op(((void *)0), 165, &arg_node, ((void *)0));
   opline->op2.num = arg_count;
   opline->result.var = (uint32_t)(zend_intptr_t)(((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(arg_count)) - 1))));
   continue;
  }

  if (uses_arg_unpack) {
   zend_error_noreturn((1<<6L),
    "Cannot use positional argument after argument unpacking");
  }

  arg_count++;
  if (zend_is_variable(arg)) {
   if (zend_is_call(arg)) {
    zend_compile_var(&arg_node, arg, 0);
    if (arg_node.op_type & ((1<<0)|(1<<1))) {

     opcode = 65;
    } else {
     if (fbc) {
      if (zend_check_arg_send_type(fbc, arg_num, 1)) {
       opcode = 106;
      } else if (zend_check_arg_send_type(fbc, arg_num, 2)) {
       opcode = 65;
      } else {
       opcode = 117;
      }
     } else {
      opcode = 50;
     }
    }
   } else if (fbc) {
    if (zend_check_arg_send_type(fbc, arg_num, 1|2)) {
     zend_compile_var(&arg_node, arg, 1);
     opcode = 67;
    } else {
     zend_compile_var(&arg_node, arg, 0);
     opcode = 117;
    }
   } else {
    zend_compile_var(&arg_node, arg,
     4 | (arg_num << 3));
    opcode = 66;
   }
  } else {
   zend_compile_expr(&arg_node, arg);
   do { if (__builtin_expect(!(arg_node.op_type != (1<<4)), 0)) __builtin_unreachable(); } while (0);
   if (arg_node.op_type == (1<<2)) {

    if (fbc) {
     if (zend_check_arg_send_type(fbc, arg_num, 1)) {
      opcode = 106;
     } else if (zend_check_arg_send_type(fbc, arg_num, 2)) {
      opcode = 65;
     } else {
      opcode = 117;
     }
    } else {
     opcode = 50;
    }
   } else {
    if (fbc) {
     opcode = 65;
     if (zend_check_arg_send_type(fbc, arg_num, 1)) {
      zend_error_noreturn((1<<6L), "Only variables can be passed by reference");
     }
    } else {
     opcode = 116;
    }
   }
  }

  opline = zend_emit_op(((void *)0), opcode, &arg_node, ((void *)0));
  opline->op2.opline_num = arg_num;
  opline->result.var = (uint32_t)(zend_intptr_t)(((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(arg_num)) - 1))));
 }

 return arg_count;
}


__attribute__ ((visibility("default"))) zend_uchar zend_get_call_op(const zend_op *init_op, zend_function *fbc)
{
 if (fbc && init_op->opcode == 61) {
  if (fbc->type == 1) {
   if (!zend_execute_internal) {
    if (!(fbc->common.fn_flags & (0x02|0x40000|0x10000000|0x4000000))) {
     return 129;
    } else {
     return 131;
    }
   }
  } else {
   if (zend_execute_ex == execute_ex) {
    return 130;
   }
  }
 } else if (zend_execute_ex == execute_ex &&
            !zend_execute_internal &&
            (init_op->opcode == 59 ||
             init_op->opcode == 69)) {
  return 131;
 }
 return 60;
}


void zend_compile_call_common(znode *result, zend_ast *args_ast, zend_function *fbc)
{
 zend_op *opline;
 uint32_t opnum_init = get_next_op_number((compiler_globals.active_op_array)) - 1;
 uint32_t arg_count;
 uint32_t call_flags;

 zend_do_extended_fcall_begin();

 arg_count = zend_compile_args(args_ast, fbc);

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_init];
 opline->extended_value = arg_count;

 if (opline->opcode == 61) {
  opline->op1.num = zend_vm_calc_used_stack(arg_count, fbc);
 }

 call_flags = (opline->opcode == 68 ? (1 << 3) : 0);
 opline = zend_emit_op(result, zend_get_call_op(opline, fbc), ((void *)0), ((void *)0));
 opline->op1.num = call_flags;

 zend_do_extended_fcall_end();
}


zend_bool zend_compile_function_name(znode *name_node, zend_ast *name_ast)
{
 zend_string *orig_name = zend_ast_get_str(name_ast);
 zend_bool is_fully_qualified;

 name_node->op_type = (1<<0);
 do { zval *__z = (&name_node->u.constant); zend_string *__s = (zend_resolve_function_name( orig_name, name_ast->attr, &is_fully_qualified)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)
                                                  ;

 return !is_fully_qualified && ((compiler_globals.file_context).current_namespace);
}


void zend_compile_ns_call(znode *result, znode *name_node, zend_ast *args_ast)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array));
 opline->opcode = 69;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<0);
 opline->op2.constant = zend_add_ns_func_name_literal(
  (compiler_globals.active_op_array), (name_node->u.constant).value.str);
 zend_alloc_cache_slot(opline->op2.constant);

 zend_compile_call_common(result, args_ast, ((void *)0));
}


void zend_compile_dynamic_call(znode *result, znode *name_node, zend_ast *args_ast)
{
 if (name_node->op_type == (1<<0) && zval_get_type(&(name_node->u.constant)) == 6) {
  const char *colon;
  zend_string *str = (name_node->u.constant).value.str;
  if ((colon = zend_memrchr((str)->val, ':', (str)->len)) != ((void *)0) && colon > (str)->val && *(colon - 1) == ':') {
   zend_string *class = zend_string_init((str)->val, colon - (str)->val - 1, 0);
   zend_string *method = zend_string_init(colon + 1, (str)->len - (colon - (str)->val) - 1, 0);
   zend_op *opline = get_next_op((compiler_globals.active_op_array));

   opline->opcode = 113;
   opline->op1_type = (1<<0);
   opline->op1.constant = zend_add_class_name_literal((compiler_globals.active_op_array), class);
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array), method);
   zend_alloc_cache_slot(opline->op2.constant);
   _zval_ptr_dtor((&name_node->u.constant) );
  } else {
   zend_op *opline = get_next_op((compiler_globals.active_op_array));

   opline->opcode = 59;
   opline->op1_type = (1<<3);
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array), str);
   zend_alloc_cache_slot(opline->op2.constant);
  }
 } else {
  zend_emit_op(((void *)0), 128, ((void *)0), name_node);
 }

 zend_compile_call_common(result, args_ast, ((void *)0));
}


static zend_bool zend_args_contain_unpack(zend_ast_list *args)
{
 uint32_t i;
 for (i = 0; i < args->children; ++i) {
  if (args->child[i]->kind == ZEND_AST_UNPACK) {
   return 1;
  }
 }
 return 0;
}


int zend_compile_func_strlen(znode *result, zend_ast_list *args)
{
 znode arg_node;

 if (((compiler_globals.compiler_options) & (1<<6))
  || args->children != 1 || args->child[0]->kind == ZEND_AST_UNPACK
 ) {
  return FAILURE;
 }

 zend_compile_expr(&arg_node, args->child[0]);
 if (arg_node.op_type == (1<<0) && zval_get_type(&(arg_node.u.constant)) == 6) {
  result->op_type = (1<<0);
  { zval *__z = (&result->u.constant); (*(__z)).value.lval = ((arg_node.u.constant).value.str)->len; (*(__z)).u1.type_info = 4; };
  _zval_ptr_dtor_nogc((&arg_node.u.constant) );
 } else {
  zend_emit_op_tmp(result, 121, &arg_node, ((void *)0));
 }
 return SUCCESS;
}


int zend_compile_func_typecheck(znode *result, zend_ast_list *args, uint32_t type)
{
 znode arg_node;
 zend_op *opline;

 if (args->children != 1 || args->child[0]->kind == ZEND_AST_UNPACK) {
  return FAILURE;
 }

 zend_compile_expr(&arg_node, args->child[0]);
 opline = zend_emit_op_tmp(result, 123, &arg_node, ((void *)0));
 opline->extended_value = type;
 return SUCCESS;
}


int zend_compile_func_defined(znode *result, zend_ast_list *args)
{
 zend_string *name;
 zend_op *opline;

 if (args->children != 1 || args->child[0]->kind != ZEND_AST_ZVAL) {
  return FAILURE;
 }

 name = _zval_get_string((zend_ast_get_zval(args->child[0])));
 if (zend_memrchr((name)->val, '\\', (name)->len) || zend_memrchr((name)->val, ':', (name)->len)) {
  zend_string_release(name);
  return FAILURE;
 }

 if (zend_try_ct_eval_const(&result->u.constant, name, 0)) {
  zend_string_release(name);
  _zval_ptr_dtor((&result->u.constant) );
  do { (*(&result->u.constant)).u1.type_info = 3; } while (0);
  result->op_type = (1<<0);
  return SUCCESS;
 }

 opline = zend_emit_op_tmp(result, 122, ((void *)0), ((void *)0));
 opline->op1_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);
 zend_alloc_cache_slot(opline->op1.constant);


 {
  zval c;
  zend_string *lcname = zend_string_tolower(name);
  do { zval *__z = (&c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
  zend_add_literal((compiler_globals.active_op_array), &c);
 }
 return SUCCESS;
}


int zend_compile_func_chr(znode *result, zend_ast_list *args)
{

 if (args->children == 1 &&
     args->child[0]->kind == ZEND_AST_ZVAL &&
     zval_get_type(&(*(zend_ast_get_zval(args->child[0])))) == 4) {

  zend_long c = (*(zend_ast_get_zval(args->child[0]))).value.lval & 0xff;

  result->op_type = (1<<0);
  if ((compiler_globals.one_char_string)[c]) {
   do { zval *__z = (&result->u.constant); zend_string *__s = ((compiler_globals.one_char_string)[c]); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0);
  } else {
   do { zval *__z = (&result->u.constant); zend_string *__s = (zend_string_alloc(1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
   ((*(&result->u.constant)).value.str)->val[0] = (char)c;
   ((*(&result->u.constant)).value.str)->val[1] = '\0';
  }
  return SUCCESS;
 } else {
  return FAILURE;
 }
}


int zend_compile_func_ord(znode *result, zend_ast_list *args)
{
 if (args->children == 1 &&
     args->child[0]->kind == ZEND_AST_ZVAL &&
     zval_get_type(&(*(zend_ast_get_zval(args->child[0])))) == 6) {

  result->op_type = (1<<0);
  { zval *__z = (&result->u.constant); (*(__z)).value.lval = (unsigned char)((*(zend_ast_get_zval(args->child[0]))).value.str)->val[0]; (*(__z)).u1.type_info = 4; };
  return SUCCESS;
 } else {
  return FAILURE;
 }
}



static int zend_try_compile_ct_bound_init_user_func(zend_ast *name_ast, uint32_t num_args)
{
 zend_string *name, *lcname;
 zend_function *fbc;
 zend_op *opline;

 if (name_ast->kind != ZEND_AST_ZVAL || zval_get_type(&(*(zend_ast_get_zval(name_ast)))) != 6) {
  return FAILURE;
 }

 name = zend_ast_get_str(name_ast);
 lcname = zend_string_tolower(name);

 fbc = zend_hash_find_ptr((compiler_globals.function_table), lcname);
 if (!fbc
  || (fbc->type == 1 && ((compiler_globals.compiler_options) & (1<<2)))
  || (fbc->type == 2 && ((compiler_globals.compiler_options) & (1<<8)))
 ) {
  zend_string_release(lcname);
  return FAILURE;
 }

 opline = zend_emit_op(((void *)0), 61, ((void *)0), ((void *)0));
 opline->extended_value = num_args;
 opline->op1.num = zend_vm_calc_used_stack(num_args, fbc);
 opline->op2_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);
 zend_alloc_cache_slot(opline->op2.constant);

 return SUCCESS;
}


static void zend_compile_init_user_func(zend_ast *name_ast, uint32_t num_args, zend_string *orig_func_name)
{
 zend_op *opline;
 znode name_node;

 if (zend_try_compile_ct_bound_init_user_func(name_ast, num_args) == SUCCESS) {
  return;
 }

 zend_compile_expr(&name_node, name_ast);

 opline = zend_emit_op(((void *)0), 118, ((void *)0), &name_node);
 opline->op1_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (zend_string_copy(orig_func_name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);
 opline->extended_value = num_args;
}



int zend_compile_func_cufa(znode *result, zend_ast_list *args, zend_string *lcname)
{
 znode arg_node;

 if (args->children != 2 || zend_args_contain_unpack(args)) {
  return FAILURE;
 }

 zend_compile_init_user_func(args->child[0], 0, lcname);
 zend_compile_expr(&arg_node, args->child[1]);
 zend_emit_op(((void *)0), 119, &arg_node, ((void *)0));
 zend_emit_op(result, 60, ((void *)0), ((void *)0));

 return SUCCESS;
}



int zend_compile_func_cuf(znode *result, zend_ast_list *args, zend_string *lcname)
{
 uint32_t i;

 if (args->children < 1 || zend_args_contain_unpack(args)) {
  return FAILURE;
 }

 zend_compile_init_user_func(args->child[0], args->children - 1, lcname);
 for (i = 1; i < args->children; ++i) {
  zend_ast *arg_ast = args->child[i];
  znode arg_node;
  zend_op *opline;
  zend_bool send_user = 0;

  if (zend_is_variable(arg_ast) && !zend_is_call(arg_ast)) {
   zend_compile_var(&arg_node, arg_ast, 4 | (i << 3));
   send_user = 1;
  } else {
   zend_compile_expr(&arg_node, arg_ast);
   if (arg_node.op_type & ((1<<2)|(1<<4))) {
    send_user = 1;
   }
  }

  if (send_user) {
   opline = zend_emit_op(((void *)0), 120, &arg_node, ((void *)0));
  } else {
   opline = zend_emit_op(((void *)0), 65, &arg_node, ((void *)0));
  }

  opline->op2.num = i;
  opline->result.var = (uint32_t)(zend_intptr_t)(((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(((int)(i)) - 1))));
 }
 zend_emit_op(result, 60, ((void *)0), ((void *)0));

 return SUCCESS;
}


static int zend_compile_assert(znode *result, zend_ast_list *args, zend_string *name, zend_function *fbc)
{
 if ((executor_globals.assertions) >= 0) {
  znode name_node;
  zend_op *opline;
  uint32_t check_op_number = get_next_op_number((compiler_globals.active_op_array));

  zend_emit_op(((void *)0), 151, ((void *)0), ((void *)0));

  if (fbc) {
   name_node.op_type = (1<<0);
   do { zval *__z = (&name_node.u.constant); zend_string *__s = (name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);

   opline = zend_emit_op(((void *)0), 61, ((void *)0), &name_node);
  } else {
   opline = zend_emit_op(((void *)0), 69, ((void *)0), ((void *)0));
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_ns_func_name_literal(
    (compiler_globals.active_op_array), name);
  }
  zend_alloc_cache_slot(opline->op2.constant);

  if (args->children == 1 &&
      (args->child[0]->kind != ZEND_AST_ZVAL ||
       zval_get_type(&(*(zend_ast_get_zval(args->child[0])))) != 6)) {

   zend_ast_list_add((zend_ast*)args,
    zend_ast_create_zval_from_str(
     zend_ast_export("assert(", args->child[0], ")")));
  }

  zend_compile_call_common(result, (zend_ast*)args, fbc);

  opline = &(compiler_globals.active_op_array)->opcodes[check_op_number];
  opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
  do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline->result = (result)->u.op; } } while (0);
 } else {
  if (!fbc) {
   zend_string_release(name);
  }
  result->op_type = (1<<0);
  do { (*(&result->u.constant)).u1.type_info = 3; } while (0);
 }

 return SUCCESS;
}


int zend_try_compile_special_func(znode *result, zend_string *lcname, zend_ast_list *args, zend_function *fbc, uint32_t type)
{
 if (fbc->internal_function.handler == zif_display_disabled_function) {
  return FAILURE;
 }

 if (((lcname)->len == sizeof("assert")-1 && !memcmp((lcname)->val, "assert", sizeof("assert") - 1))) {
  return zend_compile_assert(result, args, lcname, fbc);
 }

 if ((compiler_globals.compiler_options) & (1<<10)) {
  return FAILURE;
 }

 if (((lcname)->len == sizeof("strlen")-1 && !memcmp((lcname)->val, "strlen", sizeof("strlen") - 1))) {
  return zend_compile_func_strlen(result, args);
 } else if (((lcname)->len == sizeof("is_null")-1 && !memcmp((lcname)->val, "is_null", sizeof("is_null") - 1))) {
  return zend_compile_func_typecheck(result, args, 1);
 } else if (((lcname)->len == sizeof("is_bool")-1 && !memcmp((lcname)->val, "is_bool", sizeof("is_bool") - 1))) {
  return zend_compile_func_typecheck(result, args, 13);
 } else if (((lcname)->len == sizeof("is_long")-1 && !memcmp((lcname)->val, "is_long", sizeof("is_long") - 1))
  || ((lcname)->len == sizeof("is_int")-1 && !memcmp((lcname)->val, "is_int", sizeof("is_int") - 1))
  || ((lcname)->len == sizeof("is_integer")-1 && !memcmp((lcname)->val, "is_integer", sizeof("is_integer") - 1))
 ) {
  return zend_compile_func_typecheck(result, args, 4);
 } else if (((lcname)->len == sizeof("is_float")-1 && !memcmp((lcname)->val, "is_float", sizeof("is_float") - 1))
  || ((lcname)->len == sizeof("is_double")-1 && !memcmp((lcname)->val, "is_double", sizeof("is_double") - 1))
  || ((lcname)->len == sizeof("is_real")-1 && !memcmp((lcname)->val, "is_real", sizeof("is_real") - 1))
 ) {
  return zend_compile_func_typecheck(result, args, 5);
 } else if (((lcname)->len == sizeof("is_string")-1 && !memcmp((lcname)->val, "is_string", sizeof("is_string") - 1))) {
  return zend_compile_func_typecheck(result, args, 6);
 } else if (((lcname)->len == sizeof("is_array")-1 && !memcmp((lcname)->val, "is_array", sizeof("is_array") - 1))) {
  return zend_compile_func_typecheck(result, args, 7);
 } else if (((lcname)->len == sizeof("is_object")-1 && !memcmp((lcname)->val, "is_object", sizeof("is_object") - 1))) {
  return zend_compile_func_typecheck(result, args, 8);
 } else if (((lcname)->len == sizeof("is_resource")-1 && !memcmp((lcname)->val, "is_resource", sizeof("is_resource") - 1))) {
  return zend_compile_func_typecheck(result, args, 9);
 } else if (((lcname)->len == sizeof("defined")-1 && !memcmp((lcname)->val, "defined", sizeof("defined") - 1))) {
  return zend_compile_func_defined(result, args);
 } else if (((lcname)->len == sizeof("chr")-1 && !memcmp((lcname)->val, "chr", sizeof("chr") - 1)) && type == 0) {
  return zend_compile_func_chr(result, args);
 } else if (((lcname)->len == sizeof("ord")-1 && !memcmp((lcname)->val, "ord", sizeof("ord") - 1)) && type == 0) {
  return zend_compile_func_ord(result, args);
 } else if (((lcname)->len == sizeof("call_user_func_array")-1 && !memcmp((lcname)->val, "call_user_func_array", sizeof("call_user_func_array") - 1))) {
  return zend_compile_func_cufa(result, args, lcname);
 } else if (((lcname)->len == sizeof("call_user_func")-1 && !memcmp((lcname)->val, "call_user_func", sizeof("call_user_func") - 1))) {
  return zend_compile_func_cuf(result, args, lcname);
 } else {
  return FAILURE;
 }
}


void zend_compile_call(znode *result, zend_ast *ast, uint32_t type)
{
 zend_ast *name_ast = ast->child[0];
 zend_ast *args_ast = ast->child[1];

 znode name_node;

 if (name_ast->kind != ZEND_AST_ZVAL || zval_get_type(&(*(zend_ast_get_zval(name_ast)))) != 6) {
  zend_compile_expr(&name_node, name_ast);
  zend_compile_dynamic_call(result, &name_node, args_ast);
  return;
 }

 {
  zend_bool runtime_resolution = zend_compile_function_name(&name_node, name_ast);
  if (runtime_resolution) {
   if (((zend_ast_get_str(name_ast))->len == sizeof("assert") - 1 && !zend_binary_strcasecmp((zend_ast_get_str(name_ast))->val, (zend_ast_get_str(name_ast))->len, ("assert"), sizeof("assert") - 1))) {
    zend_compile_assert(result, zend_ast_get_list(args_ast), (name_node.u.constant).value.str, ((void *)0));
   } else {
    zend_compile_ns_call(result, &name_node, args_ast);
   }
   return;
  }
 }

 {
  zval *name = &name_node.u.constant;
  zend_string *lcname;
  zend_function *fbc;
  zend_op *opline;

  lcname = zend_string_tolower((*(name)).value.str);

  fbc = zend_hash_find_ptr((compiler_globals.function_table), lcname);
  if (!fbc
   || (fbc->type == 1 && ((compiler_globals.compiler_options) & (1<<2)))
   || (fbc->type == 2 && ((compiler_globals.compiler_options) & (1<<8)))
  ) {
   zend_string_release(lcname);
   zend_compile_dynamic_call(result, &name_node, args_ast);
   return;
  }

  if (zend_try_compile_special_func(result, lcname,
    zend_ast_get_list(args_ast), fbc, type) == SUCCESS
  ) {
   zend_string_release(lcname);
   _zval_ptr_dtor((&name_node.u.constant) );
   return;
  }

  _zval_ptr_dtor((&name_node.u.constant) );
  do { zval *__z = (&name_node.u.constant); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);

  opline = zend_emit_op(((void *)0), 61, ((void *)0), &name_node);
  zend_alloc_cache_slot(opline->op2.constant);

  zend_compile_call_common(result, args_ast, fbc);
 }
}


void zend_compile_method_call(znode *result, zend_ast *ast, uint32_t type)
{
 zend_ast *obj_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];
 zend_ast *args_ast = ast->child[2];

 znode obj_node, method_node;
 zend_op *opline;
 zend_function *fbc = ((void *)0);

 if (is_this_fetch(obj_ast)) {
  obj_node.op_type = (1<<3);
 } else {
  zend_compile_expr(&obj_node, obj_ast);
 }

 zend_compile_expr(&method_node, method_ast);
 opline = zend_emit_op(((void *)0), 112, &obj_node, ((void *)0));

 if (method_node.op_type == (1<<0)) {
  if (zval_get_type(&(method_node.u.constant)) != 6) {
   zend_error_noreturn((1<<6L), "Method name must be a string");
  }

  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array),
   (method_node.u.constant).value.str);
  zend_alloc_polymorphic_cache_slot(opline->op2.constant);
 } else {
  do { opline->op2_type = (&method_node)->op_type; if ((&method_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&method_node)->u.constant); } else { opline->op2 = (&method_node)->u.op; } } while (0);
 }


 if (opline->op1_type == (1<<3) && opline->op2_type == (1<<0) &&
   (compiler_globals.active_class_entry) && zend_is_scope_known()) {
  zend_string *lcname = (*((((compiler_globals.active_op_array))->literals + ((opline->op2).constant)) + 1)).value.str;
  fbc = zend_hash_find_ptr(&(compiler_globals.active_class_entry)->function_table, lcname);



  if (fbc && !(fbc->common.fn_flags & (0x400|0x04))) {
   fbc = ((void *)0);
  }
 }

 zend_compile_call_common(result, args_ast, fbc);
}


static zend_bool zend_is_constructor(zend_string *name)
{
 return ((name)->len == sizeof("__construct") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("__construct"), sizeof("__construct") - 1));
}


void zend_compile_static_call(znode *result, zend_ast *ast, uint32_t type)
{
 zend_ast *class_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];
 zend_ast *args_ast = ast->child[2];

 znode class_node, method_node;
 zend_op *opline;
 zend_function *fbc = ((void *)0);

 zend_compile_class_ref_ex(&class_node, class_ast, 0x0200);

 zend_compile_expr(&method_node, method_ast);
 if (method_node.op_type == (1<<0)) {
  zval *name = &method_node.u.constant;
  if (zval_get_type(&(*(name))) != 6) {
   zend_error_noreturn((1<<6L), "Method name must be a string");
  }
  if (zend_is_constructor((*(name)).value.str)) {
   _zval_ptr_dtor((name) );
   method_node.op_type = (1<<3);
  }
 }

 opline = get_next_op((compiler_globals.active_op_array));
 opline->opcode = 113;

 zend_set_class_name_op1(opline, &class_node);

 if (method_node.op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_func_name_literal((compiler_globals.active_op_array),
   (method_node.u.constant).value.str);
  if (opline->op1_type == (1<<0)) {
   zend_alloc_cache_slot(opline->op2.constant);
  } else {
   zend_alloc_polymorphic_cache_slot(opline->op2.constant);
  }
 } else {
  do { opline->op2_type = (&method_node)->op_type; if ((&method_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&method_node)->u.constant); } else { opline->op2 = (&method_node)->u.op; } } while (0);
 }
 zend_check_live_ranges(opline);


 if (opline->op2_type == (1<<0)) {
  zend_class_entry *ce = ((void *)0);
  if (opline->op1_type == (1<<0)) {
   zend_string *lcname = (*((((compiler_globals.active_op_array))->literals + ((opline->op1).constant)) + 1)).value.str;
   ce = zend_hash_find_ptr((compiler_globals.class_table), lcname);
   if (!ce && (compiler_globals.active_class_entry)
     && (((compiler_globals.active_class_entry)->name)->len == (lcname)->len && !zend_binary_strcasecmp(((compiler_globals.active_class_entry)->name)->val, ((compiler_globals.active_class_entry)->name)->len, (lcname)->val, (lcname)->len))) {
    ce = (compiler_globals.active_class_entry);
   }
  } else if (opline->op1_type == (1<<3)
    && (opline->op1.num & 0x0f) == 1
    && zend_is_scope_known()) {
   ce = (compiler_globals.active_class_entry);
  }
  if (ce) {
   zend_string *lcname = (*((((compiler_globals.active_op_array))->literals + ((opline->op2).constant)) + 1)).value.str;
   fbc = zend_hash_find_ptr(&ce->function_table, lcname);
  }
 }

 zend_compile_call_common(result, args_ast, fbc);
}


void zend_compile_class_decl(zend_ast *ast);

void zend_compile_new(znode *result, zend_ast *ast)
{
 zend_ast *class_ast = ast->child[0];
 zend_ast *args_ast = ast->child[1];

 znode class_node, ctor_result;
 zend_op *opline;
 uint32_t opnum;

 if (class_ast->kind == ZEND_AST_CLASS) {
  uint32_t dcl_opnum = get_next_op_number((compiler_globals.active_op_array));
  zend_compile_class_decl(class_ast);

  opline = &(compiler_globals.active_op_array)->opcodes[dcl_opnum];
  if (opline->opcode == 109) {
   opline++;
  }
  class_node.op_type = opline->result_type;
  class_node.u.op.var = opline->result.var;
  opline->extended_value = get_next_op_number((compiler_globals.active_op_array));
 } else {
  zend_compile_class_ref_ex(&class_node, class_ast, 0x0200);
 }

 opnum = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(result, 68, ((void *)0), ((void *)0));

 if (class_node.op_type == (1<<0)) {
  opline->op1_type = (1<<0);
  opline->op1.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node.u.constant).value.str);
 } else {
  do { opline->op1_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant); } else { opline->op1 = (&class_node)->u.op; } } while (0);
 }

 zend_compile_call_common(&ctor_result, args_ast, ((void *)0));
 zend_do_free(&ctor_result);



 opline = &(compiler_globals.active_op_array)->opcodes[opnum];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
}


void zend_compile_clone(znode *result, zend_ast *ast)
{
 zend_ast *obj_ast = ast->child[0];

 znode obj_node;
 zend_compile_expr(&obj_node, obj_ast);

 zend_emit_op_tmp(result, 110, &obj_node, ((void *)0));
}


void zend_compile_global_var(zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 zend_ast *name_ast = var_ast->child[0];

 znode name_node, result;

 zend_compile_expr(&name_node, name_ast);
 if (name_node.op_type == (1<<0)) {
  if (zval_get_type(&(*(&name_node.u.constant))) != 6) { _convert_to_string((&name_node.u.constant) ); };
 }

 if (zend_try_compile_cv(&result, var_ast) == SUCCESS) {
  zend_op *opline = zend_emit_op(((void *)0), 168, &result, &name_node);
  zend_alloc_cache_slot(opline->op2.constant);
 } else {



  zend_op *opline = zend_emit_op(&result, 83, &name_node, ((void *)0));
  opline->extended_value = 0x40000000;

  if (name_node.op_type == (1<<0)) {
   zend_string_addref((name_node.u.constant).value.str);
  }

  zend_emit_assign_ref_znode(
   zend_ast_create(ZEND_AST_VAR, zend_ast_create_znode(&name_node)),
   &result
  );
 }
}


static void zend_compile_static_var_common(zend_ast *var_ast, zval *value, zend_bool by_ref)
{
 znode var_node;
 zend_op *opline;

 zend_compile_expr(&var_node, var_ast);

 if (!(compiler_globals.active_op_array)->static_variables) {
  if ((compiler_globals.active_op_array)->scope) {
   (compiler_globals.active_op_array)->scope->ce_flags |= 0x800000;
  }
  ((compiler_globals.active_op_array)->static_variables) = (HashTable *) (__builtin_constant_p((sizeof(HashTable)) ) ? (((sizeof(HashTable)) <= 8) ? _emalloc_8() : (((sizeof(HashTable)) <= 16) ? _emalloc_16() : (((sizeof(HashTable)) <= 24) ? _emalloc_24() : (((sizeof(HashTable)) <= 32) ? _emalloc_32() : (((sizeof(HashTable)) <= 40) ? _emalloc_40() : (((sizeof(HashTable)) <= 48) ? _emalloc_48() : (((sizeof(HashTable)) <= 56) ? _emalloc_56() : (((sizeof(HashTable)) <= 64) ? _emalloc_64() : (((sizeof(HashTable)) <= 80) ? _emalloc_80() : (((sizeof(HashTable)) <= 96) ? _emalloc_96() : (((sizeof(HashTable)) <= 112) ? _emalloc_112() : (((sizeof(HashTable)) <= 128) ? _emalloc_128() : (((sizeof(HashTable)) <= 160) ? _emalloc_160() : (((sizeof(HashTable)) <= 192) ? _emalloc_192() : (((sizeof(HashTable)) <= 224) ? _emalloc_224() : (((sizeof(HashTable)) <= 256) ? _emalloc_256() : (((sizeof(HashTable)) <= 320) ? _emalloc_320() : (((sizeof(HashTable)) <= 384) ? _emalloc_384() : (((sizeof(HashTable)) <= 448) ? _emalloc_448() : (((sizeof(HashTable)) <= 512) ? _emalloc_512() : (((sizeof(HashTable)) <= 640) ? _emalloc_640() : (((sizeof(HashTable)) <= 768) ? _emalloc_768() : (((sizeof(HashTable)) <= 896) ? _emalloc_896() : (((sizeof(HashTable)) <= 1024) ? _emalloc_1024() : (((sizeof(HashTable)) <= 1280) ? _emalloc_1280() : (((sizeof(HashTable)) <= 1536) ? _emalloc_1536() : (((sizeof(HashTable)) <= 1792) ? _emalloc_1792() : (((sizeof(HashTable)) <= 2048) ? _emalloc_2048() : (((sizeof(HashTable)) <= 2560) ? _emalloc_2560() : (((sizeof(HashTable)) <= 3072) ? _emalloc_3072() : (((sizeof(HashTable)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(HashTable))) : _emalloc_huge((sizeof(HashTable)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(HashTable)) ) );
  _zend_hash_init(((compiler_globals.active_op_array)->static_variables), (8), (_zval_ptr_dtor), (0) );
 }

 if (((compiler_globals.active_op_array)->static_variables)->gc.refcount > 1) {
  if (!(((compiler_globals.active_op_array)->static_variables)->gc.u.v.flags & (1<<1))) {
   ((compiler_globals.active_op_array)->static_variables)->gc.refcount--;
  }
  (compiler_globals.active_op_array)->static_variables = zend_array_dup((compiler_globals.active_op_array)->static_variables);
 }
 _zend_hash_update((compiler_globals.active_op_array)->static_variables, (var_node.u.constant).value.str, value );

 opline = zend_emit_op(((void *)0), 183, ((void *)0), &var_node);
 opline->op1_type = (1<<4);
 opline->op1.var = lookup_cv((compiler_globals.active_op_array), zend_string_copy((var_node.u.constant).value.str));
 opline->extended_value = by_ref;
}


void zend_compile_static_var(zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 zend_ast *value_ast = ast->child[1];
 zval value_zv;

 if (value_ast) {
  zend_const_expr_to_zval(&value_zv, value_ast);
 } else {
  do { (*(&value_zv)).u1.type_info = 1; } while (0);
 }

 zend_compile_static_var_common(var_ast, &value_zv, 1);
}


void zend_compile_unset(zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 znode var_node;
 zend_op *opline;

 zend_ensure_writable_variable(var_ast);

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
   if (zend_try_compile_cv(&var_node, var_ast) == SUCCESS) {
    opline = zend_emit_op(((void *)0), 74, &var_node, ((void *)0));
    opline->extended_value = 0x10000000 | 0x00800000;
   } else {
    opline = zend_compile_simple_var_no_cv(((void *)0), var_ast, 5, 0);
    opline->opcode = 74;
   }
   return;
  case ZEND_AST_DIM:
   opline = zend_compile_dim_common(((void *)0), var_ast, 5);
   opline->opcode = 75;
   return;
  case ZEND_AST_PROP:
   opline = zend_compile_prop_common(((void *)0), var_ast, 5);
   opline->opcode = 76;
   return;
  case ZEND_AST_STATIC_PROP:
   opline = zend_compile_static_prop_common(((void *)0), var_ast, 5, 0);
   opline->opcode = 179;
   return;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


static int zend_handle_loops_and_finally_ex(zend_long depth, znode *return_value)
{
 zend_loop_var *base;
 zend_loop_var *loop_var = zend_stack_top(&(compiler_globals.loop_var_stack));

 if (!loop_var) {
  return 1;
 }
 base = zend_stack_base(&(compiler_globals.loop_var_stack));
 for (; loop_var >= base; loop_var--) {
  if (loop_var->opcode == 162) {
   zend_op *opline = get_next_op((compiler_globals.active_op_array));

   opline->opcode = 162;
   opline->result_type = (1<<1);
   opline->result.var = loop_var->var_num;
   opline->op1_type = (1<<3);
   if (return_value) {
    do { opline->op2_type = (return_value)->op_type; if ((return_value)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(return_value)->u.constant); } else { opline->op2 = (return_value)->u.op; } } while (0);
   } else {
    opline->op2_type = (1<<3);
   }
   opline->op1.num = loop_var->u.try_catch_offset;
  } else if (loop_var->opcode == 159) {
   zend_op *opline = get_next_op((compiler_globals.active_op_array));
   opline->opcode = 159;
   opline->op1_type = (1<<1);
   opline->op1.var = loop_var->var_num;
   opline->op2_type = (1<<3);
  } else if (loop_var->opcode == 62) {

   break;
  } else if (depth <= 1) {
   return 1;
  } else if (loop_var->opcode == 0) {

   depth--;
  } else {
   zend_op *opline;

   do { if (__builtin_expect(!(loop_var->var_type & ((1<<2)|(1<<1))), 0)) __builtin_unreachable(); } while (0);
   opline = get_next_op((compiler_globals.active_op_array));
   opline->opcode = loop_var->opcode;
   opline->op1_type = loop_var->var_type;
   opline->op1.var = loop_var->var_num;
   opline->op2_type = (1<<3);
   opline->op2.num = loop_var->u.live_range_offset;
   opline->extended_value = (1<<0);
   depth--;
     }
 }
 return (depth == 0);
}


static int zend_handle_loops_and_finally(znode *return_value)
{
 return zend_handle_loops_and_finally_ex(zend_stack_count(&(compiler_globals.loop_var_stack)) + 1, return_value);
}


void zend_compile_return(zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 zend_bool by_ref = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 znode expr_node;
 zend_op *opline;

 if (!expr_ast) {
  expr_node.op_type = (1<<0);
  do { (*(&expr_node.u.constant)).u1.type_info = 1; } while (0);
 } else if (by_ref && zend_is_variable(expr_ast) && !zend_is_call(expr_ast)) {
  zend_compile_var(&expr_node, expr_ast, 1);
 } else {
  zend_compile_expr(&expr_node, expr_ast);
 }


 if (!((compiler_globals.active_op_array)->fn_flags & 0x800000) && (compiler_globals.active_op_array)->fn_flags & 0x40000000) {
  zend_emit_return_type_check(
   expr_ast ? &expr_node : ((void *)0), (compiler_globals.active_op_array)->arg_info - 1, 0);
 }

 zend_handle_loops_and_finally((expr_node.op_type & ((1<<1) | (1<<2))) ? &expr_node : ((void *)0));

 opline = zend_emit_op(((void *)0), by_ref ? 111 : 62,
  &expr_node, ((void *)0));

 if (expr_ast) {
  if (zend_is_call(expr_ast)) {
   opline->extended_value = 1<<0;
  } else if (by_ref && !zend_is_variable(expr_ast)) {
   opline->extended_value = 1<<1;
  }
 }
}


void zend_compile_echo(zend_ast *ast)
{
 zend_op *opline;
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast);

 opline = zend_emit_op(((void *)0), 40, &expr_node, ((void *)0));
 opline->extended_value = 0;
}


void zend_compile_throw(zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast);

 zend_emit_op(((void *)0), 108, &expr_node, ((void *)0));
}


void zend_compile_break_continue(zend_ast *ast)
{
 zend_ast *depth_ast = ast->child[0];

 zend_op *opline;
 int depth;

 do { if (__builtin_expect(!(ast->kind == ZEND_AST_BREAK || ast->kind == ZEND_AST_CONTINUE), 0)) __builtin_unreachable(); } while (0);

 if (depth_ast) {
  zval *depth_zv;
  if (depth_ast->kind != ZEND_AST_ZVAL) {
   zend_error_noreturn((1<<6L), "'%s' operator with non-constant operand "
    "is no longer supported", ast->kind == ZEND_AST_BREAK ? "break" : "continue");
  }

  depth_zv = zend_ast_get_zval(depth_ast);
  if (zval_get_type(&(*(depth_zv))) != 4 || (*(depth_zv)).value.lval < 1) {
   zend_error_noreturn((1<<6L), "'%s' operator accepts only positive numbers",
    ast->kind == ZEND_AST_BREAK ? "break" : "continue");
  }

  depth = (*(depth_zv)).value.lval;
 } else {
  depth = 1;
 }

 if ((compiler_globals.context).current_brk_cont == -1) {
  zend_error_noreturn((1<<6L), "'%s' not in the 'loop' or 'switch' context",
   ast->kind == ZEND_AST_BREAK ? "break" : "continue");
 } else {
  if (!zend_handle_loops_and_finally_ex(depth, ((void *)0))) {
   zend_error_noreturn((1<<6L), "Cannot '%s' %d level%s",
    ast->kind == ZEND_AST_BREAK ? "break" : "continue",
    depth, depth == 1 ? "" : "s");
  }
 }
 opline = zend_emit_op(((void *)0), ast->kind == ZEND_AST_BREAK ? 254 : 255, ((void *)0), ((void *)0));
 opline->op1.num = (compiler_globals.context).current_brk_cont;
 opline->op2.num = depth;
}


void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline)
{
 zend_label *dest;
 int current, remove_oplines = opline->op1.num;
 zval *label;
 uint32_t opnum = opline - op_array->opcodes;

 label = ((op_array)->literals + (opline->op2.constant));
 if ((compiler_globals.context).labels == ((void *)0) ||
     (dest = zend_hash_find_ptr((compiler_globals.context).labels, (*(label)).value.str)) == ((void *)0)
 ) {
  (compiler_globals.in_compilation) = 1;
  (compiler_globals.active_op_array) = op_array;
  (compiler_globals.zend_lineno) = opline->lineno;
  zend_error_noreturn((1<<6L), "'goto' to undefined label '%s'", ((*(label)).value.str)->val);
 }

 _zval_ptr_dtor_nogc((label) );
 do { (*(label)).u1.type_info = 1; } while (0);

 current = opline->extended_value;
 for (; current != dest->brk_cont; current = (compiler_globals.context).brk_cont_array[current].parent) {
  if (current == -1) {
   (compiler_globals.in_compilation) = 1;
   (compiler_globals.active_op_array) = op_array;
   (compiler_globals.zend_lineno) = opline->lineno;
   zend_error_noreturn((1<<6L), "'goto' into loop or switch statement is disallowed");
  }
  if ((compiler_globals.context).brk_cont_array[current].start >= 0) {
   remove_oplines--;
  }
 }

 for (current = 0; current < op_array->last_try_catch; ++current) {
  zend_try_catch_element *elem = &op_array->try_catch_array[current];
  if (elem->try_op > opnum) {
   break;
  }
  if (elem->finally_op && opnum < elem->finally_op - 1
   && (dest->opline_num > elem->finally_end || dest->opline_num < elem->try_op)
  ) {
   remove_oplines--;
  }
 }

 opline->opcode = 42;
 opline->op1.opline_num = dest->opline_num;
 opline->extended_value = 0;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 opline->result_type = (1<<3);

 do { if (__builtin_expect(!(remove_oplines >= 0), 0)) __builtin_unreachable(); } while (0);
 while (remove_oplines--) {
  opline--;
  do { (opline)->op1.num = 0; (opline)->op2.num = 0; (opline)->result.num = 0; (opline)->opcode = 0; (opline)->op1_type = (1<<3); (opline)->op2_type = (1<<3); (opline)->result_type = (1<<3); } while (0);
  zend_vm_set_opcode_handler(opline);
 }
}


void zend_compile_goto(zend_ast *ast)
{
 zend_ast *label_ast = ast->child[0];
 znode label_node;
 zend_op *opline;
 uint32_t opnum_start = get_next_op_number((compiler_globals.active_op_array));

 zend_compile_expr(&label_node, label_ast);


 zend_handle_loops_and_finally(((void *)0));
 opline = zend_emit_op(((void *)0), 253, ((void *)0), &label_node);
 opline->op1.num = get_next_op_number((compiler_globals.active_op_array)) - opnum_start - 1;
 opline->extended_value = (compiler_globals.context).current_brk_cont;
}


void zend_compile_label(zend_ast *ast)
{
 zend_string *label = zend_ast_get_str(ast->child[0]);
 zend_label dest;

 if (!(compiler_globals.context).labels) {
  ((compiler_globals.context).labels) = (HashTable *) (__builtin_constant_p((sizeof(HashTable)) ) ? (((sizeof(HashTable)) <= 8) ? _emalloc_8() : (((sizeof(HashTable)) <= 16) ? _emalloc_16() : (((sizeof(HashTable)) <= 24) ? _emalloc_24() : (((sizeof(HashTable)) <= 32) ? _emalloc_32() : (((sizeof(HashTable)) <= 40) ? _emalloc_40() : (((sizeof(HashTable)) <= 48) ? _emalloc_48() : (((sizeof(HashTable)) <= 56) ? _emalloc_56() : (((sizeof(HashTable)) <= 64) ? _emalloc_64() : (((sizeof(HashTable)) <= 80) ? _emalloc_80() : (((sizeof(HashTable)) <= 96) ? _emalloc_96() : (((sizeof(HashTable)) <= 112) ? _emalloc_112() : (((sizeof(HashTable)) <= 128) ? _emalloc_128() : (((sizeof(HashTable)) <= 160) ? _emalloc_160() : (((sizeof(HashTable)) <= 192) ? _emalloc_192() : (((sizeof(HashTable)) <= 224) ? _emalloc_224() : (((sizeof(HashTable)) <= 256) ? _emalloc_256() : (((sizeof(HashTable)) <= 320) ? _emalloc_320() : (((sizeof(HashTable)) <= 384) ? _emalloc_384() : (((sizeof(HashTable)) <= 448) ? _emalloc_448() : (((sizeof(HashTable)) <= 512) ? _emalloc_512() : (((sizeof(HashTable)) <= 640) ? _emalloc_640() : (((sizeof(HashTable)) <= 768) ? _emalloc_768() : (((sizeof(HashTable)) <= 896) ? _emalloc_896() : (((sizeof(HashTable)) <= 1024) ? _emalloc_1024() : (((sizeof(HashTable)) <= 1280) ? _emalloc_1280() : (((sizeof(HashTable)) <= 1536) ? _emalloc_1536() : (((sizeof(HashTable)) <= 1792) ? _emalloc_1792() : (((sizeof(HashTable)) <= 2048) ? _emalloc_2048() : (((sizeof(HashTable)) <= 2560) ? _emalloc_2560() : (((sizeof(HashTable)) <= 3072) ? _emalloc_3072() : (((sizeof(HashTable)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(HashTable))) : _emalloc_huge((sizeof(HashTable)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(HashTable)) ) );
  _zend_hash_init(((compiler_globals.context).labels), (8), (label_ptr_dtor), (0) );
 }

 dest.brk_cont = (compiler_globals.context).current_brk_cont;
 dest.opline_num = get_next_op_number((compiler_globals.active_op_array));

 if (!zend_hash_add_mem((compiler_globals.context).labels, label, &dest, sizeof(zend_label))) {
  zend_error_noreturn((1<<6L), "Label '%s' already defined", (label)->val);
 }
}


void zend_compile_while(zend_ast *ast)
{
 zend_ast *cond_ast = ast->child[0];
 zend_ast *stmt_ast = ast->child[1];
 znode cond_node;
 uint32_t opnum_start, opnum_jmp, opnum_cond;

 opnum_jmp = zend_emit_jump(0);

 zend_begin_loop(0, ((void *)0));

 opnum_start = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_stmt(stmt_ast);

 opnum_cond = get_next_op_number((compiler_globals.active_op_array));
 zend_update_jump_target(opnum_jmp, opnum_cond);
 zend_compile_expr(&cond_node, cond_ast);

 zend_emit_cond_jump(44, &cond_node, opnum_start);

 zend_end_loop(opnum_cond, ((void *)0));
}


void zend_compile_do_while(zend_ast *ast)
{
 zend_ast *stmt_ast = ast->child[0];
 zend_ast *cond_ast = ast->child[1];

 znode cond_node;
 uint32_t opnum_start, opnum_cond;

 zend_begin_loop(0, ((void *)0));

 opnum_start = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_stmt(stmt_ast);

 opnum_cond = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr(&cond_node, cond_ast);

 zend_emit_cond_jump(44, &cond_node, opnum_start);

 zend_end_loop(opnum_cond, ((void *)0));
}


void zend_compile_expr_list(znode *result, zend_ast *ast)
{
 zend_ast_list *list;
 uint32_t i;

 result->op_type = (1<<0);
 do { (*(&result->u.constant)).u1.type_info = 3; } while (0);

 if (!ast) {
  return;
 }

 list = zend_ast_get_list(ast);
 for (i = 0; i < list->children; ++i) {
  zend_ast *expr_ast = list->child[i];

  zend_do_free(result);
  zend_compile_expr(result, expr_ast);
 }
}


void zend_compile_for(zend_ast *ast)
{
 zend_ast *init_ast = ast->child[0];
 zend_ast *cond_ast = ast->child[1];
 zend_ast *loop_ast = ast->child[2];
 zend_ast *stmt_ast = ast->child[3];

 znode result;
 uint32_t opnum_start, opnum_jmp, opnum_loop;

 zend_compile_expr_list(&result, init_ast);
 zend_do_free(&result);

 opnum_jmp = zend_emit_jump(0);

 zend_begin_loop(0, ((void *)0));

 opnum_start = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_stmt(stmt_ast);

 opnum_loop = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr_list(&result, loop_ast);
 zend_do_free(&result);

 zend_update_jump_target_to_next(opnum_jmp);
 zend_compile_expr_list(&result, cond_ast);
 zend_do_extended_info();

 zend_emit_cond_jump(44, &result, opnum_start);

 zend_end_loop(opnum_loop, ((void *)0));
}


void zend_compile_foreach(zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 zend_ast *value_ast = ast->child[1];
 zend_ast *key_ast = ast->child[2];
 zend_ast *stmt_ast = ast->child[3];
 zend_bool by_ref = value_ast->kind == ZEND_AST_REF;
 zend_bool is_variable = zend_is_variable(expr_ast) && !zend_is_call(expr_ast)
  && zend_can_write_to_variable(expr_ast);

 znode expr_node, reset_node, value_node, key_node;
 zend_op *opline;
 uint32_t opnum_reset, opnum_fetch;

 if (key_ast) {
  if (key_ast->kind == ZEND_AST_REF) {
   zend_error_noreturn((1<<6L), "Key element cannot be a reference");
  }
  if (key_ast->kind == ZEND_AST_ARRAY) {
   zend_error_noreturn((1<<6L), "Cannot use list as key element");
  }
 }

 if (by_ref) {
  value_ast = value_ast->child[0];
 }

 if (by_ref && is_variable) {
  zend_compile_var(&expr_node, expr_ast, 1);
 } else {
  zend_compile_expr(&expr_node, expr_ast);
 }

 if (by_ref) {
  zend_separate_if_call_and_write(&expr_node, expr_ast, 1);
 }

 opnum_reset = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(&reset_node, by_ref ? 125 : 77, &expr_node, ((void *)0));

 zend_begin_loop(127, &reset_node);

 opnum_fetch = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(((void *)0), by_ref ? 126 : 78, &reset_node, ((void *)0));

 if (value_ast->kind == ZEND_AST_VAR &&
     zend_try_compile_cv(&value_node, value_ast) == SUCCESS) {
  do { opline->op2_type = (&value_node)->op_type; if ((&value_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&value_node)->u.constant); } else { opline->op2 = (&value_node)->u.op; } } while (0);
 } else {
  opline->op2_type = (1<<2);
  opline->op2.var = get_temporary_variable((compiler_globals.active_op_array));
  do { (&value_node)->op_type = opline->op2_type; if ((&value_node)->op_type == (1<<0)) { do { zval *_z1 = (&(&value_node)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->op2).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (&value_node)->u.op = opline->op2; } } while (0);
  if (by_ref) {
   zend_emit_assign_ref_znode(value_ast, &value_node);
  } else {
   zend_emit_assign_znode(value_ast, &value_node);
  }
 }

 if (key_ast) {
  opline = &(compiler_globals.active_op_array)->opcodes[opnum_fetch];
  zend_make_tmp_result(&key_node, opline);
  zend_emit_assign_znode(key_ast, &key_node);
 }

 zend_compile_stmt(stmt_ast);

 zend_emit_jump(opnum_fetch);

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_reset];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_fetch];
 opline->extended_value = get_next_op_number((compiler_globals.active_op_array));

 zend_end_loop(opnum_fetch, &reset_node);

 opline = zend_emit_op(((void *)0), 127, &reset_node, ((void *)0));
}


void zend_compile_if(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 uint32_t *jmp_opnums = ((void *)0);

 if (list->children > 1) {
  jmp_opnums = _safe_emalloc((sizeof(uint32_t)), (list->children - 1), (0) );
 }

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *cond_ast = elem_ast->child[0];
  zend_ast *stmt_ast = elem_ast->child[1];

  znode cond_node;
  uint32_t opnum_jmpz;
  if (cond_ast) {
   zend_compile_expr(&cond_node, cond_ast);
   opnum_jmpz = zend_emit_cond_jump(43, &cond_node, 0);
  }

  zend_compile_stmt(stmt_ast);

  if (i != list->children - 1) {
   jmp_opnums[i] = zend_emit_jump(0);
  }

  if (cond_ast) {
   zend_update_jump_target_to_next(opnum_jmpz);
  }
 }

 if (list->children > 1) {
  for (i = 0; i < list->children - 1; ++i) {
   zend_update_jump_target_to_next(jmp_opnums[i]);
  }
  _efree((jmp_opnums) );
 }
}


void zend_compile_switch(zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 zend_ast_list *cases = zend_ast_get_list(ast->child[1]);

 uint32_t i;
 zend_bool has_default_case = 0;

 znode expr_node, case_node;
 zend_op *opline;
 uint32_t *jmpnz_opnums = _safe_emalloc((sizeof(uint32_t)), (cases->children), (0) );
 uint32_t opnum_default_jmp;

 zend_compile_expr(&expr_node, expr_ast);

 zend_begin_loop(70, &expr_node);

 case_node.op_type = (1<<1);
 case_node.u.op.var = get_temporary_variable((compiler_globals.active_op_array));

 for (i = 0; i < cases->children; ++i) {
  zend_ast *case_ast = cases->child[i];
  zend_ast *cond_ast = case_ast->child[0];
  znode cond_node;

  if (!cond_ast) {
   if (has_default_case) {
    (compiler_globals.zend_lineno) = case_ast->lineno;
    zend_error_noreturn((1<<6L),
     "Switch statements may only contain one default clause");
   }
   has_default_case = 1;
   continue;
  }

  zend_compile_expr(&cond_node, cond_ast);

  if (expr_node.op_type == (1<<0)
   && zval_get_type(&(expr_node.u.constant)) == 2) {
   jmpnz_opnums[i] = zend_emit_cond_jump(43, &cond_node, 0);
  } else if (expr_node.op_type == (1<<0)
   && zval_get_type(&(expr_node.u.constant)) == 3) {
   jmpnz_opnums[i] = zend_emit_cond_jump(44, &cond_node, 0);
  } else {
   opline = zend_emit_op(((void *)0), 48, &expr_node, &cond_node);
   do { opline->result_type = (&case_node)->op_type; if ((&case_node)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&case_node)->u.constant); } else { opline->result = (&case_node)->u.op; } } while (0);
   if (opline->op1_type == (1<<0)) {
    _zval_copy_ctor(((((compiler_globals.active_op_array))->literals + ((opline->op1).constant))) );
   }

   jmpnz_opnums[i] = zend_emit_cond_jump(44, &case_node, 0);
  }
 }

 opnum_default_jmp = zend_emit_jump(0);

 for (i = 0; i < cases->children; ++i) {
  zend_ast *case_ast = cases->child[i];
  zend_ast *cond_ast = case_ast->child[0];
  zend_ast *stmt_ast = case_ast->child[1];

  if (cond_ast) {
   zend_update_jump_target_to_next(jmpnz_opnums[i]);
  } else {
   zend_update_jump_target_to_next(opnum_default_jmp);
  }

  zend_compile_stmt(stmt_ast);
 }

 if (!has_default_case) {
  zend_update_jump_target_to_next(opnum_default_jmp);
 }

 zend_end_loop(get_next_op_number((compiler_globals.active_op_array)), &expr_node);

 if (expr_node.op_type & ((1<<2)|(1<<1))) {

  opline = get_next_op((compiler_globals.active_op_array));
  opline->opcode = 70;
  do { opline->op1_type = (&expr_node)->op_type; if ((&expr_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&expr_node)->u.constant); } else { opline->op1 = (&expr_node)->u.op; } } while (0);
  opline->op2_type = (1<<3);
 } else if (expr_node.op_type == (1<<0)) {
  _zval_ptr_dtor_nogc((&expr_node.u.constant) );
 }

 _efree((jmpnz_opnums) );
}


void zend_compile_try(zend_ast *ast)
{
 zend_ast *try_ast = ast->child[0];
 zend_ast_list *catches = zend_ast_get_list(ast->child[1]);
 zend_ast *finally_ast = ast->child[2];

 uint32_t i, j;
 zend_op *opline;
 uint32_t try_catch_offset;
 uint32_t *jmp_opnums = _safe_emalloc((sizeof(uint32_t)), (catches->children), (0) );
 uint32_t orig_fast_call_var = (compiler_globals.context).fast_call_var;
 uint32_t orig_try_catch_offset = (compiler_globals.context).try_catch_offset;

 if (catches->children == 0 && !finally_ast) {
  zend_error_noreturn((1<<6L), "Cannot use try without catch or finally");
 }


 if ((compiler_globals.context).labels) {
  zend_label *label;
  do { uint _idx; for (_idx = ((compiler_globals.context).labels)->nNumUsed; _idx > 0; _idx--) { Bucket *_p = ((compiler_globals.context).labels)->arData + _idx - 1; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (__builtin_expect(!!(zval_get_type(&(*(_z))) == 0), 0)) continue;; label = (*(_z)).value.ptr; {
   if (label->opline_num == get_next_op_number((compiler_globals.active_op_array))) {
    zend_emit_op(((void *)0), 0, ((void *)0), ((void *)0));
   }
   break;
  } } } while (0);
 }

 try_catch_offset = zend_add_try_element(get_next_op_number((compiler_globals.active_op_array)));

 if (finally_ast) {
  zend_loop_var fast_call;
  if (!((compiler_globals.active_op_array)->fn_flags & 0x20000000)) {
   (compiler_globals.active_op_array)->fn_flags |= 0x20000000;
  }
  (compiler_globals.context).fast_call_var = get_temporary_variable((compiler_globals.active_op_array));


  fast_call.opcode = 162;
  fast_call.var_type = (1<<1);
  fast_call.var_num = (compiler_globals.context).fast_call_var;
  fast_call.u.try_catch_offset = try_catch_offset;
  zend_stack_push(&(compiler_globals.loop_var_stack), &fast_call);
 }

 (compiler_globals.context).try_catch_offset = try_catch_offset;

 zend_compile_stmt(try_ast);

 if (catches->children != 0) {
  jmp_opnums[0] = zend_emit_jump(0);
 }

 for (i = 0; i < catches->children; ++i) {
  zend_ast *catch_ast = catches->child[i];
  zend_ast_list *classes = zend_ast_get_list(catch_ast->child[0]);
  zend_ast *var_ast = catch_ast->child[1];
  zend_ast *stmt_ast = catch_ast->child[2];
  zval *var_name = zend_ast_get_zval(var_ast);
  zend_bool is_last_catch = (i + 1 == catches->children);

  uint32_t *jmp_multicatch = _safe_emalloc((sizeof(uint32_t)), (classes->children - 1), (0) );
  uint32_t opnum_catch;

  (compiler_globals.zend_lineno) = catch_ast->lineno;

  for (j = 0; j < classes->children; j++) {

   zend_ast *class_ast = classes->child[j];
   zend_bool is_last_class = (j + 1 == classes->children);

   if (!zend_is_const_default_class_ref(class_ast)) {
    zend_error_noreturn((1<<6L), "Bad class name in the catch statement");
   }

   opnum_catch = get_next_op_number((compiler_globals.active_op_array));
   if (i == 0 && j == 0) {
    (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].catch_op = opnum_catch;
   }

   opline = get_next_op((compiler_globals.active_op_array));
   opline->opcode = 107;
   opline->op1_type = (1<<0);
   opline->op1.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
     zend_resolve_class_name_ast(class_ast));

   opline->op2_type = (1<<4);
   opline->op2.var = lookup_cv((compiler_globals.active_op_array), zend_string_copy((*(var_name)).value.str));

   opline->result.num = is_last_catch && is_last_class;

   if (!is_last_class) {
    jmp_multicatch[j] = zend_emit_jump(0);
    opline->extended_value = get_next_op_number((compiler_globals.active_op_array));
   }
  }

  for (j = 0; j < classes->children - 1; j++) {
   zend_update_jump_target_to_next(jmp_multicatch[j]);
  }

  _efree((jmp_multicatch) );

  zend_compile_stmt(stmt_ast);

  if (!is_last_catch) {
   jmp_opnums[i + 1] = zend_emit_jump(0);
  }

  opline = &(compiler_globals.active_op_array)->opcodes[opnum_catch];
  if (!is_last_catch) {
   opline->extended_value = get_next_op_number((compiler_globals.active_op_array));
  }
 }

 for (i = 0; i < catches->children; ++i) {
  zend_update_jump_target_to_next(jmp_opnums[i]);
 }

 if (finally_ast) {
  zend_loop_var discard_exception;
  uint32_t opnum_jmp = get_next_op_number((compiler_globals.active_op_array)) + 1;


  zend_stack_del_top(&(compiler_globals.loop_var_stack));


  discard_exception.opcode = 159;
  discard_exception.var_type = (1<<1);
  discard_exception.var_num = (compiler_globals.context).fast_call_var;
  zend_stack_push(&(compiler_globals.loop_var_stack), &discard_exception);

  (compiler_globals.zend_lineno) = finally_ast->lineno;

  opline = zend_emit_op(((void *)0), 162, ((void *)0), ((void *)0));
  opline->op1.num = try_catch_offset;
  opline->result_type = (1<<1);
  opline->result.var = (compiler_globals.context).fast_call_var;

  zend_emit_op(((void *)0), 42, ((void *)0), ((void *)0));

  (compiler_globals.context).in_finally++;
  zend_compile_stmt(finally_ast);
  (compiler_globals.context).in_finally--;

  (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].finally_op = opnum_jmp + 1;
  (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].finally_end
   = get_next_op_number((compiler_globals.active_op_array));

  opline = zend_emit_op(((void *)0), 163, ((void *)0), ((void *)0));
  opline->op1_type = (1<<1);
  opline->op1.var = (compiler_globals.context).fast_call_var;
  opline->op2.num = orig_try_catch_offset;

  zend_update_jump_target_to_next(opnum_jmp);

  (compiler_globals.context).fast_call_var = orig_fast_call_var;


  zend_stack_del_top(&(compiler_globals.loop_var_stack));
 }

 (compiler_globals.context).try_catch_offset = orig_try_catch_offset;

 _efree((jmp_opnums) );
}



void zend_handle_encoding_declaration(zend_ast *ast)
{
 zend_ast_list *declares = zend_ast_get_list(ast);
 uint32_t i;
 for (i = 0; i < declares->children; ++i) {
  zend_ast *declare_ast = declares->child[i];
  zend_ast *name_ast = declare_ast->child[0];
  zend_ast *value_ast = declare_ast->child[1];
  zend_string *name = zend_ast_get_str(name_ast);

  if (((name)->len == sizeof("encoding") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("encoding"), sizeof("encoding") - 1))) {
   if (value_ast->kind != ZEND_AST_ZVAL) {
    zend_error_noreturn((1<<6L), "Encoding must be a literal");
   }

   if ((compiler_globals.multibyte)) {
    zend_string *encoding_name = _zval_get_string((zend_ast_get_zval(value_ast)));

    const zend_encoding *new_encoding, *old_encoding;
    zend_encoding_filter old_input_filter;

    (compiler_globals.encoding_declared) = 1;

    new_encoding = zend_multibyte_fetch_encoding((encoding_name)->val);
    if (!new_encoding) {
     zend_error((1<<7L), "Unsupported encoding [%s]", (encoding_name)->val);
    } else {
     old_input_filter = (language_scanner_globals.input_filter);
     old_encoding = (language_scanner_globals.script_encoding);
     zend_multibyte_set_filter(new_encoding);


     if (old_input_filter != (language_scanner_globals.input_filter) ||
       (old_input_filter && new_encoding != old_encoding)) {
      zend_multibyte_yyinput_again(old_input_filter, old_encoding);
     }
    }

    zend_string_release(encoding_name);
   } else {
    zend_error((1<<7L), "declare(encoding=...) ignored because "
     "Zend multibyte feature is turned off by settings");
   }
  }
 }
}


static int zend_declare_is_first_statement(zend_ast *ast)
{
 uint32_t i = 0;
 zend_ast_list *file_ast = zend_ast_get_list((compiler_globals.ast));


 while (i < file_ast->children) {
  if (file_ast->child[i] == ast) {
   return SUCCESS;
  } else if (file_ast->child[i] == ((void *)0)) {

   return FAILURE;
  } else if (file_ast->child[i]->kind != ZEND_AST_DECLARE) {

   return FAILURE;
  }
  i++;
 }
 return FAILURE;
}


void zend_compile_declare(zend_ast *ast)
{
 zend_ast_list *declares = zend_ast_get_list(ast->child[0]);
 zend_ast *stmt_ast = ast->child[1];
 zend_declarables orig_declarables = ((compiler_globals.file_context).declarables);
 uint32_t i;

 for (i = 0; i < declares->children; ++i) {
  zend_ast *declare_ast = declares->child[i];
  zend_ast *name_ast = declare_ast->child[0];
  zend_ast *value_ast = declare_ast->child[1];

  zend_string *name = zend_ast_get_str(name_ast);
  if (((name)->len == sizeof("ticks") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("ticks"), sizeof("ticks") - 1))) {
   zval value_zv;
   zend_const_expr_to_zval(&value_zv, value_ast);
   ((compiler_globals.file_context).declarables).ticks = _zval_get_long((&value_zv));
   _zval_ptr_dtor_nogc((&value_zv) );
  } else if (((name)->len == sizeof("encoding") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("encoding"), sizeof("encoding") - 1))) {

   if (FAILURE == zend_declare_is_first_statement(ast)) {
    zend_error_noreturn((1<<6L), "Encoding declaration pragma must be "
     "the very first statement in the script");
   }
  } else if (((name)->len == sizeof("strict_types") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("strict_types"), sizeof("strict_types") - 1))) {
   zval value_zv;

   if (FAILURE == zend_declare_is_first_statement(ast)) {
    zend_error_noreturn((1<<6L), "strict_types declaration must be "
     "the very first statement in the script");
   }

   if (ast->child[1] != ((void *)0)) {
    zend_error_noreturn((1<<6L), "strict_types declaration must not "
     "use block mode");
   }

   zend_const_expr_to_zval(&value_zv, value_ast);

   if (zval_get_type(&(value_zv)) != 4 || ((value_zv).value.lval != 0 && (value_zv).value.lval != 1)) {
    zend_error_noreturn((1<<6L), "strict_types declaration must have 0 or 1 as its value");
   }

   if ((value_zv).value.lval == 1) {
    (compiler_globals.active_op_array)->fn_flags |= 0x80000000;
   }

  } else {
   zend_error((1<<7L), "Unsupported declare '%s'", (name)->val);
  }
 }

 if (stmt_ast) {
  zend_compile_stmt(stmt_ast);

  ((compiler_globals.file_context).declarables) = orig_declarables;
 }
}


void zend_compile_stmt_list(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 for (i = 0; i < list->children; ++i) {
  zend_compile_stmt(list->child[i]);
 }
}


__attribute__ ((visibility("default"))) void zend_set_function_arg_flags(zend_function *func)
{
 uint32_t i, n;

 func->common.arg_flags[0] = 0;
 func->common.arg_flags[1] = 0;
 func->common.arg_flags[2] = 0;
 if (func->common.arg_info) {
  n = (((func->common.num_args)<(12))?(func->common.num_args):(12));
  i = 0;
  while (i < n) {
   do { (func)->quick_arg_flags |= (((func->common.arg_info[i].pass_by_reference) << 6) << (i + 1) * 2); } while (0);
   i++;
  }
  if (__builtin_expect(!!(func->common.fn_flags & 0x1000000 && func->common.arg_info[i].pass_by_reference), 0)) {
   uint32_t pass_by_reference = func->common.arg_info[i].pass_by_reference;
   while (i < 12) {
    do { (func)->quick_arg_flags |= (((pass_by_reference) << 6) << (i + 1) * 2); } while (0);
    i++;
   }
  }
 }
}


static void zend_compile_typename(zend_ast *ast, zend_arg_info *arg_info)
{
 if (ast->kind == ZEND_AST_TYPE) {
  arg_info->type_hint = ast->attr;
 } else {
  zend_string *class_name = zend_ast_get_str(ast);
  zend_uchar type = zend_lookup_builtin_type_by_name(class_name);

  if (type != 0) {
   if ((ast->attr & 1) != 1) {
    zend_error_noreturn((1<<6L),
     "Scalar type declaration '%s' must be unqualified",
     (zend_string_tolower(class_name))->val);
   }
   arg_info->type_hint = type;
  } else {
   uint32_t fetch_type = zend_get_class_fetch_type_ast(ast);
   if (fetch_type == 0) {
    class_name = zend_resolve_class_name_ast(ast);
    zend_assert_valid_class_name(class_name);
   } else {
    zend_ensure_valid_class_fetch_type(fetch_type);
    zend_string_addref(class_name);
   }

   arg_info->type_hint = 8;
   arg_info->class_name = class_name;
  }
 }
}


void zend_compile_params(zend_ast *ast, zend_ast *return_type_ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_arg_info *arg_infos;

 if (return_type_ast) {

  arg_infos = _safe_emalloc((sizeof(zend_arg_info)), (list->children + 1), (0) );
  arg_infos->name = ((void *)0);
  arg_infos->pass_by_reference = (op_array->fn_flags & 0x4000000) != 0;
  arg_infos->is_variadic = 0;
  arg_infos->type_hint = 0;
  arg_infos->allow_null = 0;
  arg_infos->class_name = ((void *)0);

  if (return_type_ast->attr & (1<<8)) {
   arg_infos->allow_null = 1;
   return_type_ast->attr &= ~(1<<8);
  }

  zend_compile_typename(return_type_ast, arg_infos);

  if (arg_infos->type_hint == 18 && arg_infos->allow_null) {
   zend_error_noreturn((1<<6L), "Void type cannot be nullable");
  }

  arg_infos++;
  op_array->fn_flags |= 0x40000000;
 } else {
  if (list->children == 0) {
   return;
  }
  arg_infos = _safe_emalloc((sizeof(zend_arg_info)), (list->children), (0) );
 }

 for (i = 0; i < list->children; ++i) {
  zend_ast *param_ast = list->child[i];
  zend_ast *type_ast = param_ast->child[0];
  zend_ast *var_ast = param_ast->child[1];
  zend_ast *default_ast = param_ast->child[2];
  zend_string *name = zend_ast_get_str(var_ast);
  zend_bool is_ref = (param_ast->attr & (1<<0)) != 0;
  zend_bool is_variadic = (param_ast->attr & (1<<1)) != 0;

  znode var_node, default_node;
  zend_uchar opcode;
  zend_op *opline;
  zend_arg_info *arg_info;

  if (zend_is_auto_global(name)) {
   zend_error_noreturn((1<<6L), "Cannot re-assign auto-global variable %s",
    (name)->val);
  }

  var_node.op_type = (1<<4);
  var_node.u.op.var = lookup_cv((compiler_globals.active_op_array), zend_string_copy(name));

  if (((uint32_t)(((zval*)(((char*)(((void *)0))) + ((int)(var_node.u.op.var)))) - (((zval*)(((void *)0))) + (((int)(((((sizeof(zend_execute_data)) + 8 - 1L) & ~(8 - 1L)) + (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)) - 1) / (((sizeof(zval)) + 8 - 1L) & ~(8 - 1L)))) + ((int)(0)))))) != i) {
   zend_error_noreturn((1<<6L), "Redefinition of parameter $%s",
    (name)->val);
  } else if (((name)->len == sizeof("this")-1 && !memcmp((name)->val, "this", sizeof("this") - 1))) {
   if ((op_array->scope || (op_array->fn_flags & 0x100000))
     && (op_array->fn_flags & 0x01) == 0) {
    zend_error_noreturn((1<<6L), "Cannot use $this as parameter");
   }
   op_array->this_var = var_node.u.op.var;
  }

  if (op_array->fn_flags & 0x1000000) {
   zend_error_noreturn((1<<6L), "Only the last parameter can be variadic");
  }

  if (is_variadic) {
   opcode = 164;
   default_node.op_type = (1<<3);
   op_array->fn_flags |= 0x1000000;

   if (default_ast) {
    zend_error_noreturn((1<<6L),
     "Variadic parameter cannot have a default value");
   }
  } else if (default_ast) {

   uint32_t cops = (compiler_globals.compiler_options);
   (compiler_globals.compiler_options) |= (1<<5) | (1<<7);
   opcode = 64;
   default_node.op_type = (1<<0);
   zend_const_expr_to_zval(&default_node.u.constant, default_ast);
   (compiler_globals.compiler_options) = cops;
  } else {
   opcode = 63;
   default_node.op_type = (1<<3);
   op_array->required_num_args = i + 1;
  }

  opline = zend_emit_op(((void *)0), opcode, ((void *)0), &default_node);
  do { opline->result_type = (&var_node)->op_type; if ((&var_node)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&var_node)->u.constant); } else { opline->result = (&var_node)->u.op; } } while (0);
  opline->op1.num = i + 1;

  arg_info = &arg_infos[i];
  arg_info->name = zend_string_copy(name);
  arg_info->pass_by_reference = is_ref;
  arg_info->is_variadic = is_variadic;
  arg_info->type_hint = 0;
  arg_info->allow_null = 1;
  arg_info->class_name = ((void *)0);

  if (type_ast) {
   zend_bool has_null_default = default_ast
    && (zval_get_type(&(default_node.u.constant)) == 1
     || (zval_get_type(&(default_node.u.constant)) == 11
      && strcasecmp(((default_node.u.constant).value.str)->val, "NULL") == 0));
   zend_bool is_explicitly_nullable = (type_ast->attr & (1<<8)) == (1<<8);

   op_array->fn_flags |= 0x10000000;
   arg_info->allow_null = has_null_default || is_explicitly_nullable;

   zend_compile_typename(type_ast, arg_info);

   if (arg_info->type_hint == 18) {
    zend_error_noreturn((1<<6L), "void cannot be used as a parameter type");
   }

   if (type_ast->kind == ZEND_AST_TYPE) {
    if (arg_info->type_hint == 7) {
     if (default_ast && !has_null_default
      && zval_get_type(&(default_node.u.constant)) != 7
      && !(((default_node.u.constant).u1.v.type_flags & (1<<0)) != 0)
     ) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with array type can only be an array or NULL");
     }
    } else if (arg_info->type_hint == 14 && default_ast) {
     if (!has_null_default && !(((default_node.u.constant).u1.v.type_flags & (1<<0)) != 0)) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with callable type can only be NULL");
     }
    }
   } else {
    if (default_ast && !has_null_default && !(((default_node.u.constant).u1.v.type_flags & (1<<0)) != 0)) {
     if (arg_info->class_name) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with a class type can only be NULL");
     } else switch (arg_info->type_hint) {
      case 5:
       if (zval_get_type(&(default_node.u.constant)) != 5 && zval_get_type(&(default_node.u.constant)) != 4) {
        zend_error_noreturn((1<<6L), "Default value for parameters "
         "with a float type can only be float, integer, or NULL");
       }
       break;

      default:
       if (!( (arg_info->type_hint) == (zval_get_type(&(default_node.u.constant))) || ((arg_info->type_hint) == 13 && ((zval_get_type(&(default_node.u.constant))) == 3 || (zval_get_type(&(default_node.u.constant))) == 2)) )) {
        zend_error_noreturn((1<<6L), "Default value for parameters "
         "with a %s type can only be %s or NULL",
         zend_get_type_by_const(arg_info->type_hint), zend_get_type_by_const(arg_info->type_hint));
       }
       break;
     }
    }
   }


   if (opline->opcode == 64) {
    if (arg_info->class_name) {
     zend_alloc_cache_slot(opline->op2.constant);
    } else {
     (op_array->literals[opline->op2.constant]).u2.cache_slot = -1;
    }
   } else {
    if (arg_info->class_name) {
     opline->op2.num = op_array->cache_size;
     op_array->cache_size += sizeof(void*);
    } else {
     opline->op2.num = -1;
    }
   }
  } else {
   if (opline->opcode == 64) {
    (op_array->literals[opline->op2.constant]).u2.cache_slot = -1;
   } else {
    opline->op2.num = -1;
   }
  }
 }


 op_array->num_args = list->children;
 op_array->arg_info = arg_infos;


 if (op_array->fn_flags & 0x1000000) {
  op_array->num_args--;
 }
 zend_set_function_arg_flags((zend_function*)op_array);
}


static void zend_compile_closure_binding(znode *closure, zend_ast *uses_ast)
{
 zend_ast_list *list = zend_ast_get_list(uses_ast);
 uint32_t i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *var_name_ast = list->child[i];
  zend_string *var_name = zend_ast_get_str(var_name_ast);
  zend_bool by_ref = var_name_ast->attr;
  zend_op *opline;

  if (((var_name)->len == sizeof("this")-1 && !memcmp((var_name)->val, "this", sizeof("this") - 1))) {
   zend_error_noreturn((1<<6L), "Cannot use $this as lexical variable");
  }

  if (zend_is_auto_global(var_name)) {
   zend_error_noreturn((1<<6L), "Cannot use auto-global as lexical variable");
  }

  opline = zend_emit_op(((void *)0), 182, closure, ((void *)0));
  opline->op2_type = (1<<4);
  opline->op2.var = lookup_cv((compiler_globals.active_op_array), zend_string_copy(var_name));
  opline->extended_value = by_ref;
 }
}


void zend_compile_closure_uses(zend_ast *ast)
{
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *var_ast = list->child[i];
  zend_string *var_name = zend_ast_get_str(var_ast);
  zend_bool by_ref = var_ast->attr;
  zval zv;
  do { (*(&zv)).u1.type_info = 1; } while (0);

  if (op_array->static_variables
    && zend_hash_exists(op_array->static_variables, var_name)) {
   zend_error_noreturn((1<<6L),
    "Cannot use variable $%s twice", (var_name)->val);
  }

  {
   int i;
   for (i = 0; i < op_array->last_var; i++) {
    if (zend_string_equals(op_array->vars[i], var_name)) {
     zend_error_noreturn((1<<6L),
      "Cannot use lexical variable $%s as a parameter name", (var_name)->val);
    }
   }
  }

  zend_compile_static_var_common(var_ast, &zv, by_ref);
 }
}


void zend_begin_method_decl(zend_op_array *op_array, zend_string *name, zend_bool has_body)
{
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_bool in_interface = (ce->ce_flags & 0x40) != 0;
 zend_bool in_trait = (ce->ce_flags & 0x80) != 0;
 zend_bool is_public = (op_array->fn_flags & 0x100) != 0;
 zend_bool is_static = (op_array->fn_flags & 0x01) != 0;

 zend_string *lcname;

 if (in_interface) {
  if (!is_public || (op_array->fn_flags & (0x04|0x02))) {
   zend_error_noreturn((1<<6L), "Access type for interface method "
    "%s::%s() must be omitted", (ce->name)->val, (name)->val);
  }
  op_array->fn_flags |= 0x02;
 }

 if (op_array->fn_flags & 0x02) {
  if (op_array->fn_flags & 0x400) {
   zend_error_noreturn((1<<6L), "%s function %s::%s() cannot be declared private",
    in_interface ? "Interface" : "Abstract", (ce->name)->val, (name)->val);
  }

  if (has_body) {
   zend_error_noreturn((1<<6L), "%s function %s::%s() cannot contain body",
    in_interface ? "Interface" : "Abstract", (ce->name)->val, (name)->val);
  }

  ce->ce_flags |= 0x10;
 } else if (!has_body) {
  zend_error_noreturn((1<<6L), "Non-abstract method %s::%s() must contain body",
   (ce->name)->val, (name)->val);
 }

 op_array->scope = ce;
 op_array->function_name = zend_string_copy(name);

 lcname = zend_string_tolower(name);
 lcname = zend_new_interned_string(lcname);

 if (zend_hash_add_ptr(&ce->function_table, lcname, op_array) == ((void *)0)) {
  zend_error_noreturn((1<<6L), "Cannot redeclare %s::%s()",
   (ce->name)->val, (name)->val);
 }

 if (in_interface) {
  if (((lcname)->len == sizeof("__call")-1 && !memcmp((lcname)->val, "__call", sizeof("__call") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __call() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__callstatic")-1 && !memcmp((lcname)->val, "__callstatic", sizeof("__callstatic") - 1))) {
   if (!is_public || !is_static) {
    zend_error((1<<1L), "The magic method __callStatic() must have "
     "public visibility and be static");
   }
  } else if (((lcname)->len == sizeof("__get")-1 && !memcmp((lcname)->val, "__get", sizeof("__get") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __get() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__set")-1 && !memcmp((lcname)->val, "__set", sizeof("__set") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __set() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__unset")-1 && !memcmp((lcname)->val, "__unset", sizeof("__unset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __unset() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__isset")-1 && !memcmp((lcname)->val, "__isset", sizeof("__isset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __isset() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__tostring")-1 && !memcmp((lcname)->val, "__tostring", sizeof("__tostring") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __toString() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__invoke")-1 && !memcmp((lcname)->val, "__invoke", sizeof("__invoke") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __invoke() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__debuginfo")-1 && !memcmp((lcname)->val, "__debuginfo", sizeof("__debuginfo") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __debugInfo() must have "
     "public visibility and cannot be static");
   }
  }
 } else {
  if (!in_trait && ((lcname)->len == (ce->name)->len && !zend_binary_strcasecmp((lcname)->val, (lcname)->len, (ce->name)->val, (ce->name)->len))) {
   if (!ce->constructor) {
    ce->constructor = (zend_function *) op_array;
   }
  } else if (((lcname)->len == sizeof("__construct")-1 && !memcmp((lcname)->val, "__construct", sizeof("__construct") - 1))) {
   ce->constructor = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__destruct")-1 && !memcmp((lcname)->val, "__destruct", sizeof("__destruct") - 1))) {
   ce->destructor = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__clone")-1 && !memcmp((lcname)->val, "__clone", sizeof("__clone") - 1))) {
   ce->clone = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__call")-1 && !memcmp((lcname)->val, "__call", sizeof("__call") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __call() must have "
     "public visibility and cannot be static");
   }
   ce->__call = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__callstatic")-1 && !memcmp((lcname)->val, "__callstatic", sizeof("__callstatic") - 1))) {
   if (!is_public || !is_static) {
    zend_error((1<<1L), "The magic method __callStatic() must have "
     "public visibility and be static");
   }
   ce->__callstatic = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__get")-1 && !memcmp((lcname)->val, "__get", sizeof("__get") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __get() must have "
     "public visibility and cannot be static");
   }
   ce->__get = (zend_function *) op_array;
   ce->ce_flags |= 0x1000000;
  } else if (((lcname)->len == sizeof("__set")-1 && !memcmp((lcname)->val, "__set", sizeof("__set") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __set() must have "
     "public visibility and cannot be static");
   }
   ce->__set = (zend_function *) op_array;
   ce->ce_flags |= 0x1000000;
  } else if (((lcname)->len == sizeof("__unset")-1 && !memcmp((lcname)->val, "__unset", sizeof("__unset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __unset() must have "
     "public visibility and cannot be static");
   }
   ce->__unset = (zend_function *) op_array;
   ce->ce_flags |= 0x1000000;
  } else if (((lcname)->len == sizeof("__isset")-1 && !memcmp((lcname)->val, "__isset", sizeof("__isset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __isset() must have "
     "public visibility and cannot be static");
   }
   ce->__isset = (zend_function *) op_array;
   ce->ce_flags |= 0x1000000;
  } else if (((lcname)->len == sizeof("__tostring")-1 && !memcmp((lcname)->val, "__tostring", sizeof("__tostring") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __toString() must have "
     "public visibility and cannot be static");
   }
   ce->__tostring = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__invoke")-1 && !memcmp((lcname)->val, "__invoke", sizeof("__invoke") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __invoke() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__debuginfo")-1 && !memcmp((lcname)->val, "__debuginfo", sizeof("__debuginfo") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __debugInfo() must have "
     "public visibility and cannot be static");
   }
   ce->__debugInfo = (zend_function *) op_array;
  } else if (!is_static) {
   op_array->fn_flags |= 0x10000;
  }
 }

 zend_string_release(lcname);
}


static void zend_begin_func_decl(znode *result, zend_op_array *op_array, zend_ast_decl *decl)
{
 zend_ast *params_ast = decl->child[0];
 zend_string *unqualified_name, *name, *lcname, *key;
 zend_op *opline;

 unqualified_name = decl->name;
 op_array->function_name = name = zend_prefix_with_ns(unqualified_name);
 lcname = zend_string_tolower(name);

 if (((compiler_globals.file_context).imports_function)) {
  zend_string *import_name = zend_hash_find_ptr_lc(
   ((compiler_globals.file_context).imports_function), (unqualified_name)->val, (unqualified_name)->len);
  if (import_name && !((lcname)->len == (import_name)->len && !zend_binary_strcasecmp((lcname)->val, (lcname)->len, (import_name)->val, (import_name)->len))) {
   zend_error_noreturn((1<<6L), "Cannot declare function %s "
    "because the name is already in use", (name)->val);
  }
 }

 if (((lcname)->len == sizeof("__autoload")-1 && !memcmp((lcname)->val, "__autoload", sizeof("__autoload") - 1))
  && zend_ast_get_list(params_ast)->children != 1
 ) {
  zend_error_noreturn((1<<6L), "%s() must take exactly 1 argument",
   "__autoload");
 }

 key = zend_build_runtime_definition_key(lcname, decl->lex_pos);
 zend_hash_update_ptr((compiler_globals.function_table), key, op_array);

 if (op_array->fn_flags & 0x100000) {
  opline = zend_emit_op_tmp(result, 153, ((void *)0), ((void *)0));
  opline->op1_type = (1<<0);
  do { zval _c; do { zval *__z = (&_c); zend_string *__s = (key); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);
 } else {
  opline = get_next_op((compiler_globals.active_op_array));
  opline->opcode = 141;
  opline->op1_type = (1<<0);
  do { zval _c; do { zval *__z = (&_c); zend_string *__s = (zend_string_copy(lcname)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);

  zend_add_literal_string((compiler_globals.active_op_array), &key);
  opline->op2_type = (1<<3);
 }

 zend_string_release(lcname);
}


void zend_compile_func_decl(znode *result, zend_ast *ast)
{
 zend_ast_decl *decl = (zend_ast_decl *) ast;
 zend_ast *params_ast = decl->child[0];
 zend_ast *uses_ast = decl->child[1];
 zend_ast *stmt_ast = decl->child[2];
 zend_ast *return_type_ast = decl->child[3];
 zend_bool is_method = decl->kind == ZEND_AST_METHOD;

 zend_op_array *orig_op_array = (compiler_globals.active_op_array);
 zend_op_array *op_array = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
 zend_oparray_context orig_oparray_context;

 init_op_array(op_array, 2, 64);

 op_array->fn_flags |= (orig_op_array->fn_flags & 0x80000000);
 op_array->fn_flags |= decl->flags;
 op_array->line_start = decl->start_lineno;
 op_array->line_end = decl->end_lineno;
 if (decl->doc_comment) {
  op_array->doc_comment = zend_string_copy(decl->doc_comment);
 }
 if (decl->kind == ZEND_AST_CLOSURE) {
  op_array->fn_flags |= 0x100000;
 }

 if (is_method) {
  zend_bool has_body = stmt_ast != ((void *)0);
  zend_begin_method_decl(op_array, decl->name, has_body);
 } else {
  zend_begin_func_decl(result, op_array, decl);
  if (uses_ast) {
   zend_compile_closure_binding(result, uses_ast);
  }
 }

 (compiler_globals.active_op_array) = op_array;

 zend_oparray_context_begin(&orig_oparray_context);

 if ((compiler_globals.compiler_options) & (1<<0)) {
  zend_op *opline_ext = zend_emit_op(((void *)0), 104, ((void *)0), ((void *)0));
  opline_ext->lineno = decl->start_lineno;
 }

 {

  zend_loop_var dummy_var;
  dummy_var.opcode = 62;

  zend_stack_push(&(compiler_globals.loop_var_stack), (void *) &dummy_var);
 }

 zend_compile_params(params_ast, return_type_ast);
 if ((compiler_globals.active_op_array)->fn_flags & 0x800000) {
  zend_mark_function_as_generator();
  zend_emit_op(((void *)0), 41, ((void *)0), ((void *)0));
 }
 if (uses_ast) {
  zend_compile_closure_uses(uses_ast);
 }
 zend_compile_stmt(stmt_ast);

 if (is_method) {
  zend_check_magic_method_implementation(
   (compiler_globals.active_class_entry), (zend_function *) op_array, (1<<6L));
 }


 (compiler_globals.zend_lineno) = decl->end_lineno;

 zend_do_extended_info();
 zend_emit_final_return(0);

 pass_two((compiler_globals.active_op_array));
 zend_oparray_context_end(&orig_oparray_context);


 zend_stack_del_top(&(compiler_globals.loop_var_stack));

 (compiler_globals.active_op_array) = orig_op_array;
}


void zend_compile_prop_decl(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t flags = list->attr;
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 uint32_t i, children = list->children;

 if (ce->ce_flags & 0x40) {
  zend_error_noreturn((1<<6L), "Interfaces may not include member variables");
 }

 if (flags & 0x02) {
  zend_error_noreturn((1<<6L), "Properties cannot be declared abstract");
 }

 for (i = 0; i < children; ++i) {
  zend_ast *prop_ast = list->child[i];
  zend_ast *name_ast = prop_ast->child[0];
  zend_ast *value_ast = prop_ast->child[1];
  zend_ast *doc_comment_ast = prop_ast->child[2];
  zend_string *name = zend_ast_get_str(name_ast);
  zend_string *doc_comment = ((void *)0);
  zval value_zv;


  if (doc_comment_ast) {
   doc_comment = zend_string_copy(zend_ast_get_str(doc_comment_ast));
  }

  if (flags & 0x04) {
   zend_error_noreturn((1<<6L), "Cannot declare property %s::$%s final, "
    "the final modifier is allowed only for methods and classes",
    (ce->name)->val, (name)->val);
  }

  if (zend_hash_exists(&ce->properties_info, name)) {
   zend_error_noreturn((1<<6L), "Cannot redeclare %s::$%s",
    (ce->name)->val, (name)->val);
  }

  if (value_ast) {
   zend_const_expr_to_zval(&value_zv, value_ast);
  } else {
   do { (*(&value_zv)).u1.type_info = 1; } while (0);
  }

  name = zend_new_interned_string_safe(name);
  zend_declare_property_ex(ce, name, &value_zv, flags, doc_comment);
 }
}


void zend_compile_class_const_decl(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 uint32_t i;

 if ((ce->ce_flags & 0x80) != 0) {
  zend_error_noreturn((1<<6L), "Traits cannot have constants");
  return;
 }

 for (i = 0; i < list->children; ++i) {
  zend_ast *const_ast = list->child[i];
  zend_ast *name_ast = const_ast->child[0];
  zend_ast *value_ast = const_ast->child[1];
  zend_ast *doc_comment_ast = const_ast->child[2];
  zend_string *name = zend_ast_get_str(name_ast);
  zend_string *doc_comment = doc_comment_ast ? zend_string_copy(zend_ast_get_str(doc_comment_ast)) : ((void *)0);
  zval value_zv;

  if (__builtin_expect(!!(ast->attr & (0x01|0x02|0x04)), 0)) {
   if (ast->attr & 0x01) {
    zend_error_noreturn((1<<6L), "Cannot use 'static' as constant modifier");
   } else if (ast->attr & 0x02) {
    zend_error_noreturn((1<<6L), "Cannot use 'abstract' as constant modifier");
   } else if (ast->attr & 0x04) {
    zend_error_noreturn((1<<6L), "Cannot use 'final' as constant modifier");
   }
  }

  zend_const_expr_to_zval(&value_zv, value_ast);

  name = zend_new_interned_string_safe(name);
  zend_declare_class_constant_ex(ce, name, &value_zv, ast->attr, doc_comment);
 }
}


static zend_trait_method_reference *zend_compile_method_ref(zend_ast *ast)
{
 zend_ast *class_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];

 zend_trait_method_reference *method_ref = (__builtin_constant_p((sizeof(zend_trait_method_reference)) ) ? (((sizeof(zend_trait_method_reference)) <= 8) ? _emalloc_8() : (((sizeof(zend_trait_method_reference)) <= 16) ? _emalloc_16() : (((sizeof(zend_trait_method_reference)) <= 24) ? _emalloc_24() : (((sizeof(zend_trait_method_reference)) <= 32) ? _emalloc_32() : (((sizeof(zend_trait_method_reference)) <= 40) ? _emalloc_40() : (((sizeof(zend_trait_method_reference)) <= 48) ? _emalloc_48() : (((sizeof(zend_trait_method_reference)) <= 56) ? _emalloc_56() : (((sizeof(zend_trait_method_reference)) <= 64) ? _emalloc_64() : (((sizeof(zend_trait_method_reference)) <= 80) ? _emalloc_80() : (((sizeof(zend_trait_method_reference)) <= 96) ? _emalloc_96() : (((sizeof(zend_trait_method_reference)) <= 112) ? _emalloc_112() : (((sizeof(zend_trait_method_reference)) <= 128) ? _emalloc_128() : (((sizeof(zend_trait_method_reference)) <= 160) ? _emalloc_160() : (((sizeof(zend_trait_method_reference)) <= 192) ? _emalloc_192() : (((sizeof(zend_trait_method_reference)) <= 224) ? _emalloc_224() : (((sizeof(zend_trait_method_reference)) <= 256) ? _emalloc_256() : (((sizeof(zend_trait_method_reference)) <= 320) ? _emalloc_320() : (((sizeof(zend_trait_method_reference)) <= 384) ? _emalloc_384() : (((sizeof(zend_trait_method_reference)) <= 448) ? _emalloc_448() : (((sizeof(zend_trait_method_reference)) <= 512) ? _emalloc_512() : (((sizeof(zend_trait_method_reference)) <= 640) ? _emalloc_640() : (((sizeof(zend_trait_method_reference)) <= 768) ? _emalloc_768() : (((sizeof(zend_trait_method_reference)) <= 896) ? _emalloc_896() : (((sizeof(zend_trait_method_reference)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_trait_method_reference)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_trait_method_reference)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_trait_method_reference)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_trait_method_reference)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_trait_method_reference)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_trait_method_reference)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_trait_method_reference)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_trait_method_reference))) : _emalloc_huge((sizeof(zend_trait_method_reference)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_trait_method_reference)) ) );
 method_ref->ce = ((void *)0);
 method_ref->method_name = zend_string_copy(zend_ast_get_str(method_ast));

 if (class_ast) {
  method_ref->class_name = zend_resolve_class_name_ast(class_ast);
 } else {
  method_ref->class_name = ((void *)0);
 }

 return method_ref;
}


static zend_string **zend_compile_name_list(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_string **names = _safe_emalloc((sizeof(zend_string *)), (list->children + 1), (0) );
 uint32_t i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *name_ast = list->child[i];
  names[i] = zend_resolve_class_name_ast(name_ast);
 }

 names[list->children] = ((void *)0);

 return names;
}


static void zend_compile_trait_precedence(zend_ast *ast)
{
 zend_ast *method_ref_ast = ast->child[0];
 zend_ast *insteadof_ast = ast->child[1];

 zend_trait_precedence *precedence = (__builtin_constant_p((sizeof(zend_trait_precedence)) ) ? (((sizeof(zend_trait_precedence)) <= 8) ? _emalloc_8() : (((sizeof(zend_trait_precedence)) <= 16) ? _emalloc_16() : (((sizeof(zend_trait_precedence)) <= 24) ? _emalloc_24() : (((sizeof(zend_trait_precedence)) <= 32) ? _emalloc_32() : (((sizeof(zend_trait_precedence)) <= 40) ? _emalloc_40() : (((sizeof(zend_trait_precedence)) <= 48) ? _emalloc_48() : (((sizeof(zend_trait_precedence)) <= 56) ? _emalloc_56() : (((sizeof(zend_trait_precedence)) <= 64) ? _emalloc_64() : (((sizeof(zend_trait_precedence)) <= 80) ? _emalloc_80() : (((sizeof(zend_trait_precedence)) <= 96) ? _emalloc_96() : (((sizeof(zend_trait_precedence)) <= 112) ? _emalloc_112() : (((sizeof(zend_trait_precedence)) <= 128) ? _emalloc_128() : (((sizeof(zend_trait_precedence)) <= 160) ? _emalloc_160() : (((sizeof(zend_trait_precedence)) <= 192) ? _emalloc_192() : (((sizeof(zend_trait_precedence)) <= 224) ? _emalloc_224() : (((sizeof(zend_trait_precedence)) <= 256) ? _emalloc_256() : (((sizeof(zend_trait_precedence)) <= 320) ? _emalloc_320() : (((sizeof(zend_trait_precedence)) <= 384) ? _emalloc_384() : (((sizeof(zend_trait_precedence)) <= 448) ? _emalloc_448() : (((sizeof(zend_trait_precedence)) <= 512) ? _emalloc_512() : (((sizeof(zend_trait_precedence)) <= 640) ? _emalloc_640() : (((sizeof(zend_trait_precedence)) <= 768) ? _emalloc_768() : (((sizeof(zend_trait_precedence)) <= 896) ? _emalloc_896() : (((sizeof(zend_trait_precedence)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_trait_precedence)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_trait_precedence)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_trait_precedence)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_trait_precedence)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_trait_precedence)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_trait_precedence)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_trait_precedence)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_trait_precedence))) : _emalloc_huge((sizeof(zend_trait_precedence)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_trait_precedence)) ) );
 precedence->trait_method = zend_compile_method_ref(method_ref_ast);
 precedence->exclude_from_classes
  = (void *) zend_compile_name_list(insteadof_ast);

 zend_add_to_list(&(compiler_globals.active_class_entry)->trait_precedences, precedence);
}


static void zend_compile_trait_alias(zend_ast *ast)
{
 zend_ast *method_ref_ast = ast->child[0];
 zend_ast *alias_ast = ast->child[1];
 uint32_t modifiers = ast->attr;

 zend_trait_alias *alias;

 if (modifiers == 0x01) {
  zend_error_noreturn((1<<6L), "Cannot use 'static' as method modifier");
 } else if (modifiers == 0x02) {
  zend_error_noreturn((1<<6L), "Cannot use 'abstract' as method modifier");
 } else if (modifiers == 0x04) {
  zend_error_noreturn((1<<6L), "Cannot use 'final' as method modifier");
 }

 alias = (__builtin_constant_p((sizeof(zend_trait_alias)) ) ? (((sizeof(zend_trait_alias)) <= 8) ? _emalloc_8() : (((sizeof(zend_trait_alias)) <= 16) ? _emalloc_16() : (((sizeof(zend_trait_alias)) <= 24) ? _emalloc_24() : (((sizeof(zend_trait_alias)) <= 32) ? _emalloc_32() : (((sizeof(zend_trait_alias)) <= 40) ? _emalloc_40() : (((sizeof(zend_trait_alias)) <= 48) ? _emalloc_48() : (((sizeof(zend_trait_alias)) <= 56) ? _emalloc_56() : (((sizeof(zend_trait_alias)) <= 64) ? _emalloc_64() : (((sizeof(zend_trait_alias)) <= 80) ? _emalloc_80() : (((sizeof(zend_trait_alias)) <= 96) ? _emalloc_96() : (((sizeof(zend_trait_alias)) <= 112) ? _emalloc_112() : (((sizeof(zend_trait_alias)) <= 128) ? _emalloc_128() : (((sizeof(zend_trait_alias)) <= 160) ? _emalloc_160() : (((sizeof(zend_trait_alias)) <= 192) ? _emalloc_192() : (((sizeof(zend_trait_alias)) <= 224) ? _emalloc_224() : (((sizeof(zend_trait_alias)) <= 256) ? _emalloc_256() : (((sizeof(zend_trait_alias)) <= 320) ? _emalloc_320() : (((sizeof(zend_trait_alias)) <= 384) ? _emalloc_384() : (((sizeof(zend_trait_alias)) <= 448) ? _emalloc_448() : (((sizeof(zend_trait_alias)) <= 512) ? _emalloc_512() : (((sizeof(zend_trait_alias)) <= 640) ? _emalloc_640() : (((sizeof(zend_trait_alias)) <= 768) ? _emalloc_768() : (((sizeof(zend_trait_alias)) <= 896) ? _emalloc_896() : (((sizeof(zend_trait_alias)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_trait_alias)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_trait_alias)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_trait_alias)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_trait_alias)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_trait_alias)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_trait_alias)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_trait_alias)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_trait_alias))) : _emalloc_huge((sizeof(zend_trait_alias)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_trait_alias)) ) );
 alias->trait_method = zend_compile_method_ref(method_ref_ast);
 alias->modifiers = modifiers;

 if (alias_ast) {
  alias->alias = zend_string_copy(zend_ast_get_str(alias_ast));
 } else {
  alias->alias = ((void *)0);
 }

 zend_add_to_list(&(compiler_globals.active_class_entry)->trait_aliases, alias);
}


void zend_compile_use_trait(zend_ast *ast)
{
 zend_ast_list *traits = zend_ast_get_list(ast->child[0]);
 zend_ast_list *adaptations = ast->child[1] ? zend_ast_get_list(ast->child[1]) : ((void *)0);
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_op *opline;
 uint32_t i;

 for (i = 0; i < traits->children; ++i) {
  zend_ast *trait_ast = traits->child[i];
  zend_string *name = zend_ast_get_str(trait_ast);

  if (ce->ce_flags & 0x40) {
   zend_error_noreturn((1<<6L), "Cannot use traits inside of interfaces. "
    "%s is used in %s", (name)->val, (ce->name)->val);
  }

  switch (zend_get_class_fetch_type(name)) {
   case 1:
   case 2:
   case 3:
    zend_error_noreturn((1<<6L), "Cannot use '%s' as trait name "
     "as it is reserved", (name)->val);
    break;
  }

  opline = get_next_op((compiler_globals.active_op_array));
  opline->opcode = 154;
  do { opline->op1_type = (&((compiler_globals.file_context).implementing_class))->op_type; if ((&((compiler_globals.file_context).implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&((compiler_globals.file_context).implementing_class))->u.constant); } else { opline->op1 = (&((compiler_globals.file_context).implementing_class))->u.op; } } while (0);
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
   zend_resolve_class_name_ast(trait_ast));

  ce->num_traits++;
 }

 if (!adaptations) {
  return;
 }

 for (i = 0; i < adaptations->children; ++i) {
  zend_ast *adaptation_ast = adaptations->child[i];
  switch (adaptation_ast->kind) {
   case ZEND_AST_TRAIT_PRECEDENCE:
    zend_compile_trait_precedence(adaptation_ast);
    break;
   case ZEND_AST_TRAIT_ALIAS:
    zend_compile_trait_alias(adaptation_ast);
    break;
   default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
  }
 }
}


void zend_compile_implements(znode *class_node, zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 for (i = 0; i < list->children; ++i) {
  zend_ast *class_ast = list->child[i];
  zend_string *name = zend_ast_get_str(class_ast);

  zend_op *opline;

  if (!zend_is_const_default_class_ref(class_ast)) {
   zend_error_noreturn((1<<6L),
    "Cannot use '%s' as interface name as it is reserved", (name)->val);
  }

  opline = zend_emit_op(((void *)0), 144, class_node, ((void *)0));
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
   zend_resolve_class_name_ast(class_ast));

  (compiler_globals.active_class_entry)->num_interfaces++;
 }
}


static zend_string *zend_generate_anon_class_name(unsigned char *lex_pos)
{
 zend_string *result;
 char char_pos_buf[32];
 size_t char_pos_len = sprintf(char_pos_buf, "%p", lex_pos);
 zend_string *filename = (compiler_globals.active_op_array)->filename;


 result = zend_string_alloc(sizeof("class@anonymous") + (filename)->len + char_pos_len, 0);
 sprintf((result)->val, "class@anonymous%c%s%s", '\0', (filename)->val, char_pos_buf);
 return zend_new_interned_string(result);
}


void zend_compile_class_decl(zend_ast *ast)
{
 zend_ast_decl *decl = (zend_ast_decl *) ast;
 zend_ast *extends_ast = decl->child[0];
 zend_ast *implements_ast = decl->child[1];
 zend_ast *stmt_ast = decl->child[2];
 zend_string *name, *lcname;
 zend_class_entry *ce = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_class_entry));
 zend_op *opline;
 znode declare_node, extends_node;

 zend_class_entry *original_ce = (compiler_globals.active_class_entry);
 znode original_implementing_class = ((compiler_globals.file_context).implementing_class);

 if (__builtin_expect(!!((decl->flags & 0x100) == 0), 1)) {
  zend_string *unqualified_name = decl->name;

  if ((compiler_globals.active_class_entry)) {
   zend_error_noreturn((1<<6L), "Class declarations may not be nested");
  }

  zend_assert_valid_class_name(unqualified_name);
  name = zend_prefix_with_ns(unqualified_name);
  name = zend_new_interned_string(name);
  lcname = zend_string_tolower(name);

  if (((compiler_globals.file_context).imports)) {
   zend_string *import_name = zend_hash_find_ptr_lc(
    ((compiler_globals.file_context).imports), (unqualified_name)->val, (unqualified_name)->len);
   if (import_name && !((lcname)->len == (import_name)->len && !zend_binary_strcasecmp((lcname)->val, (lcname)->len, (import_name)->val, (import_name)->len))) {
    zend_error_noreturn((1<<6L), "Cannot declare class %s "
      "because the name is already in use", (name)->val);
   }
  }
 } else {
  name = zend_generate_anon_class_name(decl->lex_pos);
  lcname = zend_string_tolower(name);
 }
 lcname = zend_new_interned_string(lcname);

 ce->type = 2;
 ce->name = name;
 zend_initialize_class_data(ce, 1);

 ce->ce_flags |= decl->flags;
 ce->info.user.filename = zend_get_compiled_filename();
 ce->info.user.line_start = decl->start_lineno;
 ce->info.user.line_end = decl->end_lineno;

 if (decl->doc_comment) {
  ce->info.user.doc_comment = zend_string_copy(decl->doc_comment);
 }

 if (__builtin_expect(!!((decl->flags & 0x100)), 0)) {

  ce->serialize = zend_class_serialize_deny;
  ce->unserialize = zend_class_unserialize_deny;
 }

 if (extends_ast) {
  if (!zend_is_const_default_class_ref(extends_ast)) {
   zend_string *extends_name = zend_ast_get_str(extends_ast);
   zend_error_noreturn((1<<6L),
    "Cannot use '%s' as class name as it is reserved", (extends_name)->val);
  }

  zend_compile_class_ref(&extends_node, extends_ast, 0);
 }

 opline = get_next_op((compiler_globals.active_op_array));
 zend_make_var_result(&declare_node, opline);

 do { (&((compiler_globals.file_context).implementing_class))->op_type = opline->result_type; if ((&((compiler_globals.file_context).implementing_class))->op_type == (1<<0)) { do { zval *_z1 = (&(&((compiler_globals.file_context).implementing_class))->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (&((compiler_globals.file_context).implementing_class))->u.op = opline->result; } } while (0);

 opline->op1_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c); } while (0);

 if (decl->flags & 0x100) {
  if (extends_ast) {
   opline->opcode = 172;
   do { opline->op2_type = (&extends_node)->op_type; if ((&extends_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&extends_node)->u.constant); } else { opline->op2 = (&extends_node)->u.op; } } while (0);
  } else {
   opline->opcode = 171;
  }

  zend_hash_update_ptr((compiler_globals.class_table), lcname, ce);
 } else {
  zend_string *key;

  if (extends_ast) {
   opline->opcode = 140;
   do { opline->op2_type = (&extends_node)->op_type; if ((&extends_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&extends_node)->u.constant); } else { opline->op2 = (&extends_node)->u.op; } } while (0);
  } else {
   opline->opcode = 139;
   opline->op2_type = (1<<3);
  }

  key = zend_build_runtime_definition_key(lcname, decl->lex_pos);

  zend_add_literal_string((compiler_globals.active_op_array), &key);

  zend_hash_update_ptr((compiler_globals.class_table), key, ce);
 }

 (compiler_globals.active_class_entry) = ce;

 zend_compile_stmt(stmt_ast);


 (compiler_globals.zend_lineno) = ast->lineno;

 if (ce->num_traits == 0) {

  zend_check_deprecated_constructor(ce);
 }

 if (ce->constructor) {
  ce->constructor->common.fn_flags |= 0x2000;
  if (ce->constructor->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Constructor %s::%s() cannot be static",
    (ce->name)->val, (ce->constructor->common.function_name)->val);
  }
  if (ce->constructor->common.fn_flags & 0x40000000) {
   zend_error_noreturn((1<<6L),
    "Constructor %s::%s() cannot declare a return type",
    (ce->name)->val, (ce->constructor->common.function_name)->val);
  }
 }
 if (ce->destructor) {
  ce->destructor->common.fn_flags |= 0x4000;
  if (ce->destructor->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Destructor %s::%s() cannot be static",
    (ce->name)->val, (ce->destructor->common.function_name)->val);
  } else if (ce->destructor->common.fn_flags & 0x40000000) {
   zend_error_noreturn((1<<6L),
    "Destructor %s::%s() cannot declare a return type",
    (ce->name)->val, (ce->destructor->common.function_name)->val);
  }
 }
 if (ce->clone) {
  ce->clone->common.fn_flags |= 0x8000;
  if (ce->clone->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Clone method %s::%s() cannot be static",
    (ce->name)->val, (ce->clone->common.function_name)->val);
  } else if (ce->clone->common.fn_flags & 0x40000000) {
   zend_error_noreturn((1<<6L),
    "%s::%s() cannot declare a return type",
    (ce->name)->val, (ce->clone->common.function_name)->val);
  }
 }




 if (ce->num_traits > 0) {
  ce->traits = ((void *)0);
  ce->num_traits = 0;
  ce->ce_flags |= 0x400000;

  zend_emit_op(((void *)0), 155, &declare_node, ((void *)0));
 }

 if (implements_ast) {
  zend_compile_implements(&declare_node, implements_ast);
 }

 if (!(ce->ce_flags & (0x40|0x20))
  && (extends_ast || implements_ast)
 ) {
  zend_verify_abstract_class(ce);
  if (implements_ast) {
   zend_emit_op(((void *)0), 146, &declare_node, ((void *)0));
  }
 }





 if (ce->num_interfaces > 0) {
  ce->interfaces = ((void *)0);
  ce->num_interfaces = 0;
  ce->ce_flags |= 0x80000;
 }

 ((compiler_globals.file_context).implementing_class) = original_implementing_class;
 (compiler_globals.active_class_entry) = original_ce;
}


static HashTable *zend_get_import_ht(uint32_t type)
{
 switch (type) {
  case 361:
   if (!((compiler_globals.file_context).imports)) {
    ((compiler_globals.file_context).imports) = (__builtin_constant_p((sizeof(HashTable)) ) ? (((sizeof(HashTable)) <= 8) ? _emalloc_8() : (((sizeof(HashTable)) <= 16) ? _emalloc_16() : (((sizeof(HashTable)) <= 24) ? _emalloc_24() : (((sizeof(HashTable)) <= 32) ? _emalloc_32() : (((sizeof(HashTable)) <= 40) ? _emalloc_40() : (((sizeof(HashTable)) <= 48) ? _emalloc_48() : (((sizeof(HashTable)) <= 56) ? _emalloc_56() : (((sizeof(HashTable)) <= 64) ? _emalloc_64() : (((sizeof(HashTable)) <= 80) ? _emalloc_80() : (((sizeof(HashTable)) <= 96) ? _emalloc_96() : (((sizeof(HashTable)) <= 112) ? _emalloc_112() : (((sizeof(HashTable)) <= 128) ? _emalloc_128() : (((sizeof(HashTable)) <= 160) ? _emalloc_160() : (((sizeof(HashTable)) <= 192) ? _emalloc_192() : (((sizeof(HashTable)) <= 224) ? _emalloc_224() : (((sizeof(HashTable)) <= 256) ? _emalloc_256() : (((sizeof(HashTable)) <= 320) ? _emalloc_320() : (((sizeof(HashTable)) <= 384) ? _emalloc_384() : (((sizeof(HashTable)) <= 448) ? _emalloc_448() : (((sizeof(HashTable)) <= 512) ? _emalloc_512() : (((sizeof(HashTable)) <= 640) ? _emalloc_640() : (((sizeof(HashTable)) <= 768) ? _emalloc_768() : (((sizeof(HashTable)) <= 896) ? _emalloc_896() : (((sizeof(HashTable)) <= 1024) ? _emalloc_1024() : (((sizeof(HashTable)) <= 1280) ? _emalloc_1280() : (((sizeof(HashTable)) <= 1536) ? _emalloc_1536() : (((sizeof(HashTable)) <= 1792) ? _emalloc_1792() : (((sizeof(HashTable)) <= 2048) ? _emalloc_2048() : (((sizeof(HashTable)) <= 2560) ? _emalloc_2560() : (((sizeof(HashTable)) <= 3072) ? _emalloc_3072() : (((sizeof(HashTable)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(HashTable))) : _emalloc_huge((sizeof(HashTable)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(HashTable)) ) );
    _zend_hash_init((((compiler_globals.file_context).imports)), (8), (str_dtor), (0) );
   }
   return ((compiler_globals.file_context).imports);
  case 346:
   if (!((compiler_globals.file_context).imports_function)) {
    ((compiler_globals.file_context).imports_function) = (__builtin_constant_p((sizeof(HashTable)) ) ? (((sizeof(HashTable)) <= 8) ? _emalloc_8() : (((sizeof(HashTable)) <= 16) ? _emalloc_16() : (((sizeof(HashTable)) <= 24) ? _emalloc_24() : (((sizeof(HashTable)) <= 32) ? _emalloc_32() : (((sizeof(HashTable)) <= 40) ? _emalloc_40() : (((sizeof(HashTable)) <= 48) ? _emalloc_48() : (((sizeof(HashTable)) <= 56) ? _emalloc_56() : (((sizeof(HashTable)) <= 64) ? _emalloc_64() : (((sizeof(HashTable)) <= 80) ? _emalloc_80() : (((sizeof(HashTable)) <= 96) ? _emalloc_96() : (((sizeof(HashTable)) <= 112) ? _emalloc_112() : (((sizeof(HashTable)) <= 128) ? _emalloc_128() : (((sizeof(HashTable)) <= 160) ? _emalloc_160() : (((sizeof(HashTable)) <= 192) ? _emalloc_192() : (((sizeof(HashTable)) <= 224) ? _emalloc_224() : (((sizeof(HashTable)) <= 256) ? _emalloc_256() : (((sizeof(HashTable)) <= 320) ? _emalloc_320() : (((sizeof(HashTable)) <= 384) ? _emalloc_384() : (((sizeof(HashTable)) <= 448) ? _emalloc_448() : (((sizeof(HashTable)) <= 512) ? _emalloc_512() : (((sizeof(HashTable)) <= 640) ? _emalloc_640() : (((sizeof(HashTable)) <= 768) ? _emalloc_768() : (((sizeof(HashTable)) <= 896) ? _emalloc_896() : (((sizeof(HashTable)) <= 1024) ? _emalloc_1024() : (((sizeof(HashTable)) <= 1280) ? _emalloc_1280() : (((sizeof(HashTable)) <= 1536) ? _emalloc_1536() : (((sizeof(HashTable)) <= 1792) ? _emalloc_1792() : (((sizeof(HashTable)) <= 2048) ? _emalloc_2048() : (((sizeof(HashTable)) <= 2560) ? _emalloc_2560() : (((sizeof(HashTable)) <= 3072) ? _emalloc_3072() : (((sizeof(HashTable)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(HashTable))) : _emalloc_huge((sizeof(HashTable)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(HashTable)) ) );
    _zend_hash_init((((compiler_globals.file_context).imports_function)), (8), (str_dtor), (0) );
   }
   return ((compiler_globals.file_context).imports_function);
  case 347:
   if (!((compiler_globals.file_context).imports_const)) {
    ((compiler_globals.file_context).imports_const) = (__builtin_constant_p((sizeof(HashTable)) ) ? (((sizeof(HashTable)) <= 8) ? _emalloc_8() : (((sizeof(HashTable)) <= 16) ? _emalloc_16() : (((sizeof(HashTable)) <= 24) ? _emalloc_24() : (((sizeof(HashTable)) <= 32) ? _emalloc_32() : (((sizeof(HashTable)) <= 40) ? _emalloc_40() : (((sizeof(HashTable)) <= 48) ? _emalloc_48() : (((sizeof(HashTable)) <= 56) ? _emalloc_56() : (((sizeof(HashTable)) <= 64) ? _emalloc_64() : (((sizeof(HashTable)) <= 80) ? _emalloc_80() : (((sizeof(HashTable)) <= 96) ? _emalloc_96() : (((sizeof(HashTable)) <= 112) ? _emalloc_112() : (((sizeof(HashTable)) <= 128) ? _emalloc_128() : (((sizeof(HashTable)) <= 160) ? _emalloc_160() : (((sizeof(HashTable)) <= 192) ? _emalloc_192() : (((sizeof(HashTable)) <= 224) ? _emalloc_224() : (((sizeof(HashTable)) <= 256) ? _emalloc_256() : (((sizeof(HashTable)) <= 320) ? _emalloc_320() : (((sizeof(HashTable)) <= 384) ? _emalloc_384() : (((sizeof(HashTable)) <= 448) ? _emalloc_448() : (((sizeof(HashTable)) <= 512) ? _emalloc_512() : (((sizeof(HashTable)) <= 640) ? _emalloc_640() : (((sizeof(HashTable)) <= 768) ? _emalloc_768() : (((sizeof(HashTable)) <= 896) ? _emalloc_896() : (((sizeof(HashTable)) <= 1024) ? _emalloc_1024() : (((sizeof(HashTable)) <= 1280) ? _emalloc_1280() : (((sizeof(HashTable)) <= 1536) ? _emalloc_1536() : (((sizeof(HashTable)) <= 1792) ? _emalloc_1792() : (((sizeof(HashTable)) <= 2048) ? _emalloc_2048() : (((sizeof(HashTable)) <= 2560) ? _emalloc_2560() : (((sizeof(HashTable)) <= 3072) ? _emalloc_3072() : (((sizeof(HashTable)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(HashTable))) : _emalloc_huge((sizeof(HashTable)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(HashTable)) ) );
    _zend_hash_init((((compiler_globals.file_context).imports_const)), (8), (str_dtor), (0) );
   }
   return ((compiler_globals.file_context).imports_const);
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }

 return ((void *)0);
}


static char *zend_get_use_type_str(uint32_t type)
{
 switch (type) {
  case 361:
   return "";
  case 346:
   return " function";
  case 347:
   return " const";
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }

 return " unknown";
}


static void zend_check_already_in_use(uint32_t type, zend_string *old_name, zend_string *new_name, zend_string *check_name)
{
 if (((old_name)->len == (check_name)->len && !zend_binary_strcasecmp((old_name)->val, (old_name)->len, (check_name)->val, (check_name)->len))) {
  return;
 }

 zend_error_noreturn((1<<6L), "Cannot use%s %s as %s because the name "
  "is already in use", zend_get_use_type_str(type), (old_name)->val, (new_name)->val);
}


void zend_compile_use(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 zend_string *current_ns = ((compiler_globals.file_context).current_namespace);
 uint32_t type = ast->attr;
 HashTable *current_import = zend_get_import_ht(type);
 zend_bool case_sensitive = type == 347;

 for (i = 0; i < list->children; ++i) {
  zend_ast *use_ast = list->child[i];
  zend_ast *old_name_ast = use_ast->child[0];
  zend_ast *new_name_ast = use_ast->child[1];
  zend_string *old_name = zend_ast_get_str(old_name_ast);
  zend_string *new_name, *lookup_name;

  if (new_name_ast) {
   new_name = zend_string_copy(zend_ast_get_str(new_name_ast));
  } else {
   const char *unqualified_name;
   size_t unqualified_name_len;
   if (zend_get_unqualified_name(old_name, &unqualified_name, &unqualified_name_len)) {

    new_name = zend_string_init(unqualified_name, unqualified_name_len, 0);
   } else {
    new_name = zend_string_copy(old_name);

    if (!current_ns) {
     if (type == 361 && ((new_name)->len == sizeof("strict")-1 && !memcmp((new_name)->val, "strict", sizeof("strict") - 1))) {
      zend_error_noreturn((1<<6L),
       "You seem to be trying to use a different language...");
     }

     zend_error((1<<1L), "The use statement with non-compound name '%s' "
      "has no effect", (new_name)->val);
    }
   }
  }

  if (case_sensitive) {
   lookup_name = zend_string_copy(new_name);
  } else {
   lookup_name = zend_string_tolower(new_name);
  }

  if (type == 361 && zend_is_reserved_class_name(new_name)) {
   zend_error_noreturn((1<<6L), "Cannot use %s as %s because '%s' "
    "is a special class name", (old_name)->val, (new_name)->val, (new_name)->val);
  }

  if (current_ns) {
   zend_string *ns_name = zend_string_alloc((current_ns)->len + 1 + (new_name)->len, 0);
   zend_str_tolower_copy((ns_name)->val, (current_ns)->val, (current_ns)->len);
   (ns_name)->val[(current_ns)->len] = '\\';
   memcpy((ns_name)->val + (current_ns)->len + 1, (lookup_name)->val, (lookup_name)->len);

   if (zend_hash_exists((compiler_globals.class_table), ns_name)) {
    zend_check_already_in_use(type, old_name, new_name, ns_name);
   }

   zend_string_free(ns_name);
  } else {
   switch (type) {
    case 361:
    {
     zend_class_entry *ce = zend_hash_find_ptr((compiler_globals.class_table), lookup_name);
     if (ce && ce->type == 2
      && ce->info.user.filename == (compiler_globals.compiled_filename)
     ) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }
    case 346:
    {
     zend_function *fn = zend_hash_find_ptr((compiler_globals.function_table), lookup_name);
     if (fn && fn->type == 2
      && fn->op_array.filename == (compiler_globals.compiled_filename)
     ) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }
    case 347:
    {
     zend_string *filename = zend_hash_find_ptr(&(compiler_globals.const_filenames), lookup_name);
     if (filename && filename == (compiler_globals.compiled_filename)) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }
    default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
   }
  }

  zend_string_addref(old_name);
  if (!zend_hash_add_ptr(current_import, lookup_name, old_name)) {
   zend_error_noreturn((1<<6L), "Cannot use%s %s as %s because the name "
    "is already in use", zend_get_use_type_str(type), (old_name)->val, (new_name)->val);
  }

  zend_string_release(lookup_name);
  zend_string_release(new_name);
 }
}


void zend_compile_group_use(zend_ast *ast)
{
 uint32_t i;
 zend_string *ns = zend_ast_get_str(ast->child[0]);
 zend_ast_list *list = zend_ast_get_list(ast->child[1]);

 for (i = 0; i < list->children; i++) {
  zend_ast *inline_use, *use = list->child[i];
  zval *name_zval = zend_ast_get_zval(use->child[0]);
  zend_string *name = (*(name_zval)).value.str;
  zend_string *compound_ns = zend_concat_names((ns)->val, (ns)->len, (name)->val, (name)->len);
  zend_string_release(name);
  do { zval *__z = (name_zval); zend_string *__s = (compound_ns); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
  inline_use = zend_ast_create_list(1, ZEND_AST_USE, use);
  inline_use->attr = ast->attr ? ast->attr : use->attr;
  zend_compile_use(inline_use);
 }
}



void zend_compile_const_decl(zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 for (i = 0; i < list->children; ++i) {
  zend_ast *const_ast = list->child[i];
  zend_ast *name_ast = const_ast->child[0];
  zend_ast *value_ast = const_ast->child[1];
  zend_string *unqualified_name = zend_ast_get_str(name_ast);

  zend_string *name;
  znode name_node, value_node;
  zval *value_zv = &value_node.u.constant;

  value_node.op_type = (1<<0);
  zend_const_expr_to_zval(value_zv, value_ast);

  if (zend_lookup_reserved_const((unqualified_name)->val, (unqualified_name)->len)) {
   zend_error_noreturn((1<<6L),
    "Cannot redeclare constant '%s'", (unqualified_name)->val);
  }

  name = zend_prefix_with_ns(unqualified_name);
  name = zend_new_interned_string(name);

  if (((compiler_globals.file_context).imports_const)) {
   zend_string *import_name = zend_hash_find_ptr(((compiler_globals.file_context).imports_const), unqualified_name);
   if (import_name && !zend_string_equals(import_name, name)) {
    zend_error_noreturn((1<<6L), "Cannot declare const %s because "
     "the name is already in use", (name)->val);
   }
  }

  name_node.op_type = (1<<0);
  do { zval *__z = (&name_node.u.constant); zend_string *__s = (name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);

  zend_emit_op(((void *)0), 143, &name_node, &value_node);

  zend_hash_add_ptr(&(compiler_globals.const_filenames), name, (compiler_globals.compiled_filename));
 }
}


void zend_compile_namespace(zend_ast *ast)
{
 zend_ast *name_ast = ast->child[0];
 zend_ast *stmt_ast = ast->child[1];
 zend_string *name;
 zend_bool with_bracket = stmt_ast != ((void *)0);


 if (!((compiler_globals.file_context).has_bracketed_namespaces)) {
  if (((compiler_globals.file_context).current_namespace)) {

   if (with_bracket) {
    zend_error_noreturn((1<<6L), "Cannot mix bracketed namespace declarations "
     "with unbracketed namespace declarations");
   }
  }
 } else {

  if (!with_bracket) {
   zend_error_noreturn((1<<6L), "Cannot mix bracketed namespace declarations "
    "with unbracketed namespace declarations");
  } else if (((compiler_globals.file_context).current_namespace) || ((compiler_globals.file_context).in_namespace)) {
   zend_error_noreturn((1<<6L), "Namespace declarations cannot be nested");
  }
 }

 if (((!with_bracket && !((compiler_globals.file_context).current_namespace))
   || (with_bracket && !((compiler_globals.file_context).has_bracketed_namespaces))) && (compiler_globals.active_op_array)->last > 0
 ) {

  uint32_t num = (compiler_globals.active_op_array)->last;
  while (num > 0 &&
         ((compiler_globals.active_op_array)->opcodes[num-1].opcode == 101 ||
          (compiler_globals.active_op_array)->opcodes[num-1].opcode == 105)) {
   --num;
  }
  if (num > 0) {
   zend_error_noreturn((1<<6L), "Namespace declaration statement has to be "
    "the very first statement or after any declare call in the script");
  }
 }

 if (((compiler_globals.file_context).current_namespace)) {
  zend_string_release(((compiler_globals.file_context).current_namespace));
 }

 if (name_ast) {
  name = zend_ast_get_str(name_ast);

  if (0 != zend_get_class_fetch_type(name)) {
   zend_error_noreturn((1<<6L), "Cannot use '%s' as namespace name", (name)->val);
  }

  ((compiler_globals.file_context).current_namespace) = zend_string_copy(name);
 } else {
  ((compiler_globals.file_context).current_namespace) = ((void *)0);
 }

 zend_reset_import_tables();

 ((compiler_globals.file_context).in_namespace) = 1;
 if (with_bracket) {
  ((compiler_globals.file_context).has_bracketed_namespaces) = 1;
 }

 if (stmt_ast) {
  zend_compile_top_stmt(stmt_ast);
  zend_end_namespace();
 }
}


void zend_compile_halt_compiler(zend_ast *ast)
{
 zend_ast *offset_ast = ast->child[0];
 zend_long offset = (*(zend_ast_get_zval(offset_ast))).value.lval;

 zend_string *filename, *name;
 const char const_name[] = "__COMPILER_HALT_OFFSET__";

 if (((compiler_globals.file_context).has_bracketed_namespaces) && ((compiler_globals.file_context).in_namespace)) {
  zend_error_noreturn((1<<6L),
   "__HALT_COMPILER() can only be used from the outermost scope");
 }

 filename = zend_get_compiled_filename();
 name = zend_mangle_property_name(const_name, sizeof(const_name) - 1,
  (filename)->val, (filename)->len, 0);

 zend_register_long_constant((name)->val, (name)->len, offset, (1<<0), 0);
 zend_string_release(name);
}


static zend_bool zend_try_ct_eval_magic_const(zval *zv, zend_ast *ast)
{
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_class_entry *ce = (compiler_globals.active_class_entry);

 switch (ast->attr) {
  case 370:
   { zval *__z = (zv); (*(__z)).value.lval = ast->lineno; (*(__z)).u1.type_info = 4; };
   break;
  case 371:
   do { zval *__z = (zv); zend_string *__s = ((compiler_globals.compiled_filename)); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   break;
  case 372:
  {
   zend_string *filename = (compiler_globals.compiled_filename);
   zend_string *dirname = zend_string_init((filename)->val, (filename)->len, 0);
   zend_dirname((dirname)->val, (dirname)->len);

   if (strcmp((dirname)->val, ".") == 0) {
    dirname = zend_string_extend(dirname, 4096, 0);

    (({ __typeof__ (getcwd((dirname)->val, 4096)) __x = (getcwd((dirname)->val, 4096)); (void) __x; }));



   }

   (dirname)->len = strlen((dirname)->val);
   do { zval *__z = (zv); zend_string *__s = (dirname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
   break;
  }
  case 376:
   if (op_array && op_array->function_name) {
    do { zval *__z = (zv); zend_string *__s = (op_array->function_name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 375:
   if ((op_array && !op_array->scope && op_array->function_name) || (op_array->fn_flags & 0x100000)) {
    do { zval *__z = (zv); zend_string *__s = (op_array->function_name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else if (ce) {
    if (op_array && op_array->function_name) {
     do { zval *__z = (zv); zend_string *__s = (zend_concat3((ce->name)->val, (ce->name)->len, "::", 2, (op_array->function_name)->val, (op_array->function_name)->len)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)
                                                                            ;
    } else {
     do { zval *__z = (zv); zend_string *__s = (ce->name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
    }
   } else if (op_array && op_array->function_name) {
    do { zval *__z = (zv); zend_string *__s = (op_array->function_name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 373:
   if (ce) {
    if ((ce->ce_flags & 0x80) != 0) {
     return 0;
    } else {
     do { zval *__z = (zv); zend_string *__s = (ce->name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
    }
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 374:
   if (ce && (ce->ce_flags & 0x80) != 0) {
    do { zval *__z = (zv); zend_string *__s = (ce->name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 389:
   if (((compiler_globals.file_context).current_namespace)) {
    do { zval *__z = (zv); zend_string *__s = (((compiler_globals.file_context).current_namespace)); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }

 return 1;
}


__attribute__ ((visibility("default"))) zend_bool zend_binary_op_produces_numeric_string_error(uint32_t opcode, zval *op1, zval *op2)
{
 if (!(opcode == 1 || opcode == 2 || opcode == 3 || opcode == 4
  || opcode == 166 || opcode == 5 || opcode == 6 || opcode == 7
  || opcode == 9 || opcode == 10 || opcode == 11)) {
  return 0;
 }



 if ((opcode == 9 || opcode == 10 || opcode == 11)
  && zval_get_type(&(*(op1))) == 6 && zval_get_type(&(*(op2))) == 6) {
  return 0;
 }

 if (zval_get_type(&(*(op1))) == 6
  && !is_numeric_string(((*(op1)).value.str)->val, ((*(op1)).value.str)->len, ((void *)0), ((void *)0), 0)) {
  return 1;
 }

 if (zval_get_type(&(*(op2))) == 6
  && !is_numeric_string(((*(op2)).value.str)->val, ((*(op2)).value.str)->len, ((void *)0), ((void *)0), 0)) {
  return 1;
 }

 return 0;
}


static inline zend_bool zend_try_ct_eval_binary_op(zval *result, uint32_t opcode, zval *op1, zval *op2)
{
 binary_op_type fn = get_binary_op(opcode);


 if ((opcode == 4 || opcode == 5) &&
     _zval_get_long((op2)) == 0) {
  return 0;
 } else if ((opcode == 6 || opcode == 7) &&
     _zval_get_long((op2)) < 0) {
  return 0;
 }


 if (zend_binary_op_produces_numeric_string_error(opcode, op1, op2)) {
  return 0;
 }

 fn(result, op1, op2);
 return 1;
}


static inline void zend_ct_eval_unary_op(zval *result, uint32_t opcode, zval *op)
{
 unary_op_type fn = get_unary_op(opcode);
 fn(result, op);
}


static inline zend_bool zend_try_ct_eval_unary_pm(zval *result, zend_ast_kind kind, zval *op)
{
 zval left;
 { zval *__z = (&left); (*(__z)).value.lval = (kind == ZEND_AST_UNARY_PLUS) ? 1 : -1; (*(__z)).u1.type_info = 4; };
 return zend_try_ct_eval_binary_op(result, 3, &left, op);
}


static inline void zend_ct_eval_greater(zval *result, zend_ast_kind kind, zval *op1, zval *op2)
{
 binary_op_type fn = kind == ZEND_AST_GREATER
  ? is_smaller_function : is_smaller_or_equal_function;
 fn(result, op2, op1);
}


static zend_bool zend_try_ct_eval_array(zval *result, zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 uint32_t i;
 zend_bool is_constant = 1;

 if (ast->attr) {
  zend_error((1<<6L), "Cannot use list() as standalone expression");
 }


 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];

  if (elem_ast == ((void *)0)) {
   zend_error((1<<6L), "Cannot use empty array elements in arrays");
  }

  zend_eval_const_expr(&elem_ast->child[0]);
  zend_eval_const_expr(&elem_ast->child[1]);

  if (elem_ast->attr || elem_ast->child[0]->kind != ZEND_AST_ZVAL
   || (elem_ast->child[1] && elem_ast->child[1]->kind != ZEND_AST_ZVAL)
  ) {
   is_constant = 0;
  }
 }

 if (!is_constant) {
  return 0;
 }

 _array_init((result), (list->children) );
 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *value_ast = elem_ast->child[0];
  zend_ast *key_ast = elem_ast->child[1];

  zval *value = zend_ast_get_zval(value_ast);
  if ((((*(value)).u1.v.type_flags & (1<<2)) != 0)) zval_addref_p(value);

  if (key_ast) {
   zval *key = zend_ast_get_zval(key_ast);
   switch (zval_get_type(&(*(key)))) {
    case 4:
     _zend_hash_index_update((*(result)).value.arr, (*(key)).value.lval, value );
     break;
    case 6:
     zend_symtable_update((*(result)).value.arr, (*(key)).value.str, value);
     break;
    case 5:
     _zend_hash_index_update((*(result)).value.arr, zend_dval_to_lval((*(key)).value.dval), value )
                                              ;
     break;
    case 2:
     _zend_hash_index_update((*(result)).value.arr, 0, value );
     break;
    case 3:
     _zend_hash_index_update((*(result)).value.arr, 1, value );
     break;
    case 1:
     _zend_hash_update((*(result)).value.arr, (compiler_globals.empty_string), value );
     break;
    default:
     zend_error_noreturn((1<<6L), "Illegal offset type");
     break;
   }
  } else {
   _zend_hash_next_index_insert((*(result)).value.arr, value );
  }
 }

 return 1;
}


void zend_compile_binary_op(znode *result, zend_ast *ast)
{
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];
 uint32_t opcode = ast->attr;

 znode left_node, right_node;
 zend_compile_expr(&left_node, left_ast);
 zend_compile_expr(&right_node, right_ast);

 if (left_node.op_type == (1<<0) && right_node.op_type == (1<<0)) {
  if (zend_try_ct_eval_binary_op(&result->u.constant, opcode,
    &left_node.u.constant, &right_node.u.constant)
  ) {
   result->op_type = (1<<0);
   _zval_ptr_dtor((&left_node.u.constant) );
   _zval_ptr_dtor((&right_node.u.constant) );
   return;
  }
 }

 do {
  if (opcode == 17 || opcode == 18) {
   if (left_node.op_type == (1<<0)) {
    if (zval_get_type(&(left_node.u.constant)) == 2) {
     opcode = (opcode == 18) ? 52 : 13;
     zend_emit_op_tmp(result, opcode, &right_node, ((void *)0));
     break;
    } else if (zval_get_type(&(left_node.u.constant)) == 3) {
     opcode = (opcode == 17) ? 52 : 13;
     zend_emit_op_tmp(result, opcode, &right_node, ((void *)0));
     break;
    }
   } else if (right_node.op_type == (1<<0)) {
    if (zval_get_type(&(right_node.u.constant)) == 2) {
     opcode = (opcode == 18) ? 52 : 13;
     zend_emit_op_tmp(result, opcode, &left_node, ((void *)0));
     break;
    } else if (zval_get_type(&(right_node.u.constant)) == 3) {
     opcode = (opcode == 17) ? 52 : 13;
     zend_emit_op_tmp(result, opcode, &left_node, ((void *)0));
     break;
    }
   }
  }
  if (opcode == 8) {

   if (left_node.op_type == (1<<0)) {
    if (zval_get_type(&(*(&left_node.u.constant))) != 6) { _convert_to_string((&left_node.u.constant) ); };
   }
   if (right_node.op_type == (1<<0)) {
    if (zval_get_type(&(*(&right_node.u.constant))) != 6) { _convert_to_string((&right_node.u.constant) ); };
   }
  }
  zend_emit_op_tmp(result, opcode, &left_node, &right_node);
 } while (0);
}




void zend_compile_greater(znode *result, zend_ast *ast)
{
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];
 znode left_node, right_node;

 do { if (__builtin_expect(!(ast->kind == ZEND_AST_GREATER || ast->kind == ZEND_AST_GREATER_EQUAL), 0)) __builtin_unreachable(); } while (0);

 zend_compile_expr(&left_node, left_ast);
 zend_compile_expr(&right_node, right_ast);

 if (left_node.op_type == (1<<0) && right_node.op_type == (1<<0)) {
  result->op_type = (1<<0);
  zend_ct_eval_greater(&result->u.constant, ast->kind,
   &left_node.u.constant, &right_node.u.constant);
  _zval_ptr_dtor((&left_node.u.constant) );
  _zval_ptr_dtor((&right_node.u.constant) );
  return;
 }

 zend_emit_op_tmp(result,
  ast->kind == ZEND_AST_GREATER ? 19 : 20,
  &right_node, &left_node);
}


void zend_compile_unary_op(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 uint32_t opcode = ast->attr;

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast);

 if (expr_node.op_type == (1<<0)) {
  result->op_type = (1<<0);
  zend_ct_eval_unary_op(&result->u.constant, opcode,
   &expr_node.u.constant);
  _zval_ptr_dtor((&expr_node.u.constant) );
  return;
 }

 zend_emit_op_tmp(result, opcode, &expr_node, ((void *)0));
}


void zend_compile_unary_pm(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;
 znode lefthand_node;

 do { if (__builtin_expect(!(ast->kind == ZEND_AST_UNARY_PLUS || ast->kind == ZEND_AST_UNARY_MINUS), 0)) __builtin_unreachable(); } while (0);

 zend_compile_expr(&expr_node, expr_ast);

 if (expr_node.op_type == (1<<0)) {
  if (zend_try_ct_eval_unary_pm(&result->u.constant, ast->kind, &expr_node.u.constant)) {
   result->op_type = (1<<0);
   _zval_ptr_dtor((&expr_node.u.constant) );
   return;
  }
 }

 lefthand_node.op_type = (1<<0);
 { zval *__z = (&lefthand_node.u.constant); (*(__z)).value.lval = (ast->kind == ZEND_AST_UNARY_PLUS) ? 1 : -1; (*(__z)).u1.type_info = 4; };
 zend_emit_op_tmp(result, 3, &lefthand_node, &expr_node);
}


void zend_compile_short_circuiting(znode *result, zend_ast *ast)
{
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];

 znode left_node, right_node;
 zend_op *opline_jmpz, *opline_bool;
 uint32_t opnum_jmpz;

 do { if (__builtin_expect(!(ast->kind == ZEND_AST_AND || ast->kind == ZEND_AST_OR), 0)) __builtin_unreachable(); } while (0);

 zend_compile_expr(&left_node, left_ast);

 if (left_node.op_type == (1<<0)) {
  if ((ast->kind == ZEND_AST_AND && !zend_is_true(&left_node.u.constant))
   || (ast->kind == ZEND_AST_OR && zend_is_true(&left_node.u.constant))) {
   result->op_type = (1<<0);
   do { (*(&result->u.constant)).u1.type_info = (zend_is_true(&left_node.u.constant)) ? 3 : 2; } while (0);
  } else {
   zend_compile_expr(&right_node, right_ast);

   if (right_node.op_type == (1<<0)) {
    result->op_type = (1<<0);
    do { (*(&result->u.constant)).u1.type_info = (zend_is_true(&right_node.u.constant)) ? 3 : 2; } while (0);

    _zval_ptr_dtor((&right_node.u.constant) );
   } else {
    zend_emit_op_tmp(result, 52, &right_node, ((void *)0));
   }
  }

  _zval_ptr_dtor((&left_node.u.constant) );
  return;
 }

 opnum_jmpz = get_next_op_number((compiler_globals.active_op_array));
 opline_jmpz = zend_emit_op(((void *)0), ast->kind == ZEND_AST_AND ? 46 : 47,
  &left_node, ((void *)0));

 if (left_node.op_type == (1<<1)) {
  do { opline_jmpz->result_type = (&left_node)->op_type; if ((&left_node)->op_type == (1<<0)) { opline_jmpz->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&left_node)->u.constant); } else { opline_jmpz->result = (&left_node)->u.op; } } while (0);
 } else {
  opline_jmpz->result.var = get_temporary_variable((compiler_globals.active_op_array));
  opline_jmpz->result_type = (1<<1);
 }

 do { (result)->op_type = opline_jmpz->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline_jmpz->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline_jmpz->result; } } while (0);
 zend_compile_expr(&right_node, right_ast);

 opline_bool = zend_emit_op(((void *)0), 52, &right_node, ((void *)0));
 do { opline_bool->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_bool->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline_bool->result = (result)->u.op; } } while (0);

 zend_update_jump_target_to_next(opnum_jmpz);
}


void zend_compile_post_incdec(znode *result, zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 do { if (__builtin_expect(!(ast->kind == ZEND_AST_POST_INC || ast->kind == ZEND_AST_POST_DEC), 0)) __builtin_unreachable(); } while (0);

 zend_ensure_writable_variable(var_ast);

 if (var_ast->kind == ZEND_AST_PROP) {
  zend_op *opline = zend_compile_prop_common(((void *)0), var_ast, 2);
  opline->opcode = ast->kind == ZEND_AST_POST_INC ? 134 : 135;
  zend_make_tmp_result(result, opline);
 } else {
  znode var_node;
  zend_compile_var(&var_node, var_ast, 2);
  zend_emit_op_tmp(result, ast->kind == ZEND_AST_POST_INC ? 36 : 37,
   &var_node, ((void *)0));
 }
}


void zend_compile_pre_incdec(znode *result, zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];
 do { if (__builtin_expect(!(ast->kind == ZEND_AST_PRE_INC || ast->kind == ZEND_AST_PRE_DEC), 0)) __builtin_unreachable(); } while (0);

 zend_ensure_writable_variable(var_ast);

 if (var_ast->kind == ZEND_AST_PROP) {
  zend_op *opline = zend_compile_prop_common(result, var_ast, 2);
  opline->opcode = ast->kind == ZEND_AST_PRE_INC ? 132 : 133;
 } else {
  znode var_node;
  zend_compile_var(&var_node, var_ast, 2);
  zend_emit_op(result, ast->kind == ZEND_AST_PRE_INC ? 34 : 35,
   &var_node, ((void *)0));
 }
}


void zend_compile_cast(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;
 zend_op *opline;

 zend_compile_expr(&expr_node, expr_ast);

 opline = zend_emit_op_tmp(result, 21, &expr_node, ((void *)0));
 opline->extended_value = ast->attr;
}


static void zend_compile_shorthand_conditional(znode *result, zend_ast *ast)
{
 zend_ast *cond_ast = ast->child[0];
 zend_ast *false_ast = ast->child[2];

 znode cond_node, false_node;
 zend_op *opline_qm_assign;
 uint32_t opnum_jmp_set;

 do { if (__builtin_expect(!(ast->child[1] == ((void *)0)), 0)) __builtin_unreachable(); } while (0);

 zend_compile_expr(&cond_node, cond_ast);

 opnum_jmp_set = get_next_op_number((compiler_globals.active_op_array));
 zend_emit_op_tmp(result, 152, &cond_node, ((void *)0));

 zend_compile_expr(&false_node, false_ast);

 opline_qm_assign = zend_emit_op_tmp(((void *)0), 22, &false_node, ((void *)0));
 do { opline_qm_assign->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_qm_assign->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline_qm_assign->result = (result)->u.op; } } while (0);

 zend_update_jump_target_to_next(opnum_jmp_set);
}


void zend_compile_conditional(znode *result, zend_ast *ast)
{
 zend_ast *cond_ast = ast->child[0];
 zend_ast *true_ast = ast->child[1];
 zend_ast *false_ast = ast->child[2];

 znode cond_node, true_node, false_node;
 zend_op *opline_qm_assign2;
 uint32_t opnum_jmpz, opnum_jmp;

 if (!true_ast) {
  zend_compile_shorthand_conditional(result, ast);
  return;
 }

 zend_compile_expr(&cond_node, cond_ast);

 opnum_jmpz = zend_emit_cond_jump(43, &cond_node, 0);

 zend_compile_expr(&true_node, true_ast);

 zend_emit_op_tmp(result, 22, &true_node, ((void *)0));

 opnum_jmp = zend_emit_jump(0);

 zend_update_jump_target_to_next(opnum_jmpz);

 zend_compile_expr(&false_node, false_ast);

 opline_qm_assign2 = zend_emit_op(((void *)0), 22, &false_node, ((void *)0));
 do { opline_qm_assign2->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_qm_assign2->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline_qm_assign2->result = (result)->u.op; } } while (0);

 zend_update_jump_target_to_next(opnum_jmp);
}


void zend_compile_coalesce(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 zend_ast *default_ast = ast->child[1];

 znode expr_node, default_node;
 zend_op *opline;
 uint32_t opnum;

 zend_compile_var(&expr_node, expr_ast, 3);

 opnum = get_next_op_number((compiler_globals.active_op_array));
 zend_emit_op_tmp(result, 169, &expr_node, ((void *)0));

 zend_compile_expr(&default_node, default_ast);

 opline = zend_emit_op_tmp(((void *)0), 22, &default_node, ((void *)0));
 do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline->result = (result)->u.op; } } while (0);

 opline = &(compiler_globals.active_op_array)->opcodes[opnum];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
}


void zend_compile_print(znode *result, zend_ast *ast)
{
 zend_op *opline;
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast);

 opline = zend_emit_op(((void *)0), 40, &expr_node, ((void *)0));
 opline->extended_value = 1;

 result->op_type = (1<<0);
 { zval *__z = (&result->u.constant); (*(__z)).value.lval = 1; (*(__z)).u1.type_info = 4; };
}


void zend_compile_exit(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];

 if (expr_ast) {
  znode expr_node;
  zend_compile_expr(&expr_node, expr_ast);
  zend_emit_op(((void *)0), 79, &expr_node, ((void *)0));
 } else {
  zend_emit_op(((void *)0), 79, ((void *)0), ((void *)0));
 }

 result->op_type = (1<<0);
 do { (*(&result->u.constant)).u1.type_info = (1) ? 3 : 2; } while (0);
}


void zend_compile_yield(znode *result, zend_ast *ast)
{
 zend_ast *value_ast = ast->child[0];
 zend_ast *key_ast = ast->child[1];

 znode value_node, key_node;
 znode *value_node_ptr = ((void *)0), *key_node_ptr = ((void *)0);
 zend_op *opline;
 zend_bool returns_by_ref = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 zend_mark_function_as_generator();

 if (key_ast) {
  zend_compile_expr(&key_node, key_ast);
  key_node_ptr = &key_node;
 }

 if (value_ast) {
  if (returns_by_ref && zend_is_variable(value_ast) && !zend_is_call(value_ast)) {
   zend_compile_var(&value_node, value_ast, 1);
  } else {
   zend_compile_expr(&value_node, value_ast);
  }
  value_node_ptr = &value_node;
 }

 opline = zend_emit_op(result, 160, value_node_ptr, key_node_ptr);

 if (value_ast && returns_by_ref && zend_is_call(value_ast)) {
  opline->extended_value = 1<<0;
 }
}


void zend_compile_yield_from(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;

 zend_mark_function_as_generator();

 if ((compiler_globals.active_op_array)->fn_flags & 0x4000000) {
  zend_error_noreturn((1<<6L),
   "Cannot use \"yield from\" inside a by-reference generator");
 }

 zend_compile_expr(&expr_node, expr_ast);
 zend_emit_op_tmp(result, 142, &expr_node, ((void *)0));
}


void zend_compile_instanceof(znode *result, zend_ast *ast)
{
 zend_ast *obj_ast = ast->child[0];
 zend_ast *class_ast = ast->child[1];

 znode obj_node, class_node;
 zend_op *opline;

 zend_compile_expr(&obj_node, obj_ast);
 if (obj_node.op_type == (1<<0)) {
  zend_error_noreturn((1<<6L),
   "instanceof expects an object instance, constant given");
 }

 zend_compile_class_ref_ex(&class_node, class_ast,
  0x80 | 0x0200);

 opline = zend_emit_op_tmp(result, 138, &obj_node, ((void *)0));

 if (class_node.op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node.u.constant).value.str);
 } else {
  do { opline->op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant); } else { opline->op2 = (&class_node)->u.op; } } while (0);
 }
}


void zend_compile_include_or_eval(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;
 zend_op *opline;

 zend_do_extended_fcall_begin();
 zend_compile_expr(&expr_node, expr_ast);

 opline = zend_emit_op(result, 73, &expr_node, ((void *)0));
 opline->extended_value = ast->attr;

 zend_do_extended_fcall_end();
}


void zend_compile_isset_or_empty(znode *result, zend_ast *ast)
{
 zend_ast *var_ast = ast->child[0];

 znode var_node;
 zend_op *opline = ((void *)0);

 do { if (__builtin_expect(!(ast->kind == ZEND_AST_ISSET || ast->kind == ZEND_AST_EMPTY), 0)) __builtin_unreachable(); } while (0);

 if (!zend_is_variable(var_ast) || zend_is_call(var_ast)) {
  if (ast->kind == ZEND_AST_EMPTY) {

   zend_ast *not_ast = zend_ast_create_ex(ZEND_AST_UNARY_OP, 13, var_ast);
   zend_compile_expr(result, not_ast);
   return;
  } else {
   zend_error_noreturn((1<<6L),
    "Cannot use isset() on the result of an expression "
    "(you can use \"null !== expression\" instead)");
  }
 }

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
   if (zend_try_compile_cv(&var_node, var_ast) == SUCCESS) {
    opline = zend_emit_op(result, 114, &var_node, ((void *)0));
    opline->extended_value = 0x10000000 | 0x00800000;
   } else {
    opline = zend_compile_simple_var_no_cv(result, var_ast, 3, 0);
    opline->opcode = 114;
   }
   break;
  case ZEND_AST_DIM:
   opline = zend_compile_dim_common(result, var_ast, 3);
   opline->opcode = 115;
   break;
  case ZEND_AST_PROP:
   opline = zend_compile_prop_common(result, var_ast, 3);
   opline->opcode = 148;
   break;
  case ZEND_AST_STATIC_PROP:
   opline = zend_compile_static_prop_common(result, var_ast, 3, 0);
   opline->opcode = 180;
   break;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }

 result->op_type = opline->result_type = (1<<1);
 opline->extended_value |= ast->kind == ZEND_AST_ISSET ? 0x02000000 : 0x01000000;
}


void zend_compile_silence(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];
 znode silence_node;
 uint32_t range;

 range = zend_start_live_range((compiler_globals.active_op_array), get_next_op_number((compiler_globals.active_op_array)));
 zend_emit_op_tmp(&silence_node, 57, ((void *)0), ((void *)0));

 if (expr_ast->kind == ZEND_AST_VAR) {


  zend_compile_simple_var_no_cv(result, expr_ast, 0, 0 );
 } else {
  zend_compile_expr(result, expr_ast);
 }



 zend_end_live_range((compiler_globals.active_op_array), range, get_next_op_number((compiler_globals.active_op_array)),
  2, silence_node.u.op.var);

 zend_emit_op(((void *)0), 58, &silence_node, ((void *)0));
}


void zend_compile_shell_exec(znode *result, zend_ast *ast)
{
 zend_ast *expr_ast = ast->child[0];

 zval fn_name;
 zend_ast *name_ast, *args_ast, *call_ast;

 do { const char *_s = ("shell_exec"); do { do { zval *__z = (&fn_name); zend_string *__s = (zend_string_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0); } while (0); } while (0);
 name_ast = zend_ast_create_zval(&fn_name);
 args_ast = zend_ast_create_list(1, ZEND_AST_ARG_LIST, expr_ast);
 call_ast = zend_ast_create(ZEND_AST_CALL, name_ast, args_ast);

 zend_compile_expr(result, call_ast);

 _zval_ptr_dtor((&fn_name) );
}


void zend_compile_array(znode *result, zend_ast *ast)
{
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_op *opline;
 uint32_t i, opnum_init = -1;
 zend_bool packed = 1;

 if (zend_try_ct_eval_array(&result->u.constant, ast)) {
  result->op_type = (1<<0);
  return;
 }

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *value_ast, *key_ast;
  zend_bool by_ref;
  znode value_node, key_node, *key_node_ptr = ((void *)0);

  if (elem_ast == ((void *)0)) {
   zend_error((1<<6L), "Cannot use empty array elements in arrays");
  }

  value_ast = elem_ast->child[0];
  key_ast = elem_ast->child[1];
  by_ref = elem_ast->attr;

  if (key_ast) {
   zend_compile_expr(&key_node, key_ast);
   zend_handle_numeric_op(&key_node);
   key_node_ptr = &key_node;
  }

  if (by_ref) {
   zend_ensure_writable_variable(value_ast);
   zend_compile_var(&value_node, value_ast, 1);
  } else {
   zend_compile_expr(&value_node, value_ast);
  }

  if (i == 0) {
   opnum_init = get_next_op_number((compiler_globals.active_op_array));
   opline = zend_emit_op_tmp(result, 71, &value_node, key_node_ptr);
   opline->extended_value = list->children << 2;
  } else {
   opline = zend_emit_op(((void *)0), 72,
    &value_node, key_node_ptr);
   do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline->result = (result)->u.op; } } while (0);
  }
  opline->extended_value |= by_ref;

  if (key_ast && key_node.op_type == (1<<0) && zval_get_type(&(key_node.u.constant)) == 6) {
   packed = 0;
  }
 }


 if (!list->children) {
  zend_emit_op_tmp(result, 71, ((void *)0), ((void *)0));
 }


 if (!packed) {
  do { if (__builtin_expect(!(opnum_init != (uint32_t)-1), 0)) __builtin_unreachable(); } while (0);
  opline = &(compiler_globals.active_op_array)->opcodes[opnum_init];
  opline->extended_value |= (1<<1);
 }
}


void zend_compile_const(znode *result, zend_ast *ast)
{
 zend_ast *name_ast = ast->child[0];

 zend_op *opline;

 zend_bool is_fully_qualified;
 zend_string *orig_name = zend_ast_get_str(name_ast);
 zend_string *resolved_name = zend_resolve_const_name(orig_name, name_ast->attr, &is_fully_qualified);

 if (((resolved_name)->len == sizeof("__COMPILER_HALT_OFFSET__")-1 && !memcmp((resolved_name)->val, "__COMPILER_HALT_OFFSET__", sizeof("__COMPILER_HALT_OFFSET__") - 1)) || (name_ast->attr != 2 && ((orig_name)->len == sizeof("__COMPILER_HALT_OFFSET__")-1 && !memcmp((orig_name)->val, "__COMPILER_HALT_OFFSET__", sizeof("__COMPILER_HALT_OFFSET__") - 1)))) {
  zend_ast *last = (compiler_globals.ast);

  while (last->kind == ZEND_AST_STMT_LIST) {
   zend_ast_list *list = zend_ast_get_list(last);
   last = list->child[list->children-1];
  }
  if (last->kind == ZEND_AST_HALT_COMPILER) {
   result->op_type = (1<<0);
   { zval *__z = (&result->u.constant); (*(__z)).value.lval = (*(zend_ast_get_zval(last->child[0]))).value.lval; (*(__z)).u1.type_info = 4; };
   zend_string_release(resolved_name);
   return;
  }
 }

 if (zend_try_ct_eval_const(&result->u.constant, resolved_name, is_fully_qualified)) {
  result->op_type = (1<<0);
  zend_string_release(resolved_name);
  return;
 }

 opline = zend_emit_op_tmp(result, 99, ((void *)0), ((void *)0));
 opline->op2_type = (1<<0);

 if (is_fully_qualified) {
  opline->op2.constant = zend_add_const_name_literal(
   (compiler_globals.active_op_array), resolved_name, 0);
 } else {
  opline->extended_value = 0x010;
  if (((compiler_globals.file_context).current_namespace)) {
   opline->extended_value |= 0x100;
   opline->op2.constant = zend_add_const_name_literal(
    (compiler_globals.active_op_array), resolved_name, 1);
  } else {
   opline->op2.constant = zend_add_const_name_literal(
    (compiler_globals.active_op_array), resolved_name, 0);
  }
 }
 zend_alloc_cache_slot(opline->op2.constant);
}


void zend_compile_class_const(znode *result, zend_ast *ast)
{
 zend_ast *class_ast = ast->child[0];
 zend_ast *const_ast = ast->child[1];

 znode class_node, const_node;
 zend_op *opline;

 if (zend_try_compile_const_expr_resolve_class_name(&result->u.constant, class_ast, const_ast, 0)) {
  if (zval_get_type(&(result->u.constant)) == 1) {
   zend_op *opline = zend_emit_op_tmp(result, 157, ((void *)0), ((void *)0));
   opline->extended_value = zend_get_class_fetch_type(zend_ast_get_str(class_ast));
  } else {
   result->op_type = (1<<0);
  }
  return;
 }

 zend_eval_const_expr(&class_ast);
 zend_eval_const_expr(&const_ast);

 if (class_ast->kind == ZEND_AST_ZVAL) {
  zend_string *resolved_name;

  resolved_name = zend_resolve_class_name_ast(class_ast);
  if (const_ast->kind == ZEND_AST_ZVAL && zend_try_ct_eval_class_const(&result->u.constant, resolved_name, zend_ast_get_str(const_ast))) {
   result->op_type = (1<<0);
   zend_string_release(resolved_name);
   return;
  }
  zend_string_release(resolved_name);
 }
 if (const_ast->kind == ZEND_AST_ZVAL && ((zend_ast_get_str(const_ast))->len == sizeof("class") - 1 && !zend_binary_strcasecmp((zend_ast_get_str(const_ast))->val, (zend_ast_get_str(const_ast))->len, ("class"), sizeof("class") - 1))) {
  zend_error_noreturn((1<<6L),
   "Dynamic class names are not allowed in compile-time ::class fetch");
 }

 zend_compile_class_ref_ex(&class_node, class_ast, 0x0200);

 zend_compile_expr(&const_node, const_ast);

 opline = zend_emit_op_tmp(result, 181, ((void *)0), &const_node);

 zend_set_class_name_op1(opline, &class_node);

 if (opline->op1_type == (1<<0)) {
  zend_alloc_cache_slot(opline->op2.constant);
 } else {
  zend_alloc_polymorphic_cache_slot(opline->op2.constant);
 }
}


void zend_compile_resolve_class_name(znode *result, zend_ast *ast)
{
 zend_ast *name_ast = ast->child[0];
 uint32_t fetch_type = zend_get_class_fetch_type(zend_ast_get_str(name_ast));
 zend_ensure_valid_class_fetch_type(fetch_type);

 switch (fetch_type) {
  case 1:
   if ((compiler_globals.active_class_entry) && zend_is_scope_known()) {
    result->op_type = (1<<0);
    do { zval *__z = (&result->u.constant); zend_string *__s = ((compiler_globals.active_class_entry)->name); (*(__z)).value.str = __s; if (((__s)->gc.u.v.flags & (1<<1))) { (*(__z)).u1.type_info = 6; } else { (__s)->gc.refcount++; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } } while (0);
   } else {
    zend_op *opline = zend_emit_op_tmp(result, 157, ((void *)0), ((void *)0));
    opline->extended_value = fetch_type;
   }
   break;
  case 3:
  case 2:
   {
    zend_op *opline = zend_emit_op_tmp(result, 157, ((void *)0), ((void *)0));
    opline->extended_value = fetch_type;
   }
   break;
  case 0:
   result->op_type = (1<<0);
   do { zval *__z = (&result->u.constant); zend_string *__s = (zend_resolve_class_name_ast(name_ast)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
   break;
  default: do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0); break;
 }
}


static zend_op *zend_compile_rope_add(znode *result, uint32_t num, znode *elem_node)
{
 zend_op *opline = get_next_op((compiler_globals.active_op_array));

 if (num == 0) {
  result->op_type = (1<<1);
  result->u.op.var = -1;
  opline->opcode = 54;
  opline->op1_type = (1<<3);
 } else {
  opline->opcode = 55;
  do { opline->op1_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline->op1 = (result)->u.op; } } while (0);
 }
 do { opline->op2_type = (elem_node)->op_type; if ((elem_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(elem_node)->u.constant); } else { opline->op2 = (elem_node)->u.op; } } while (0);
 do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant); } else { opline->result = (result)->u.op; } } while (0);
 opline->extended_value = num;
 return opline;
}


static void zend_compile_encaps_list(znode *result, zend_ast *ast)
{
 uint32_t i, j;
 uint32_t rope_init_lineno = -1;
 zend_op *opline = ((void *)0), *init_opline;
 znode elem_node, last_const_node;
 zend_ast_list *list = zend_ast_get_list(ast);

 do { if (__builtin_expect(!(list->children > 0), 0)) __builtin_unreachable(); } while (0);

 j = 0;
 last_const_node.op_type = (1<<3);
 for (i = 0; i < list->children; i++) {
  zend_compile_expr(&elem_node, list->child[i]);

  if (elem_node.op_type == (1<<0)) {
   if (zval_get_type(&(*(&elem_node.u.constant))) != 6) { _convert_to_string((&elem_node.u.constant) ); };

   if (((elem_node.u.constant).value.str)->len == 0) {
    _zval_ptr_dtor((&elem_node.u.constant) );
   } else if (last_const_node.op_type == (1<<0)) {
    concat_function(&last_const_node.u.constant, &last_const_node.u.constant, &elem_node.u.constant);
    _zval_ptr_dtor((&elem_node.u.constant) );
   } else {
    last_const_node.op_type = (1<<0);
    do { zval *_z1 = (&last_const_node.u.constant); const zval *_z2 = (&elem_node.u.constant); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
   }
   continue;
  } else {
   if (j == 0) {
    rope_init_lineno = get_next_op_number((compiler_globals.active_op_array));
   }
   if (last_const_node.op_type == (1<<0)) {
    zend_compile_rope_add(result, j++, &last_const_node);
    last_const_node.op_type = (1<<3);
   }
   opline = zend_compile_rope_add(result, j++, &elem_node);
  }
 }

 if (j == 0) {
  result->op_type = (1<<0);
  if (last_const_node.op_type == (1<<0)) {
   do { zval *_z1 = (&result->u.constant); const zval *_z2 = (&last_const_node.u.constant); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
  } else {
   do { do { zval *__z = (&result->u.constant); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);

  }
  return;
 } else if (last_const_node.op_type == (1<<0)) {
  opline = zend_compile_rope_add(result, j++, &last_const_node);
 }
 init_opline = (compiler_globals.active_op_array)->opcodes + rope_init_lineno;
 if (j == 1) {
  if (opline->op2_type == (1<<0)) {
   do { (result)->op_type = opline->op2_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->op2).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->op2; } } while (0);
   do { (opline)->op1.num = 0; (opline)->op2.num = 0; (opline)->result.num = 0; (opline)->opcode = 0; (opline)->op1_type = (1<<3); (opline)->op2_type = (1<<3); (opline)->result_type = (1<<3); } while (0);
  } else {
   opline->opcode = 21;
   opline->extended_value = 6;
   opline->op1_type = opline->op2_type;
   opline->op1 = opline->op2;
   opline->result_type = (1<<1);
   opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
   opline->op2_type = (1<<3);
   do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->result; } } while (0);
  }
 } else if (j == 2) {
  opline->opcode = 53;
  opline->extended_value = 0;
  opline->op1_type = init_opline->op2_type;
  opline->op1 = init_opline->op2;
  opline->result_type = (1<<1);
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  do { (init_opline)->op1.num = 0; (init_opline)->op2.num = 0; (init_opline)->result.num = 0; (init_opline)->opcode = 0; (init_opline)->op1_type = (1<<3); (init_opline)->op2_type = (1<<3); (init_opline)->result_type = (1<<3); } while (0);
  do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->result; } } while (0);
 } else {
  uint32_t var;
  uint32_t range = zend_start_live_range((compiler_globals.active_op_array), rope_init_lineno);

  init_opline->extended_value = j;
  opline->opcode = 56;
  opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
  var = opline->op1.var = get_temporary_variable((compiler_globals.active_op_array));
  do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { do { zval *_z1 = (&(result)->u.constant); const zval *_z2 = ((((compiler_globals.active_op_array))->literals + ((opline->result).constant))); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0); } else { (result)->u.op = opline->result; } } while (0);


  i = ((j * sizeof(zend_string*)) + (sizeof(zval) - 1)) / sizeof(zval);
  while (i > 1) {
   get_temporary_variable((compiler_globals.active_op_array));
   i--;
  }

  zend_end_live_range((compiler_globals.active_op_array), range, opline - (compiler_globals.active_op_array)->opcodes,
   3, var);


  while (opline != init_opline) {
   opline--;
   if (opline->opcode == 55 &&
       opline->result.var == (uint32_t)-1) {
    opline->op1.var = var;
    opline->result.var = var;
   } else if (opline->opcode == 54 &&
              opline->result.var == (uint32_t)-1) {
    opline->result.var = var;
   }
  }
 }
}


void zend_compile_magic_const(znode *result, zend_ast *ast)
{
 zend_op *opline;

 if (zend_try_ct_eval_magic_const(&result->u.constant, ast)) {
  result->op_type = (1<<0);
  return;
 }

 do { if (__builtin_expect(!(ast->attr == 373 && (compiler_globals.active_class_entry) && ((compiler_globals.active_class_entry)->ce_flags & 0x80) != 0), 0)) __builtin_unreachable(); } while (0)

                                                                      ;

 opline = zend_emit_op_tmp(result, 157, ((void *)0), ((void *)0));
 opline->extended_value = 1;
}


zend_bool zend_is_allowed_in_const_expr(zend_ast_kind kind)
{
 return kind == ZEND_AST_ZVAL || kind == ZEND_AST_BINARY_OP
  || kind == ZEND_AST_GREATER || kind == ZEND_AST_GREATER_EQUAL
  || kind == ZEND_AST_AND || kind == ZEND_AST_OR
  || kind == ZEND_AST_UNARY_OP
  || kind == ZEND_AST_UNARY_PLUS || kind == ZEND_AST_UNARY_MINUS
  || kind == ZEND_AST_CONDITIONAL || kind == ZEND_AST_DIM
  || kind == ZEND_AST_ARRAY || kind == ZEND_AST_ARRAY_ELEM
  || kind == ZEND_AST_CONST || kind == ZEND_AST_CLASS_CONST
  || kind == ZEND_AST_MAGIC_CONST || kind == ZEND_AST_COALESCE;
}


void zend_compile_const_expr_class_const(zend_ast **ast_ptr)
{
 zend_ast *ast = *ast_ptr;
 zend_ast *class_ast = ast->child[0];
 zend_ast *const_ast = ast->child[1];
 zend_string *class_name;
 zend_string *const_name = zend_ast_get_str(const_ast);
 zval result;
 int fetch_type;

 if (class_ast->kind != ZEND_AST_ZVAL) {
  zend_error_noreturn((1<<6L),
   "Dynamic class names are not allowed in compile-time class constant references");
 }

 if (zend_try_compile_const_expr_resolve_class_name(&result, class_ast, const_ast, 1)) {
  *ast_ptr = zend_ast_create_zval(&result);
  return;
 }

 class_name = zend_ast_get_str(class_ast);
 fetch_type = zend_get_class_fetch_type(class_name);

 if (3 == fetch_type) {
  zend_error_noreturn((1<<6L),
   "\"static::\" is not allowed in compile-time constants");
 }

 if (0 == fetch_type) {
  class_name = zend_resolve_class_name_ast(class_ast);
 } else {
  zend_string_addref(class_name);
 }

 (result).value.str = zend_concat3(
  (class_name)->val, (class_name)->len, "::", 2, (const_name)->val, (const_name)->len);

 (result).u1.type_info = (11 | (((1<<0) | (1<<2) | (1<<4)) << 8));
 (result).u1.v.const_flags = fetch_type;

 zend_ast_destroy(ast);
 zend_string_release(class_name);

 *ast_ptr = zend_ast_create_zval(&result);
}


void zend_compile_const_expr_const(zend_ast **ast_ptr)
{
 zend_ast *ast = *ast_ptr;
 zend_ast *name_ast = ast->child[0];
 zend_string *orig_name = zend_ast_get_str(name_ast);
 zend_bool is_fully_qualified;

 zval result, resolved_name;
 do { zval *__z = (&resolved_name); zend_string *__s = (zend_resolve_const_name( orig_name, name_ast->attr, &is_fully_qualified)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = ((__s)->gc.u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<2) | (1<<4)) << 8)); } while (0)
                                                  ;

 if (zend_try_ct_eval_const(&result, (resolved_name).value.str, is_fully_qualified)) {
  zend_string_release((resolved_name).value.str);
  zend_ast_destroy(ast);
  *ast_ptr = zend_ast_create_zval(&result);
  return;
 }

 (resolved_name).u1.type_info = (11 | (((1<<0) | (1<<2) | (1<<4)) << 8));
 if (!is_fully_qualified) {
  (resolved_name).u1.v.const_flags = 0x010;
 }

 zend_ast_destroy(ast);
 *ast_ptr = zend_ast_create_zval(&resolved_name);
}


void zend_compile_const_expr_magic_const(zend_ast **ast_ptr)
{
 zend_ast *ast = *ast_ptr;


 do { if (__builtin_expect(!(ast->attr == 373 && (compiler_globals.active_class_entry) && ((compiler_globals.active_class_entry)->ce_flags & 0x80) != 0), 0)) __builtin_unreachable(); } while (0)

                                                                      ;

 {
  zval const_zv;
  (const_zv).value.str = zend_string_init("__CLASS__", sizeof("__CLASS__")-1, 0);
  (const_zv).u1.type_info = (11 | (((1<<0) | (1<<2) | (1<<4)) << 8)) | (0x080 << 16);

  zend_ast_destroy(ast);
  *ast_ptr = zend_ast_create_zval(&const_zv);
 }
}


void zend_compile_const_expr(zend_ast **ast_ptr)
{
 zend_ast *ast = *ast_ptr;
 if (ast == ((void *)0) || ast->kind == ZEND_AST_ZVAL) {
  return;
 }

 if (!zend_is_allowed_in_const_expr(ast->kind)) {
  zend_error_noreturn((1<<6L), "Constant expression contains invalid operations");
 }

 switch (ast->kind) {
  case ZEND_AST_CLASS_CONST:
   zend_compile_const_expr_class_const(ast_ptr);
   break;
  case ZEND_AST_CONST:
   zend_compile_const_expr_const(ast_ptr);
   break;
  case ZEND_AST_MAGIC_CONST:
   zend_compile_const_expr_magic_const(ast_ptr);
   break;
  default:
   zend_ast_apply(ast, zend_compile_const_expr);
   break;
 }
}


void zend_const_expr_to_zval(zval *result, zend_ast *ast)
{
 zend_ast *orig_ast = ast;
 zend_eval_const_expr(&ast);
 zend_compile_const_expr(&ast);
 if (ast->kind == ZEND_AST_ZVAL) {
  do { zval *_z1 = (result); const zval *_z2 = (zend_ast_get_zval(ast)); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); } while (0);
 } else {
  do { zval *__z = (result); zend_ast_ref *_ast = (zend_ast_ref *) (__builtin_constant_p((sizeof(zend_ast_ref)) ) ? (((sizeof(zend_ast_ref)) <= 8) ? _emalloc_8() : (((sizeof(zend_ast_ref)) <= 16) ? _emalloc_16() : (((sizeof(zend_ast_ref)) <= 24) ? _emalloc_24() : (((sizeof(zend_ast_ref)) <= 32) ? _emalloc_32() : (((sizeof(zend_ast_ref)) <= 40) ? _emalloc_40() : (((sizeof(zend_ast_ref)) <= 48) ? _emalloc_48() : (((sizeof(zend_ast_ref)) <= 56) ? _emalloc_56() : (((sizeof(zend_ast_ref)) <= 64) ? _emalloc_64() : (((sizeof(zend_ast_ref)) <= 80) ? _emalloc_80() : (((sizeof(zend_ast_ref)) <= 96) ? _emalloc_96() : (((sizeof(zend_ast_ref)) <= 112) ? _emalloc_112() : (((sizeof(zend_ast_ref)) <= 128) ? _emalloc_128() : (((sizeof(zend_ast_ref)) <= 160) ? _emalloc_160() : (((sizeof(zend_ast_ref)) <= 192) ? _emalloc_192() : (((sizeof(zend_ast_ref)) <= 224) ? _emalloc_224() : (((sizeof(zend_ast_ref)) <= 256) ? _emalloc_256() : (((sizeof(zend_ast_ref)) <= 320) ? _emalloc_320() : (((sizeof(zend_ast_ref)) <= 384) ? _emalloc_384() : (((sizeof(zend_ast_ref)) <= 448) ? _emalloc_448() : (((sizeof(zend_ast_ref)) <= 512) ? _emalloc_512() : (((sizeof(zend_ast_ref)) <= 640) ? _emalloc_640() : (((sizeof(zend_ast_ref)) <= 768) ? _emalloc_768() : (((sizeof(zend_ast_ref)) <= 896) ? _emalloc_896() : (((sizeof(zend_ast_ref)) <= 1024) ? _emalloc_1024() : (((sizeof(zend_ast_ref)) <= 1280) ? _emalloc_1280() : (((sizeof(zend_ast_ref)) <= 1536) ? _emalloc_1536() : (((sizeof(zend_ast_ref)) <= 1792) ? _emalloc_1792() : (((sizeof(zend_ast_ref)) <= 2048) ? _emalloc_2048() : (((sizeof(zend_ast_ref)) <= 2560) ? _emalloc_2560() : (((sizeof(zend_ast_ref)) <= 3072) ? _emalloc_3072() : (((sizeof(zend_ast_ref)) <= ((2 * 1024 * 1024) - ((4 * 1024) * (1)))) ? _emalloc_large((sizeof(zend_ast_ref))) : _emalloc_huge((sizeof(zend_ast_ref)))) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) : _emalloc((sizeof(zend_ast_ref)) ) ); (_ast)->gc.refcount = 1; (_ast)->gc.u.type_info = 12; _ast->ast = (zend_ast_copy(ast)); (*(__z)).value.ast = _ast; (*(__z)).u1.type_info = (12 | (((1<<0) | (1<<2) | (1<<4)) << 8)); } while (0);

  zend_ast_destroy(ast);
 }




 orig_ast->kind = 0;
}



void zend_compile_top_stmt(zend_ast *ast)
{
 if (!ast) {
  return;
 }

 if (ast->kind == ZEND_AST_STMT_LIST) {
  zend_ast_list *list = zend_ast_get_list(ast);
  uint32_t i;
  for (i = 0; i < list->children; ++i) {
   zend_compile_top_stmt(list->child[i]);
  }
  return;
 }

 zend_compile_stmt(ast);

 if (ast->kind != ZEND_AST_NAMESPACE && ast->kind != ZEND_AST_HALT_COMPILER) {
  zend_verify_namespace();
 }
 if (ast->kind == ZEND_AST_FUNC_DECL || ast->kind == ZEND_AST_CLASS) {
  (compiler_globals.zend_lineno) = ((zend_ast_decl *) ast)->end_lineno;
  zend_do_early_binding();
 }
}


void zend_compile_stmt(zend_ast *ast)
{
 if (!ast) {
  return;
 }

 (compiler_globals.zend_lineno) = ast->lineno;

 if (((compiler_globals.compiler_options) & (1<<0)) && !zend_is_unticked_stmt(ast)) {
  zend_do_extended_info();
 }

 switch (ast->kind) {
  case ZEND_AST_STMT_LIST:
   zend_compile_stmt_list(ast);
   break;
  case ZEND_AST_GLOBAL:
   zend_compile_global_var(ast);
   break;
  case ZEND_AST_STATIC:
   zend_compile_static_var(ast);
   break;
  case ZEND_AST_UNSET:
   zend_compile_unset(ast);
   break;
  case ZEND_AST_RETURN:
   zend_compile_return(ast);
   break;
  case ZEND_AST_ECHO:
   zend_compile_echo(ast);
   break;
  case ZEND_AST_THROW:
   zend_compile_throw(ast);
   break;
  case ZEND_AST_BREAK:
  case ZEND_AST_CONTINUE:
   zend_compile_break_continue(ast);
   break;
  case ZEND_AST_GOTO:
   zend_compile_goto(ast);
   break;
  case ZEND_AST_LABEL:
   zend_compile_label(ast);
   break;
  case ZEND_AST_WHILE:
   zend_compile_while(ast);
   break;
  case ZEND_AST_DO_WHILE:
   zend_compile_do_while(ast);
   break;
  case ZEND_AST_FOR:
   zend_compile_for(ast);
   break;
  case ZEND_AST_FOREACH:
   zend_compile_foreach(ast);
   break;
  case ZEND_AST_IF:
   zend_compile_if(ast);
   break;
  case ZEND_AST_SWITCH:
   zend_compile_switch(ast);
   break;
  case ZEND_AST_TRY:
   zend_compile_try(ast);
   break;
  case ZEND_AST_DECLARE:
   zend_compile_declare(ast);
   break;
  case ZEND_AST_FUNC_DECL:
  case ZEND_AST_METHOD:
   zend_compile_func_decl(((void *)0), ast);
   break;
  case ZEND_AST_PROP_DECL:
   zend_compile_prop_decl(ast);
   break;
  case ZEND_AST_CLASS_CONST_DECL:
   zend_compile_class_const_decl(ast);
   break;
  case ZEND_AST_USE_TRAIT:
   zend_compile_use_trait(ast);
   break;
  case ZEND_AST_CLASS:
   zend_compile_class_decl(ast);
   break;
  case ZEND_AST_GROUP_USE:
   zend_compile_group_use(ast);
   break;
  case ZEND_AST_USE:
   zend_compile_use(ast);
   break;
  case ZEND_AST_CONST_DECL:
   zend_compile_const_decl(ast);
   break;
  case ZEND_AST_NAMESPACE:
   zend_compile_namespace(ast);
   break;
  case ZEND_AST_HALT_COMPILER:
   zend_compile_halt_compiler(ast);
   break;
  default:
  {
   znode result;
   zend_compile_expr(&result, ast);
   zend_do_free(&result);
  }
 }

 if (((compiler_globals.file_context).declarables).ticks && !zend_is_unticked_stmt(ast)) {
  zend_emit_tick();
 }
}


void zend_compile_expr(znode *result, zend_ast *ast)
{

 (compiler_globals.zend_lineno) = zend_ast_get_lineno(ast);

 switch (ast->kind) {
  case ZEND_AST_ZVAL:
   do { zval *_z1 = (&result->u.constant); const zval *_z2 = (zend_ast_get_zval(ast)); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
   result->op_type = (1<<0);
   return;
  case ZEND_AST_ZNODE:
   *result = *zend_ast_get_znode(ast);
   return;
  case ZEND_AST_VAR:
  case ZEND_AST_DIM:
  case ZEND_AST_PROP:
  case ZEND_AST_STATIC_PROP:
  case ZEND_AST_CALL:
  case ZEND_AST_METHOD_CALL:
  case ZEND_AST_STATIC_CALL:
   zend_compile_var(result, ast, 0);
   return;
  case ZEND_AST_ASSIGN:
   zend_compile_assign(result, ast);
   return;
  case ZEND_AST_ASSIGN_REF:
   zend_compile_assign_ref(result, ast);
   return;
  case ZEND_AST_NEW:
   zend_compile_new(result, ast);
   return;
  case ZEND_AST_CLONE:
   zend_compile_clone(result, ast);
   return;
  case ZEND_AST_ASSIGN_OP:
   zend_compile_compound_assign(result, ast);
   return;
  case ZEND_AST_BINARY_OP:
   zend_compile_binary_op(result, ast);
   return;
  case ZEND_AST_GREATER:
  case ZEND_AST_GREATER_EQUAL:
   zend_compile_greater(result, ast);
   return;
  case ZEND_AST_UNARY_OP:
   zend_compile_unary_op(result, ast);
   return;
  case ZEND_AST_UNARY_PLUS:
  case ZEND_AST_UNARY_MINUS:
   zend_compile_unary_pm(result, ast);
   return;
  case ZEND_AST_AND:
  case ZEND_AST_OR:
   zend_compile_short_circuiting(result, ast);
   return;
  case ZEND_AST_POST_INC:
  case ZEND_AST_POST_DEC:
   zend_compile_post_incdec(result, ast);
   return;
  case ZEND_AST_PRE_INC:
  case ZEND_AST_PRE_DEC:
   zend_compile_pre_incdec(result, ast);
   return;
  case ZEND_AST_CAST:
   zend_compile_cast(result, ast);
   return;
  case ZEND_AST_CONDITIONAL:
   zend_compile_conditional(result, ast);
   return;
  case ZEND_AST_COALESCE:
   zend_compile_coalesce(result, ast);
   return;
  case ZEND_AST_PRINT:
   zend_compile_print(result, ast);
   return;
  case ZEND_AST_EXIT:
   zend_compile_exit(result, ast);
   return;
  case ZEND_AST_YIELD:
   zend_compile_yield(result, ast);
   return;
  case ZEND_AST_YIELD_FROM:
   zend_compile_yield_from(result, ast);
   return;
  case ZEND_AST_INSTANCEOF:
   zend_compile_instanceof(result, ast);
   return;
  case ZEND_AST_INCLUDE_OR_EVAL:
   zend_compile_include_or_eval(result, ast);
   return;
  case ZEND_AST_ISSET:
  case ZEND_AST_EMPTY:
   zend_compile_isset_or_empty(result, ast);
   return;
  case ZEND_AST_SILENCE:
   zend_compile_silence(result, ast);
   return;
  case ZEND_AST_SHELL_EXEC:
   zend_compile_shell_exec(result, ast);
   return;
  case ZEND_AST_ARRAY:
   zend_compile_array(result, ast);
   return;
  case ZEND_AST_CONST:
   zend_compile_const(result, ast);
   return;
  case ZEND_AST_CLASS_CONST:
   zend_compile_class_const(result, ast);
   return;
  case ZEND_AST_ENCAPS_LIST:
   zend_compile_encaps_list(result, ast);
   return;
  case ZEND_AST_MAGIC_CONST:
   zend_compile_magic_const(result, ast);
   return;
  case ZEND_AST_CLOSURE:
   zend_compile_func_decl(result, ast);
   return;
  default:
   do { if (__builtin_expect(!(0), 0)) __builtin_unreachable(); } while (0);
 }
}


void zend_compile_var(znode *result, zend_ast *ast, uint32_t type)
{
 switch (ast->kind) {
  case ZEND_AST_VAR:
   zend_compile_simple_var(result, ast, type, 0);
   return;
  case ZEND_AST_DIM:
   zend_compile_dim(result, ast, type);
   return;
  case ZEND_AST_PROP:
   zend_compile_prop(result, ast, type);
   return;
  case ZEND_AST_STATIC_PROP:
   zend_compile_static_prop(result, ast, type, 0);
   return;
  case ZEND_AST_CALL:
   zend_compile_call(result, ast, type);
   return;
  case ZEND_AST_METHOD_CALL:
   zend_compile_method_call(result, ast, type);
   return;
  case ZEND_AST_STATIC_CALL:
   zend_compile_static_call(result, ast, type);
   return;
  case ZEND_AST_ZNODE:
   *result = *zend_ast_get_znode(ast);
   return;
  default:
   if (type == 1 || type == 2 || type == 5) {
    zend_error_noreturn((1<<6L),
     "Cannot use temporary expression in write context");
   }

   zend_compile_expr(result, ast);
   return;
 }
}


void zend_delayed_compile_var(znode *result, zend_ast *ast, uint32_t type)
{
 zend_op *opline;
 switch (ast->kind) {
  case ZEND_AST_VAR:
   zend_compile_simple_var(result, ast, type, 1);
   return;
  case ZEND_AST_DIM:
   opline = zend_delayed_compile_dim(result, ast, type);
   zend_adjust_for_fetch_type(opline, type);
   return;
  case ZEND_AST_PROP:
   opline = zend_delayed_compile_prop(result, ast, type);
   zend_adjust_for_fetch_type(opline, type);
   return;
  case ZEND_AST_STATIC_PROP:
   zend_compile_static_prop(result, ast, type, 1);
   return;
  default:
   zend_compile_var(result, ast, type);
   return;
 }
}


void zend_eval_const_expr(zend_ast **ast_ptr)
{
 zend_ast *ast = *ast_ptr;
 zval result;

 if (!ast) {
  return;
 }

 switch (ast->kind) {
  case ZEND_AST_BINARY_OP:
   zend_eval_const_expr(&ast->child[0]);
   zend_eval_const_expr(&ast->child[1]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   if (!zend_try_ct_eval_binary_op(&result, ast->attr,
     zend_ast_get_zval(ast->child[0]), zend_ast_get_zval(ast->child[1]))
   ) {
    return;
   }
   break;
  case ZEND_AST_GREATER:
  case ZEND_AST_GREATER_EQUAL:
   zend_eval_const_expr(&ast->child[0]);
   zend_eval_const_expr(&ast->child[1]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   zend_ct_eval_greater(&result, ast->kind,
    zend_ast_get_zval(ast->child[0]), zend_ast_get_zval(ast->child[1]));
   break;
  case ZEND_AST_AND:
  case ZEND_AST_OR:
  {
   int i;
   for (i = 0; i <= 1; i++) {
    zend_eval_const_expr(&ast->child[i]);
    if (ast->child[i]->kind == ZEND_AST_ZVAL) {
     if (zend_is_true(zend_ast_get_zval(ast->child[i])) == (ast->kind == ZEND_AST_OR)) {
      do { (*(&result)).u1.type_info = (ast->kind == ZEND_AST_OR) ? 3 : 2; } while (0);
      return;
     }
    }
   }

   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   if (ast->kind == ZEND_AST_OR) {
    do { (*(&result)).u1.type_info = (zend_is_true(zend_ast_get_zval(ast->child[0])) || zend_is_true(zend_ast_get_zval(ast->child[1]))) ? 3 : 2; } while (0);
   } else {
    do { (*(&result)).u1.type_info = (zend_is_true(zend_ast_get_zval(ast->child[0])) && zend_is_true(zend_ast_get_zval(ast->child[1]))) ? 3 : 2; } while (0);
   }
   break;
  }
  case ZEND_AST_UNARY_OP:
   zend_eval_const_expr(&ast->child[0]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL) {
    return;
   }

   zend_ct_eval_unary_op(&result, ast->attr, zend_ast_get_zval(ast->child[0]));
   break;
  case ZEND_AST_UNARY_PLUS:
  case ZEND_AST_UNARY_MINUS:
   zend_eval_const_expr(&ast->child[0]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL) {
    return;
   }

   if (!zend_try_ct_eval_unary_pm(&result, ast->kind, zend_ast_get_zval(ast->child[0]))) {
    return;
   }
   break;
  case ZEND_AST_COALESCE:

   if (ast->child[0]->kind == ZEND_AST_DIM) {
    ast->child[0]->attr = 1;
   }
   zend_eval_const_expr(&ast->child[0]);

   if (ast->child[0]->kind != ZEND_AST_ZVAL) {

    zend_eval_const_expr(&ast->child[1]);
    return;
   }

   if (zval_get_type(&(*(zend_ast_get_zval(ast->child[0])))) == 1) {
    zend_eval_const_expr(&ast->child[1]);
    *ast_ptr = ast->child[1];
    ast->child[1] = ((void *)0);
    zend_ast_destroy(ast);
   } else {
    *ast_ptr = ast->child[0];
    ast->child[0] = ((void *)0);
    zend_ast_destroy(ast);
   }
   return;
  case ZEND_AST_CONDITIONAL:
  {
   zend_ast **child, *child_ast;
   zend_eval_const_expr(&ast->child[0]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL) {

    if (ast->child[1]) {
     zend_eval_const_expr(&ast->child[1]);
    }
    zend_eval_const_expr(&ast->child[2]);
    return;
   }

   child = &ast->child[2 - zend_is_true(zend_ast_get_zval(ast->child[0]))];
   if (*child == ((void *)0)) {
    child--;
   }
   child_ast = *child;
   *child = ((void *)0);
   zend_ast_destroy(ast);
   *ast_ptr = child_ast;
   zend_eval_const_expr(ast_ptr);
   return;
  }
  case ZEND_AST_DIM:
  {

   zval *container, *dim;

   if (ast->child[1] == ((void *)0)) {
    zend_error_noreturn((1<<6L), "Cannot use [] for reading");
   }


   if (ast->attr == 1 && ast->child[0]->kind == ZEND_AST_DIM) {
    ast->child[0]->attr = 1;
   }

   zend_eval_const_expr(&ast->child[0]);
   zend_eval_const_expr(&ast->child[1]);
   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   container = zend_ast_get_zval(ast->child[0]);
   dim = zend_ast_get_zval(ast->child[1]);

   if (zval_get_type(&(*(container))) == 7) {
    zval *el;
    if (zval_get_type(&(*(dim))) == 4) {
     el = zend_hash_index_find((*(container)).value.arr, (*(dim)).value.lval);
     if (el) {
      do { zval *_z1 = (&result); const zval *_z2 = (el); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
     } else {
      return;
     }
    } else if (zval_get_type(&(*(dim))) == 6) {
     el = zend_symtable_find((*(container)).value.arr, (*(dim)).value.str);
     if (el) {
      do { zval *_z1 = (&result); const zval *_z2 = (el); zend_refcounted *_gc = (*(_z2)).value.counted; uint32_t _t = (*(_z2)).u1.type_info; do { (*(_z1)).value.counted = _gc; (*(_z1)).u1.type_info = _t; } while (0); if ((_t & ((1<<2) << 8)) != 0) { (_gc)->gc.refcount++; } } while (0);
     } else {
      return;
     }
    } else {
     return;
    }
   } else if (zval_get_type(&(*(container))) == 6) {
    zend_long offset;
    zend_uchar c;
    if (zval_get_type(&(*(dim))) == 4) {
     offset = (*(dim)).value.lval;
    } else if (zval_get_type(&(*(dim))) != 6 || is_numeric_string(((*(dim)).value.str)->val, ((*(dim)).value.str)->len, &offset, ((void *)0), 1) != 4) {
     return;
    }
    if (offset < 0 || (size_t)offset >= ((*(container)).value.str)->len) {
     return;
    }
    c = (zend_uchar) ((*(container)).value.str)->val[offset];
    if ((compiler_globals.one_char_string)[c]) {
     do { zval *__z = (&result); zend_string *__s = ((compiler_globals.one_char_string)[c]); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0);
    } else {
     do { zval *__z = (&result); zend_string *__s = (zend_string_init((char *) &c, 1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<2) | (1<<4)) << 8)); } while (0);
    }
   } else if (zval_get_type(&(*(container))) <= 2) {
    do { (*(&result)).u1.type_info = 1; } while (0);
   } else {
    return;
   }
   break;
  }
  case ZEND_AST_ARRAY:
   if (!zend_try_ct_eval_array(&result, ast)) {
    return;
   }
   break;
  case ZEND_AST_MAGIC_CONST:
   if (!zend_try_ct_eval_magic_const(&result, ast)) {
    return;
   }
   break;
  case ZEND_AST_CONST:
  {
   zend_ast *name_ast = ast->child[0];
   zend_bool is_fully_qualified;
   zend_string *resolved_name = zend_resolve_const_name(
    zend_ast_get_str(name_ast), name_ast->attr, &is_fully_qualified);

   if (!zend_try_ct_eval_const(&result, resolved_name, is_fully_qualified)) {
    zend_string_release(resolved_name);
    return;
   }

   zend_string_release(resolved_name);
   break;
  }
  case ZEND_AST_CLASS_CONST:
  {
   zend_ast *class_ast = ast->child[0];
   zend_ast *name_ast = ast->child[1];
   zend_string *resolved_name;

   if (zend_try_compile_const_expr_resolve_class_name(&result, class_ast, name_ast, 0)) {
    if (zval_get_type(&(result)) == 1) {
     if (zend_get_class_fetch_type(zend_ast_get_str(class_ast)) == 1) {
      zend_ast_destroy(ast);
      *ast_ptr = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, 373);
     }
     return;
    }
    break;
   }

   zend_eval_const_expr(&class_ast);
   zend_eval_const_expr(&name_ast);

   if (name_ast->kind == ZEND_AST_ZVAL && ((zend_ast_get_str(name_ast))->len == sizeof("class") - 1 && !zend_binary_strcasecmp((zend_ast_get_str(name_ast))->val, (zend_ast_get_str(name_ast))->len, ("class"), sizeof("class") - 1))) {
    zend_error_noreturn((1<<6L),
     "Dynamic class names are not allowed in compile-time ::class fetch");
   }

   if (class_ast->kind != ZEND_AST_ZVAL || name_ast->kind != ZEND_AST_ZVAL) {
    return;
   }

   resolved_name = zend_resolve_class_name_ast(class_ast);

   if (!zend_try_ct_eval_class_const(&result, resolved_name, zend_ast_get_str(name_ast))) {
    zend_string_release(resolved_name);
    return;
   }

   zend_string_release(resolved_name);
   break;
  }

  default:
   return;
 }

 zend_ast_destroy(ast);
 *ast_ptr = zend_ast_create_zval(&result);
}
