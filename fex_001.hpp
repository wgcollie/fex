/*
 * fex_001.hpp
 *
 *  Created on: Aug 15, 2017
 *      Author: bill
 */

#ifndef FEX_001_HPP_
#define FEX_001_HPP_

#include <initializer_list>
#include <vector>
#include <memory>

class SystemOfEquations {
public:
private:
	std::vector<int> vv;
};

class Mesh {
public:
private:
	std::vector<int> ee;
	friend class MeshMaker;
};

class MeshMaker {
public:
	void generate(int n);
private:
	std::unique_ptr<Mesh> mm;
};



#endif /* FEX_001_HPP_ */
