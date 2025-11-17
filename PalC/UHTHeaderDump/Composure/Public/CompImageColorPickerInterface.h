#pragma once
#include "CoreMinimal.h"
#include "CompEditorImagePreviewInterface.h"
#include "CompImageColorPickerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCompImageColorPickerInterface : public UCompEditorImagePreviewInterface {
    GENERATED_BODY()
};

class ICompImageColorPickerInterface : public ICompEditorImagePreviewInterface {
    GENERATED_BODY()
public:
};

