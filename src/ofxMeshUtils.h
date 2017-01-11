#pragma once

#include "ofMain.h"

class ofxMeshUtils {
    
public: 
    
    // TODO: doesn't assume any texture coordinates or normals
    
    //--------------------------------------------------------------------------
    static ofMesh getIndiciedMeshFromNonIndiciedMesh( ofMesh & mesh );
    
    // this function expects a mesh of the type OF_PRIMITIVE_TRIANGLES
    // w/ indices  (ie, getIndices().size() > 0)
    // if you can normalize in your shader, you can turn off bNormalize to help
    // see: http://www.iquilezles.org/www/articles/normals/normals.htm
    
    //--------------------------------------------------------------------------
    static void calcNormals( ofMesh & mesh, bool bNormalize = true );
    
    //--------------------------------------------------------------------------
    static ofMesh loadObj(string filename);
    
    static void translate(ofMesh & mesh, ofVec3f pos);
    static void rotate(ofMesh & mesh, float angle, ofVec3f axis);
    static void scale(ofMesh &mesh, float x, float y, float z = 1);
    static void transform(ofMesh &mesh, ofMatrix4x4 mat);
};

