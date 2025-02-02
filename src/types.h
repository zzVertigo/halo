#include <stdint.h>
#include <stddef.h>

#pragma pack(1)
#define cs(t, s)    static_assert(sizeof(t) == s)
#define co(t, f, o) static_assert(offsetof(t, f) == o)

typedef unsigned int size_t;
typedef unsigned char bool;
cs(wchar_t, 2);

// FIXME: Normalize
typedef uint32_t _DWORD;
typedef uint16_t _WORD;

static const bool true = 1;
static const bool false = 0;

typedef struct {
  uint32_t unk_0;
  uint16_t unk_4;
  uint16_t difficulty; /* Must be < 4 */
  uint32_t unk_8;
  char map_name[256];
} game_options_t;

co(game_options_t, unk_0,      0);
co(game_options_t, unk_4,      4);
co(game_options_t, difficulty, 6);
co(game_options_t, unk_8,      8);
co(game_options_t, map_name,   12);
cs(game_options_t, 0x10C);

typedef struct {
  bool initialized;
  bool active;
  char unk_2[10];
  uint32_t local_time;
  uint16_t elapsed;
  char unk_17[6];
  float speed;
  uint32_t unk_28;
} game_time_globals_t;

co(game_time_globals_t, initialized, 0);
co(game_time_globals_t, active,      1);
co(game_time_globals_t, unk_2,       2);
co(game_time_globals_t, local_time,  12);
co(game_time_globals_t, elapsed,     16);
co(game_time_globals_t, speed,       24);
co(game_time_globals_t, unk_28,      28);
cs(game_time_globals_t, 0x20);

typedef struct {
  char unk_0[212];
} player_data_t;

cs(player_data_t, 212);

typedef struct {
  char unk_0[64];
} team_data_t;

cs(team_data_t, 64);

typedef struct {
  char unk_0[176];
} players_globals_t;

cs(players_globals_t, 176);

typedef struct {
  char unk_0[272];
} player_control_globals_t;

cs(player_control_globals_t, 272);

typedef struct {
  char name[32];
  int16_t maximum_count;
  int16_t size;
  bool valid;
  char unk_37[3];
  int magic;
  char unk_44[2];
  int16_t unk_46;
  int16_t unk_48;
  char unk_50[2];
  void *data;
} data_t;

cs(data_t, 56);
co(data_t, name,          0);
co(data_t, maximum_count, 32);
co(data_t, size,          34);
co(data_t, valid,         36);
co(data_t, unk_37,        37);
co(data_t, magic,         40);
co(data_t, unk_44,        44);
co(data_t, unk_46,        46);
co(data_t, unk_48,        48);
co(data_t, data,          52);

typedef struct {
  data_t *data;
  uint16_t unk_4;
  char unk_6[2];
  uint32_t unk_8;
  uint32_t cookie;
} data_iter_t;

cs(data_iter_t, 16);
co(data_iter_t, data,   0);
co(data_iter_t, unk_4,  4);
co(data_iter_t, unk_6,  6);
co(data_iter_t, unk_8,  8);
co(data_iter_t, cookie, 12);

#undef co
#undef cs
#pragma pack()
