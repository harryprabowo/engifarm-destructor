#ifndef FARMANIMAL_H
#define FARMANIMAL_H

#include "../Cell/Cell.h"

class FarmAnimal {
protected:
	Cell* location;     // Pointer ke lokasi hewan
	bool Hungry;        // Menandai hewan lapar(true) dan tidak lapar(false)
	int HungryTime;     // Menghitung waktu hewan ketika lapar
	bool Alive;         // State hewan hidup atau mati

public:
	// Konstruktor FarmAnimal
	FarmAnimal();
	FarmAnimal(int _x, int _y);
	~FarmAnimal();

	// Position
	Land GetLocation();
	void RandomMove();
	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

	// Setter dan Getter
	// Melihat State Hungry
	bool GetHungry();
	// Melihat state Alive
	bool GetAlive();
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

	// Hewan makan makanan
	// Hewan yang memiliki FarmProduct akan berbeda jika makan
	void EatFood();

	// Fungsi Talk dengan Player
	virtual void TalkWithPlayer() = 0;
};

#endif