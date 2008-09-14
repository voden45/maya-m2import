#ifndef DATA_EXCHANGE_H
#define DATA_EXCHANGE_H

#include "M2.h"

#include <list>

// Temporary structs used to pass data to Maya

struct DETexture
{
	std::string filename;
};

struct DEMesh
{	
	DEMesh() : originalVertices(0), indices(0) {}
	~DEMesh() { delete[] originalVertices; delete[] indices; }

	unsigned int nOriginalVertices;
	M2Vertex* originalVertices;

	unsigned int nIndices;
	uint16* indices;

	std::list<DETexture> textures;
};

#endif