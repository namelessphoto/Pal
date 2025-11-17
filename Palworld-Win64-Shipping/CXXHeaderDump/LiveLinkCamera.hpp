#ifndef UE4SS_SDK_LiveLinkCamera_HPP
#define UE4SS_SDK_LiveLinkCamera_HPP

struct FLiveLinkCameraControllerUpdateFlags
{
    bool bApplyFieldOfView;
    bool bApplyAspectRatio;
    bool bApplyFocalLength;
    bool bApplyProjectionMode;
    bool bApplyFilmBack;
    bool bApplyAperture;
    bool bApplyFocusDistance;

};

class ULiveLinkCameraController : public ULiveLinkControllerBase
{
    bool bUseCameraRange;
    FLensFilePicker LensFilePicker;
    FLiveLinkCameraControllerUpdateFlags UpdateFlags;

};

#endif
