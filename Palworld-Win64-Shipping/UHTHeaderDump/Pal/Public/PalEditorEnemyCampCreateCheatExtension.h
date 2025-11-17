#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManagerExtension -FallbackName=CheatManagerExtension
#include "PalEditorEnemyCampCreateCheatExtension.generated.h"

UCLASS()
class UPalEditorEnemyCampCreateCheatExtension : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    UPalEditorEnemyCampCreateCheatExtension();

    UFUNCTION(Exec)
    void InstallBuildObject(const FName BuildObjectId, const FVector& Location, const float Yaw);
    
    UFUNCTION(Exec)
    void CreateEnemyCampBlueprintByLevelInstalled(const FString& BlueprintDataName);
    
    UFUNCTION(Exec)
    void ClearLevelAndLoadEnemyCampBlueprint(const FString& BlueprintDataName);
    
    UFUNCTION(Exec)
    void ClearEnemyCampCreatorLevel();
    
};

