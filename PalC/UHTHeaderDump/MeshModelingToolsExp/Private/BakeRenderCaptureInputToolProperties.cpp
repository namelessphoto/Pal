#include "BakeRenderCaptureInputToolProperties.h"

UBakeRenderCaptureInputToolProperties::UBakeRenderCaptureInputToolProperties() {
    this->TargetStaticMesh = NULL;
}

TArray<FString> UBakeRenderCaptureInputToolProperties::GetTargetUVLayerNamesFunc() const {
    return TArray<FString>();
}

int32 UBakeRenderCaptureInputToolProperties::GetTargetUVLayerIndex() const {
    return 0;
}


