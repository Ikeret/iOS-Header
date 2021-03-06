//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DPipelineLinkable-Protocol.h>

@class NSString;

@interface TSCH3DFramebuffer : NSObject <TSCH3DPipelineLinkable>
{
    struct FramebufferAttributes mFramebufferAttributes;
    unsigned long long _uniqueIdentifier;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;
- (id).cxx_construct;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)pixelBufferFromViewport:(const box_0260e9b3 *)arg1 components:(unsigned long long)arg2 flipped:(_Bool)arg3 forProcessor:(id)arg4 session:(id)arg5;
- (id)output;
- (id)resolvingFramebuffer;
- (const struct FramebufferAttributes *)framebufferAttributes;
- (void)dealloc;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

