#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WaterZone.generated.h"

class UTextureRenderTarget2D;
class UWaterBodyComponent;
class UWaterMeshComponent;

UCLASS()
class WATER_API AWaterZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* WaterInfoTexture;
    
private:
    UPROPERTY(Export, Transient, VisibleAnywhere)
    TArray<TWeakObjectPtr<UWaterBodyComponent>> OwnedWaterBodies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint RenderTargetResolution;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWaterMeshComponent* WaterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoneExtent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float CaptureZOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHalfPrecisionTexture;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 VelocityBlurRadius;
    
    UPROPERTY(EditAnywhere)
    FVector TessellatedWaterMeshExtent;
    
    UPROPERTY(EditAnywhere)
    uint32 NonTessellatedLODSectionScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 OverlapPriority;
    
    UPROPERTY(EditAnywhere)
    bool bEnableNonTessellatedLODMesh;
    
public:
    AWaterZone(const FObjectInitializer& ObjectInitializer);

};

