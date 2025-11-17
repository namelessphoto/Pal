#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ECubeGridToolFaceSelectionMode.h"
#include "CubeGridToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCubeGridToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector GridFrameOrigin;
    
    UPROPERTY(EditAnywhere)
    FRotator GridFrameOrientation;
    
    UPROPERTY(EditAnywhere)
    bool bShowGizmo;
    
    UPROPERTY(EditAnywhere)
    uint8 GridPower;
    
    UPROPERTY(EditAnywhere)
    double CurrentBlockSize;
    
    UPROPERTY(EditAnywhere)
    int32 BlocksPerStep;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bPowerOfTwoBlockSizes;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    double BlockBaseSize;
    
    UPROPERTY(EditAnywhere)
    bool bCrosswiseDiagonal;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bKeepSideGroups;
    
    UPROPERTY()
    double PlaneTolerance;
    
    UPROPERTY(EditAnywhere)
    bool bHitUnrelatedGeometry;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHitGridGroundPlaneIfCloser;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ECubeGridToolFaceSelectionMode FaceSelectionMode;
    
    UPROPERTY(VisibleAnywhere)
    FString ToggleCornerMode;
    
    UPROPERTY(VisibleAnywhere)
    FString PushPull;
    
    UPROPERTY(VisibleAnywhere)
    FString ResizeGrid;
    
    UPROPERTY(VisibleAnywhere)
    FString SlideSelection;
    
    UPROPERTY(VisibleAnywhere)
    FString FlipSelection;
    
    UPROPERTY(VisibleAnywhere)
    FString GridGizmo;
    
    UPROPERTY(VisibleAnywhere)
    FString QuickShiftGizmo;
    
    UPROPERTY(VisibleAnywhere)
    FString AlignGizmo;
    
    UPROPERTY()
    bool bInCornerMode;
    
    UPROPERTY()
    bool bAllowedToEditGrid;
    
    UCubeGridToolProperties();

};

