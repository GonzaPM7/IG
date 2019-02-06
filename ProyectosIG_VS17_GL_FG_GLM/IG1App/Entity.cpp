#include "Entity.h"

#include <gtc/matrix_transform.hpp>  
#include <gtc/type_ptr.hpp>

using namespace glm;

//-------------------------------------------------------------------------

void Entity::uploadMvM(dmat4 const& modelViewMat) const
{ 
	dmat4 aMat = modelViewMat * modelMat;
	glMatrixMode(GL_MODELVIEW);
	glLoadMatrixd(value_ptr(aMat));
}
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------

EjesRGB::EjesRGB(GLdouble l): Entity() 
{
  mesh = Mesh::createRGBAxes(l);
}
//-------------------------------------------------------------------------

EjesRGB::~EjesRGB() 
{ 
	delete mesh; mesh = nullptr; 
}
//-------------------------------------------------------------------------

void EjesRGB::render(Camera const& cam)
{
	if (mesh != nullptr) {
		uploadMvM(cam.getViewMat()); 
		glLineWidth(2);
		mesh->render();
		glLineWidth(1);
	}
}
//-------------------------------------------------------------------------
Poliespiral::Poliespiral(dvec2 verIni, GLdouble angIni, GLdouble incrAng, GLdouble ladoIni, GLdouble incrLado, GLuint numVert) : Entity() {

	mesh = Mesh::generaPoliespiral(verIni, angIni,
		incrAng, ladoIni, incrLado, numVert);
}
//------------------------------------------------------------------------
Poliespiral::~Poliespiral()
{
	delete mesh; mesh = nullptr;	
}
//-------------------------------------------------------------------
void Poliespiral::render(Camera const& cam)
{
	if (mesh != nullptr) {
		
		uploadMvM(cam.getViewMat());
		glColor3d(0.0, 0.0, 1.0);
		glLineWidth(2);
		mesh->render();
	}
}