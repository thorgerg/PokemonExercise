//
//  order.cpp
//  PokemonExercise
//
//  Created by Greg Thorson on 9/14/16.
//  Copyright © 2016 Greg Thorson. All rights reserved.
//

#include "order.hpp"

void Order::setOrder(int x,int y,int z){
    p.setQuantity(x);
    s.setQuantity(y);
    c.setQuantity(z);
};
void Order::calculatePrice(){
    int pika = p.getQuantity();
    int squirt = s.getQuantity();
    int charm = c.getQuantity();
    
    float pikaPrice = p.getPrice();
    double squirtPrice = s.getPrice();
    double charmPrice = c.getPrice();
    
    while((pika + squirt + charm)>0){
        while(pika > 0 && squirt >0 && charm>0){
            totalPrice+=(pikaPrice - (pikaPrice * .20))
            + (squirtPrice - (squirtPrice * .20))
            + (charmPrice - ((charmPrice) * .20));
            --pika; --squirt; --charm;
        }
        while((pika > 0) && (squirt>0)){
            totalPrice+= (pikaPrice - (pikaPrice * .10)) + (squirtPrice - (squirtPrice * .10));
            --pika; --squirt;
        }
        while((pika > 0) && (charm >0)){
            totalPrice+= (pikaPrice - (pikaPrice * .10)) + (charmPrice - (charmPrice * .10));
            --pika; --charm;
        }
        while((squirt > 0) && (charm >0)){
            totalPrice+= (squirtPrice - (squirtPrice * .10)) + (charmPrice - (charmPrice * .10));
            --squirt; --charm;
        }
        while(pika>0){
            totalPrice+= (pikaPrice);
            --pika;
        }
        while(squirt>0){
            totalPrice+= (squirtPrice);
            --squirt;
        }
        while(charm>0){
            totalPrice+= (charmPrice);
            --charm;
        }
    
    }
    
};
void Order::printOrder(){
    cout
    <<"\nPurchased "<<p.getQuantity()<<" Pikachu "
    <<"\nPurchased "<<s.getQuantity()<<" Squirtle"
    <<"\nPurchased "<<c.getQuantity()<<" Charmander"
    <<"\nTotal Cost: $"<<totalPrice <<"0\n";
};