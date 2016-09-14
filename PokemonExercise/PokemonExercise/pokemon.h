//
//  pokemon.h
//  PokemonExercise
//
//  Created by Greg Thorson on 9/14/16.
//  Copyright © 2016 Greg Thorson. All rights reserved.
//

#ifndef pokemon_h
#define pokemon_h
#include <iostream>
using namespace std;

class Pokemon{
public:
    Pokemon(){};
    virtual void setQuantity(int x){quantity = x;};
    virtual int getQuantity(){return quantity;};
    virtual void setPrice(int x){price = x;};
    virtual double getPrice(){return price;};
    virtual ~Pokemon(){};
private:
    double price;
    int quantity;
};

class Pikachu: public Pokemon{
public:
    Pikachu(): price_(6.00){};
    ~Pikachu(){};
    virtual double getPrice(){return price_;};
private:
        double price_;
};

class Squirtle: public Pokemon{
public:
    Squirtle():price_(5.00){};
    ~Squirtle(){};
    virtual double getPrice(){return price_;};
private:
        double price_;
};

class Charmander: public Pokemon{
public:
    Charmander():price_(5.00){};
    ~Charmander(){};
    virtual double getPrice(){return price_;};
private:
        double price_;
};
#endif /* pokemon_h */
