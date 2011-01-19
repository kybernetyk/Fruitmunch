/*
 *  globals.h
 *  ComponentV3
 *
 *  Created by jrk on 11/11/10.
 *  Copyright 2010 flux forge. All rights reserved.
 *
 */
#pragma once

namespace game 
{
	struct GameState
	{
		int score;
		float time_left;
		float time_played;
		
		int game_state;
		int next_state;
		
		int game_mode;
		
		int killed_last_frame;
		int previous_kill;
		int total_killed;
		
		int fruits_on_board;
		
		int player_rank;
		
		void reset ()
		{
			score = 0;
			time_left = 90.0;
			killed_last_frame = 0;
			previous_kill = 0;
			total_killed = 0;
			fruits_on_board = 0;
			time_played = 0.0f;
			player_rank = 0;
		}
	};
	
#define NUM_SOUNDS 22
	
#define GAME_MODE_TIMED 0x01
#define GAME_MODE_ENDLESS 0x02
#define GAME_MODE_SWEEP 0x03

#define GAME_STATE_PREP 0x01
#define GAME_STATE_PLAY 0x02
#define GAME_STATE_GAMEOVER 0x03
#define GAME_STATE_SOLVED 0x04
	
#define SCENE_TYPE_MAIN_MENU 0x00
#define SCENE_TYPE_GAME 0x01
	
#define TILESIZE_X 51.0
#define TILESIZE_Y 51.0
	
#define BOARD_X_OFFSET (7+TILESIZE_X/2)
#define BOARD_Y_OFFSET (72+TILESIZE_Y/2)
	
#define BOARD_NUM_COLS 6*2
#define BOARD_NUM_ROWS (8)*2
#define BOARD_NUM_VISIBLE_ROWS 8
#define BOARD_NUM_MARKERS 32
	
#define SFX_TIME_UP 0x00
#define SFX_GET_READY 0x01
#define SFX_GO 0x02
#define SFX_GAME_OVER 0x03
#define SFX_FRUIT_LAND 0x04
#define SFX_FRUIT_REMOVE_2 0x05
#define SFX_FRUIT_REMOVE_3 0x06
#define SFX_FRUIT_REMOVE_4 0x07
#define SFX_FRUIT_REMOVE_5 0x08	
#define SFX_FRUIT_REMOVE_6 0x09
#define SFX_EXCELLENT 0x0c
#define SFX_INCREDIBLE 0x0b
#define SFX_AWESOME 0x0a
#define SFX_COUNTDOWN 0x0d
#define SFX_SOLVED 0x0e
#define SFX_IMPRESSIVE 0x0f
#define SFX_EXCELLENT2 0x10
#define SFX_EXCELLENT3 0x11
#define SFX_AWESOME2 0x12
#define SFX_IMPRESSIVE2 0x13
#define SFX_GOOD1 0x14
#define SFX_GOOD2 0x15
}

extern game::GameState g_GameState;
extern bool g_ParticlesEnabled;
extern float g_FPS;
	

