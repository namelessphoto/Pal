#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PalItemAndNum.h"
#include "PalUICommonItemInfoDisplayData.generated.h"

class UPalItemSlot;
class UWidget;

USTRUCT(BlueprintType)
struct FPalUICommonItemInfoDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPalItemSlot* TargetItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RecipeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> RecipeRequiredItemsOverrideMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPalItemAndNum ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* RelativeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D AnchorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUsableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableQuickEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableQuickMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableSpreadLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShowPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText OverrideNumCountText;
    
    PAL_API FPalUICommonItemInfoDisplayData();
};

