#pragma once


// If Windows and not in Debug, this will run without a console window
// You can use this to output information when debugging using cout or cerr
#ifdef WIN32 
	#ifndef _DEBUG
		#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
	#endif
#endif


// Just need to include main header file
#include "S2D/S2D.h"



// Reduces the amount of typing by including all classes in S2D namespace
using namespace S2D;



// Declares the Pacman class which inherits from the Game class.
// This allows us to overload the Game class methods to help us
// load content, draw and update our game.
class Pacman : public Game
{
private:
	// Data to represent Pacman
	//Vector2* _pacmanPosition;
	//Rect* _pacmanSourceRect;
	//Texture2D* _pacmanTexture;
	
	// Data to represent Pacman2
	//Vector2* _pacman2Position;
	//Rect* _pacman2SourceRect;
	//Texture2D* _pacman2Texture;

	// Data to represent Munchie
	//int _munchieFrameCount;
	//Rect* _munchieRect;
	//Texture2D* _munchieBlueTexture;
	//Texture2D* _munchieInvertedTexture;
	//Vector2* _munchiePosition;

	// Position for String
	Vector2* _stringPosition;

	//Constant data for Game varibles
	//const float _cPacmanSpeed;
	//const int _cPacmanFrameTime;
	//const int _cMunchieFramTime;

	//Game varibles
	//int _pacmanDirection;
	//int _scorePacman;
	//int _scorePacman2;
	//int _pacmanFrame;
	//int _pacmanCurrentFrameTime;
	//int _munchieCurrentFrameTime;

	//Data for menu
	//Texture2D* _menuBackgroud;
	//Rect* _menuRectangle;
	//Vector2* _menuStringPosition;
	bool _pause;
	bool _pKeyDown;
	bool _rKeyDown;
	bool _start;
	
	int munchuieCount;

	SoundEffect* _pop;

	//Methods
	void Input(int elapsedTime, Input::KeyboardState* state, Input::MouseState* mouseState);
	void CheckPaused(Input::KeyboardState* state, Input::Keys pauseKey);
	void CheckViewportCollision();
	void UpdatePacman(int elapsedTime);
	void UpdateMunchie(int elapsedTime);
	void UpdateCherry(int elapsedTime);
	void UpdateGhost(int elapsedTime);
	void GameStart(Input::KeyboardState* state, Input::Keys startKey);
	void CheckGhostCollisions();
	void CheckMunchieCollisions();
	void GetMunchieCount();

public:
	/// <summary> Constructs the Pacman class. </summary>
	Pacman(int argc, char* argv[]);

	/// <summary> Destroys any data associated with Pacman class. </summary>
	virtual ~Pacman();

	/// <summary> All content should be loaded in this method. </summary>
	void virtual LoadContent();

	/// <summary> Called every frame - update game logic here. </summary>
	void virtual Update(int elapsedTime);

	/// <summary> Called every frame - draw game here. </summary>
	void virtual Draw(int elapsedTime);


};