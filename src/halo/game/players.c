void players_initialize(void)
{
    player_data = game_state_data_new("players", 16, 212);
    team_data = game_state_data_new("teams", 16, 64);
    players_globals = (players_globals_t *)game_state_malloc("players globals", NULL, 176);
    csmemset(&players_globals->unk_0[4], -1, 0x10u);
    *(_DWORD *)players_globals->unk_0 = -1;
    *(_WORD *)&players_globals->unk_0[36] = 0;
    player_control_globals = (player_control_globals_t *)game_state_malloc("player control globals", 0, 272);
}
