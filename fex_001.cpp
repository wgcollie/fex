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

Mesh MeshMaker::generate(int n)
{
	nodeInfo = n;
	elementInfo = n;
	Mesh meshp{};
    for(int i = 0; i < n; ++i) {
    	meshp.ee.push_back(i);
    };
    return meshp;
}

void SystemOfEquations::assemblesystem(Mesh mm)
{
	for (const auto& elm: mm.ee) {
		std::cout << elm << '\n';
	};
}

int main () {
	MeshMaker mesher{};
	auto mp = mesher.generate(5);

	SystemOfEquations soe{};
	soe.assemblesystem(mp);

	return 0;
}


