/*
 * fex_001.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: bill
 */

#include "fex_001.hpp"
#include <iostream>
#include <vector>
#include <memory>

auto MeshMaker::generate(int n)
{
	std::unique_ptr<Mesh> m0 = std::make_unique<Mesh>(n);
    for(int i = 0; i < n; ++i) {
    	m0->ee.push_back(i);
    };
    return m0;
}

void SystemOfEquations::assemblesystem(std::unique_ptr<Mesh> mm)
{
	for (const auto& elm: mm->ee) {
		std::cout << elm << '\n';
	};
}

int main () {
	MeshMaker mesher;
	SystemOfEquations soe;
	return 0;
}


