#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PaintContext -FallbackName=PaintContext
#include "PalUMGCustomVertexData.h"
#include "PalUserWidget.h"
#include "PalCustomPrimitiveWidget.generated.h"

class USlateBrushAsset;

UCLASS(EditInlineNew)
class PAL_API UPalCustomPrimitiveWidget : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USlateBrushAsset* SlateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPalUMGCustomVertexData> VertexData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> vertexIndexes;
    
public:
    UPalCustomPrimitiveWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateVertexData(int32 Index, const FPalUMGCustomVertexData& inVertexData);
    
    UFUNCTION(BlueprintCallable)
    void PushVertexData(const FPalUMGCustomVertexData& inVertexData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DrawVertexData(UPARAM(Ref) FPaintContext& Context) const;
    
};

