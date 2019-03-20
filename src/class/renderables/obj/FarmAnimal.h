#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "Cell.h"
#include "Player.h"

class FarmAnimal : public Renderables {
protected:
	Cell& location;     // Pointer ke lokasi hewan
	bool hungry;        // Menandai hewan lapar(true) dan tidak lapar(false)
	int hungryTime;     // Menghitung waktu hewan ketika lapar
	bool alive;         // State hewan hidup atau mati

public:
	// Konstruktor FarmAnimal
	FarmAnimal(int _x, int _y);

	// Position
	Cell& GetLocation();
	void RandomMove();
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

	// Setter dan Getter
	// Melihat State Hungry
	bool IsHungry();
	// Melihat state Alive
	bool IsAlive();
	// Mendapatkan HungryTime
	int GetHungryTime();
	// Mengubah state Hungry hewan
	void SetHungry(bool state);
	// Mengubah HungryTime
	void SetHungryTime(int time);
	// Mengubah Alive
	void SetAlive(bool state);

	// Mengecek hewan mati atau belum karena lapar, kalau mati Alive = false
	void Dead();

	// Hewan makan rumput jika lapar dan berada pada Cell yang ditumbuhi rumput
	// Hewan yang memiliki FarmProduct akan berbeda jika makan
	void EatFood();

	// Fungsi Talk dengan Player
	virtual void Talk() = 0;
};

#endif