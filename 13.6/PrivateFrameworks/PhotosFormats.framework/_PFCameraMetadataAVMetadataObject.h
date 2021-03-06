//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PFCameraMetadataAVMetadataObject : NSObject
{
    int _confidence;
    NSString *_type;
    struct CGRect _bounds;
}

+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 type:(id)arg2;
- (void).cxx_destruct;
@property(readonly) int confidence; // @synthesize confidence=_confidence;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CDStruct_1b6d18a9 time;
- (id)initWithType:(id)arg1 bounds:(struct CGRect)arg2 confidence:(int)arg3;

@end

