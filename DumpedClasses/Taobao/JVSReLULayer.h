//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JVSBackwardLayer.h"
#import "JVSForwardLayer.h"

@class JVSInvocation, JVSTensor, NSString, NSUUID;

@interface JVSReLULayer : NSObject <JVSForwardLayer, JVSBackwardLayer>
{
    NSUUID *_uuid;
    JVSTensor *_inputTensor;
    NSString *_name;
    JVSInvocation *_forwardInvocation;
    JVSInvocation *_backwardInvocation;
    struct MetalReluParameter _forwardReluParameter;
    struct MetalReluParameter _backwardReluParameter;
}

@property(readonly, nonatomic) JVSTensor *inputTensor; // @synthesize inputTensor=_inputTensor;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)initializeBackward:(id)arg1 batchSize:(int)arg2;
- (id)backwardInvocations;
- (_Bool)initializeForward:(id)arg1 batchSize:(int)arg2;
- (id)forwardInvocations;
@property(readonly, nonatomic) struct jvsdimensions dimensions;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int inputSize;
@property(nonatomic) float leaky;
- (id)initWithDimensions:(struct jvsdimensions)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
