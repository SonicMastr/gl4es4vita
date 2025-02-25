#ifndef _GL4ES_POINTSPRITE_H_
#define _GL4ES_POINTSPRITE_H_

#include "gles.h"

typedef struct {
    GLfloat size;
    GLfloat sizeMin;
    GLfloat sizeMax;
    GLfloat fadeThresholdSize;
    GLfloat distance[3];
    GLenum  coordOrigin;
} pointsprite_t;

EXPORT void APIENTRY_GL4ES gl4es_glPointParameteri(GLenum pname, GLint param);
EXPORT void APIENTRY_GL4ES gl4es_glPointParameteriv(GLenum pname, const GLint * params);
EXPORT void APIENTRY_GL4ES gl4es_glPointParameterf(GLenum pname, GLfloat param);
EXPORT void APIENTRY_GL4ES gl4es_glPointParameterfv(GLenum pname, const GLfloat * params);

EXPORT void APIENTRY_GL4ES gl4es_glPointSize(GLfloat size);

#endif // _GL4ES_POINTSPRITE_H_
