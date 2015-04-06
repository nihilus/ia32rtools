// note: include after system headers

//#pragma GCC diagnostic ignored "-Wparentheses"

#define u8 uint8_t
#define u16 uint16_t
#define u32 uint32_t
#define u64 uint64_t
#define s8 int8_t
#define s16 int16_t
#define s32 int32_t
#define s64 int64_t
typedef struct {
  u64 q;
  u32 d[2];
  u16 w[4];
  u8  b[8];
} mmxr;

#define bool int
#define _BYTE uint8_t
#define _WORD uint16_t
#define _DWORD uint32_t
#define _UNKNOWN uint8_t
#undef LOBYTE
#undef LOWORD
#undef HIBYTE
#undef HIWORD
#define LOBYTE(x)   (*((u8*)&(x)))
#define LOWORD(x)   (*((u16*)&(x)))
#define HIBYTE(x)   (*((u8*)&(x)+1))
#define HIWORD(x)   (*((u16*)&(x)+1))
#define BYTE0(x)    (*((u8*)&(x)+0))
#define BYTE1(x)    (*((u8*)&(x)+1))
#define BYTE2(x)    (*((u8*)&(x)+2))
#define BYTE3(x)    (*((u8*)&(x)+3))

#define memcpy_0 memcpy

#define noreturn __attribute__((noreturn))

static inline BOOL PtInRect_sa(LPCRECT r, int x, int y)
{
  POINT p = { x, y };
  return PtInRect(r, p);
}
