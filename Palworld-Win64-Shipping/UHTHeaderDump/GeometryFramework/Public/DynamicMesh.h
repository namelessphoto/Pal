#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshCommandChangeTarget.h"
#include "MeshReplacementCommandChangeTarget.h"
#include "MeshVertexCommandChangeTarget.h"
#include "OnDynamicMeshModifiedBPDelegate.h"
#include "DynamicMesh.generated.h"

class UDynamicMesh;
class UDynamicMeshGenerator;

UCLASS(BlueprintType)
class GEOMETRYFRAMEWORK_API UDynamicMesh : public UObject, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDynamicMeshModifiedBP MeshModifiedBPEvent;
    
protected:
    UPROPERTY(Instanced)
    UDynamicMeshGenerator* MeshGenerator;
    
public:
    UPROPERTY(EditAnywhere)
    bool bEnableMeshGenerator;
    
    UDynamicMesh();

    UFUNCTION(BlueprintCallable)
    UDynamicMesh* ResetToCube();
    
    UFUNCTION(BlueprintCallable)
    UDynamicMesh* Reset();
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTriangleCount() const;
    

    // Fix for true pure virtual functions not being implemented
};

