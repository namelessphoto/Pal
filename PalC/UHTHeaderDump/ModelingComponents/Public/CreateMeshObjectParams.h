#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshNaniteSettings -FallbackName=MeshNaniteSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "ECreateObjectTypeHint.h"
#include "CreateMeshObjectParams.generated.h"

class UMaterialInterface;
class UPrimitiveComponent;
class UWorld;

USTRUCT(BlueprintType)
struct MODELINGCOMPONENTS_API FCreateMeshObjectParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UPrimitiveComponent* SourceComponent;
    
    UPROPERTY(EditAnywhere)
    ECreateObjectTypeHint TypeHint;
    
    UPROPERTY(EditAnywhere)
    UClass* TypeHintClass;
    
    UPROPERTY(EditAnywhere)
    int32 TypeHintExtended;
    
    UPROPERTY(EditAnywhere)
    UWorld* TargetWorld;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    FString BaseName;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> AssetMaterials;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> CollisionMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRaytracingSupport;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRecomputeNormals;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRecomputeTangents;
    
    UPROPERTY(EditAnywhere)
    bool bEnableNanite;
    
    UPROPERTY()
    float NaniteProxyTrianglePercent;
    
    UPROPERTY(EditAnywhere)
    FMeshNaniteSettings NaniteSettings;
    
    FCreateMeshObjectParams();
};

