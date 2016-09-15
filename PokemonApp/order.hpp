//
//  order.hpp
//  PokemonExercise
//
//  Created by Greg Thorson on 9/14/16.
//  Copyright © 2016 Greg Thorson. All rights reserved.
//

#ifndef order_hpp
#define order_hpp

#include <stdio.h>
#include "pokemon.h"

class Order{
public:
    Order(){totalPrice = 0;};
    void setOrder(int,int,int);
    void calculatePrice();
    void printOrder();
    double totalPrice;
    ~Order(){};
private:
    Pikachu p;
    Squirtle s;
    Charmander c;
};
#endif /* order_hpp */
