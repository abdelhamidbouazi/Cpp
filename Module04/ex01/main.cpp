/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:51:45 by abouazi           #+#    #+#             */
/*   Updated: 2023/05/24 17:59:57 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
 	// const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // delete j;//should not create a leak
    // delete i;
    
    const Animal* a[8] = {new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat()};
    for(int i = 0; i < 8; i++)
        delete  a[i];
    return 0;
}
