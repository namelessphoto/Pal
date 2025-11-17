#include "CubeGridToolProperties.h"

UCubeGridToolProperties::UCubeGridToolProperties() {
    this->bShowGizmo = false;
    this->GridPower = 5;
    this->CurrentBlockSize = 100.00f;
    this->BlocksPerStep = 1;
    this->bPowerOfTwoBlockSizes = true;
    this->BlockBaseSize = 3.12f;
    this->bCrosswiseDiagonal = false;
    this->bKeepSideGroups = true;
    this->PlaneTolerance = 0.01f;
    this->bHitUnrelatedGeometry = true;
    this->bHitGridGroundPlaneIfCloser = false;
    this->FaceSelectionMode = ECubeGridToolFaceSelectionMode::OutsideBasedOnNormal;
    this->ToggleCornerMode = TEXT("Z to start/complete corner mode.");
    this->PushPull = TEXT("E/Q to pull/push, or use Ctrl+drag.");
    this->ResizeGrid = TEXT("Ctrl + E/Q to increase/decrease grid in powers of two.");
    this->SlideSelection = TEXT("Middle mouse drag to slide selection in plane. Shift + E/Q to shift selection back/forward.");
    this->FlipSelection = TEXT("T to flip the selection.");
    this->GridGizmo = TEXT("R to show/hide grid gizmo.");
    this->QuickShiftGizmo = TEXT("Ctrl + middle click to quick-reposition the gizmo while keeping it on grid.");
    this->AlignGizmo = TEXT("While dragging gizmo handles, hold Ctrl to align to items in scene (constrained to the moved axes).");
    this->bInCornerMode = false;
    this->bAllowedToEditGrid = true;
}


