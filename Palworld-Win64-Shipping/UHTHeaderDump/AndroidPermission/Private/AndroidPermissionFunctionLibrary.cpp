#include "AndroidPermissionFunctionLibrary.h"

UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary() {
}

bool UAndroidPermissionFunctionLibrary::CheckPermission(const FString& Permission) {
    return false;
}

UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(const TArray<FString>& Permissions) {
    return NULL;
}


