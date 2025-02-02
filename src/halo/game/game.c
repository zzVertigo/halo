void game_initialize(void)
{
  game_globals = game_state_malloc("game globals", 0, 276);
  csmemset(game_globals, 0, 0x114u);
  csmemset(&game_variant_global, 0, 0x68u);
  real_math_reset_precision();
  game_time_initialize();
  game_engine_initialize(&game_variant_global);
  game_allegiance_initialize();
  first_person_weapons_initialize();
  rumble_initialize();
  director_initialize();
  observer_initialize();
  render_initialize();
  objects_initialize();
  structure_decals_initialize();
  breakable_surfaces_initialize();
  decals_initialize();
  collision_log_initialize();
  players_initialize();
  contrails_initialize();
  particles_initialize();
  effects_initialize();
  weather_particle_systems_initialize();
  particle_systems_initialize();
  hud_messaging_initialize();
  game_sound_initialize();
  player_control_initialize();
  player_effect_initialize();
  ai_initialize();
  editor_initialize();
  ui_widgets_initialize();
  hs_initialize();
  recorded_animations_initialize();
  cheats_initialize();
  transport_initialize();
  telnet_console_initialize();
  initialize_network_game_packets();
  cinematic_initialize();
  saved_game_files_initialize();
  event_manager_initialize();
  input_abstraction_initialize();
  player_ui_initialize();
  bink_playback_initialize();
  progress_bar_initialize();
}

void game_options_new(game_options_t *game_options)
{
  csmemset(game_options, 0, sizeof(*game_options));
  game_options->unk_4 = 0;
  game_options->difficulty = 1;
  game_options->unk_8 = 0xDEADBEEF;
}
