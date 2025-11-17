#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeB.h"
#include "PalBuildObjectData.h"
#include "PalItemRecipeMaterialInfo.h"
#include "PalBuildObjectDataUtility.generated.h"

UCLASS(BlueprintType)
class UPalBuildObjectDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalBuildObjectDataUtility();

    UFUNCTION(BlueprintPure)
    static int32 ToSortPriorityTypeB(const EPalBuildObjectTypeB TypeB);
    
    UFUNCTION(BlueprintPure)
    static int32 ToSortPriorityTypeA(const EPalBuildObjectTypeA TypeA);
    
    UFUNCTION(BlueprintPure)
    static int32 ToInt(const EPalBuildObjectTypeA TypeA);
    
    UFUNCTION(BlueprintPure)
    static EPalBuildObjectTypeA ToBuildObjectTypeA(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static void MaterialInfos(const FPalBuildObjectData& BuildObjectData, TArray<FPalItemRecipeMaterialInfo>& NewMaterialInfos);
    
};

