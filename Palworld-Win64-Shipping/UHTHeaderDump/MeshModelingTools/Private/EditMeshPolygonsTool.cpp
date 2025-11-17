#include "EditMeshPolygonsTool.h"

UEditMeshPolygonsTool::UEditMeshPolygonsTool() {
    this->Preview = NULL;
    this->CommonProps = NULL;
    this->EditActions = NULL;
    this->EditActions_Triangles = NULL;
    this->EditEdgeActions = NULL;
    this->EditEdgeActions_Triangles = NULL;
    this->EditUVActions = NULL;
    this->CancelAction = NULL;
    this->AcceptCancelAction = NULL;
    this->TopologyProperties = NULL;
    this->ExtrudeActivity = NULL;
    this->InsetOutsetActivity = NULL;
    this->CutFacesActivity = NULL;
    this->PlanarProjectionUVActivity = NULL;
    this->InsertEdgeActivity = NULL;
    this->InsertEdgeLoopActivity = NULL;
    this->BevelEdgeActivity = NULL;
    this->ActivityContext = NULL;
    this->SelectionMechanic = NULL;
    this->DragAlignmentMechanic = NULL;
    this->TransformGizmo = NULL;
    this->TransformProxy = NULL;
}


