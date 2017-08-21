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

class Mesh {
public:
	Mesh(std::size_t n)
 {
		ee.reserve(n);
 }
private:
	std::vector<int> ee;
	friend class MeshMaker;
	friend class SystemOfEquations;
};

class SystemOfEquations {
public:
	void assemblesystem(std::unique_ptr<Mesh> mm);
private:
	std::vector<int> vv;
	std::unique_ptr<Mesh> msh;
};

class MeshMaker {
public:
	std::unique_ptr<Mesh> generate(int n);
private:
    int nodeInfo{0};
    int elementInfo{0};
};



#endif /* FEX_001_HPP_ */
