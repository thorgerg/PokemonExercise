//
//  main.cpp
//  PokemonExercise
//
//  Created by Greg Thorson on 9/14/16.
//  Copyright © 2016 Greg Thorson. All rights reserved.
//

#include <iostream>
#include "pokemon.h"
#include "order.hpp"


int main(int argc, const char * argv[]) {
    
    Order *purchaseOrder = new Order;
    int x,y,z;
    
    cout<<"\nPikachu toys cost $6"
        <<"\nSquirtle toys cost $5"
        <<"\nCharmander toys cost $5"
        <<"\nEnter your purchase order...";
    
    cout<<"\nPikachus: ";
    cin>>x;
    cout<<"Squirtles: ";
    cin>>y;
    cout<<"Charmanders: ";
    cin>>z;
    
    
    purchaseOrder->setOrder(x,y,z);
    purchaseOrder->calculatePrice();
    purchaseOrder->printOrder();
}
