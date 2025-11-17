#include "SetCollisionGeometryToolProperties.h"

USetCollisionGeometryToolProperties::USetCollisionGeometryToolProperties() {
    this->GeometryType = ECollisionGeometryType::AlignedBoxes;
    this->InputMode = ESetCollisionGeometryInputMode::PerInputObject;
    this->bUseWorldSpace = false;
    this->bRemoveContained = true;
    this->bEnableMaxCount = true;
    this->MaxCount = 50;
    this->MinThickness = 0.01f;
    this->bDetectBoxes = true;
    this->bDetectSpheres = true;
    this->bDetectCapsules = true;
    this->bSimplifyHulls = true;
    this->HullTargetFaceCount = 20;
    this->MaxHullsPerMesh = 1;
    this->ConvexDecompositionSearchFactor = 0.50f;
    this->AddHullsErrorTolerance = 0.00f;
    this->MinPartThickness = 0.10f;
    this->bSimplifyPolygons = true;
    this->HullTolerance = 0.10f;
    this->SweepAxis = EProjectedHullAxis::SmallestVolume;
    this->LevelSetResolution = 10;
    this->bAppendToExisting = false;
    this->SetCollisionType = ECollisionGeometryMode::SimpleAndComplex;
}


