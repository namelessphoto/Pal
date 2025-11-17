#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalStaticMeshImposterStaticMeshInfo.h"
#include "PalStaticMeshImposterStaticMeshInfoCreator.generated.h"

class UStaticMesh;

UCLASS(BlueprintType)
class UPalStaticMeshImposterStaticMeshInfoCreator : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStaticMeshImposterStaticMeshInfoCreator();

    UFUNCTION(BlueprintPure)
    static FPalStaticMeshImposterStaticMeshInfo CreateStaticMeshImposterInfo(UStaticMesh* StaticMesh, const FVector& WorldLocation, const FQuat& WorldRotation);
    
};

