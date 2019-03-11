#ifndef FARMANIMAL_H
#define FARMANIMAL_H

class FarmAnimal {
protected:
    int X;              // Lokasi absis hewan pada peta
    int Y;              // Lokasi ordinat hewan pada peta
    bool Hungry;        // Menandai hewan lapar(true) dan tidak lapar(false)
    int HungryTime;     // Menghitung waktu hewan ketika lapar
    bool Alive;         // State hewan hidup atau mati

public:
    // Konstruktor FarmAnimal
    FarmAnimal();

    // Position
    int GetX();
    int GetY();
    void SetX(int _x);
    void SetY(int _y);
    // Hewan bergerak berdasarkan sumbu X
    void MoveX();
    // Hewan bergerak berdasarkan sumbu Y
    void MoveY();

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