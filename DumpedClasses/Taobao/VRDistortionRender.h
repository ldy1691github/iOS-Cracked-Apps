//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceParam, DistortionMesh, DistortionProgram, FieldOfView, VREyeViewport;

@interface VRDistortionRender : NSObject
{
    DistortionProgram *_distortionProgram;
    _Bool _aberration;
    DistortionMesh *_leftEyeMesh;
    DistortionMesh *_rightEyeMesh;
    FieldOfView *_leftEyeFov;
    FieldOfView *_rightEyeFov;
    VREyeViewport *_leftEyeViewport;
    VREyeViewport *_rightEyeViewport;
    unsigned int _leftTextureID;
    unsigned int _leftRenderbufferID;
    unsigned int _leftFramebufferID;
    unsigned int _rightTextureID;
    unsigned int _rightRenderbufferID;
    unsigned int _rightFramebufferID;
    DeviceParam *_deviceParam;
    float _resolutionWidth;
    float _resolutionHeight;
    float _resolutionScale;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)free;
- (void)renderDistortionMeshWithMesh:(id)arg1 textureID:(int)arg2;
- (void)bindVAOWithMesh:(id)arg1;
- (void)bindVAO;
- (void)undistortTextureWithEye:(int)arg1;
- (void)afterDrawFrameWithEye:(int)arg1;
- (void)beforeDrawFrameWithEye:(int)arg1;
- (void)releaseRenderID;
- (int)createTextureWithWidth:(int)arg1 height:(int)arg2;
- (int)setupRightRenderWithWidth:(int)arg1 height:(int)arg2;
- (int)setupLeftRenderWithWidth:(int)arg1 height:(int)arg2;
- (int)setupRenderTextureAndRenderbuffer;
- (void)updateDistortionMesh;
- (void)initResolutionWidthHeight;
- (void)initFovAndViewport;
- (void)initRenderID;
- (id)initWithAberration:(_Bool)arg1;

@end

