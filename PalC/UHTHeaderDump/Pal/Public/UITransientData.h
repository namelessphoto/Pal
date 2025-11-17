#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "UITransientData.generated.h"

USTRUCT(BlueprintType)
struct FUITransientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 RadialMenuLastTab;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsCampTaskUIOpen;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FName LastOpenedPaldexCharacter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool NewsOpened;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsOpenedSurvivalGuide;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ServerLobbyDialogOpened;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FGuid> IgnoreMaskLocationIDArray;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FName> IgnoreMaskLBossSpawnerNameArray;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<FName, int32> TransientNPCTalkCountMap;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool LoadingScreenLiving;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool CanDisplayBlueprintCategoryInBuildRadialMenu;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool ShouldPopQuickStackDialog;
    
    PAL_API FUITransientData();
};

