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
	Mesh():ee{}{};
 private:
	std::vector<int> ee;
	friend class MeshMaker;
	friend class SystemOfEquations;
};

class SystemOfEquations {
public:
	SystemOfEquations():vv{}{};
	void assemblesystem(Mesh mm);
private:
	std::vector<int> vv;
	std::unique_ptr<Mesh> msh;
};

class MeshMaker {
public:
	MeshMaker():nodeInfo{0},elementInfo{0}{};
	Mesh generate(int n);
private:
    int nodeInfo;
    int elementInfo;
};



#endif /* FEX_001_HPP_ */
