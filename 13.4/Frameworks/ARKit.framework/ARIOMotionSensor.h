//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>

@class ARAccelerometerData, ARGyroscopeData, NSString;
@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARIOMotionSensor : NSObject <ARSensor>
{
    struct __IOHIDEventSystemClient *_accelerometerSystemClient;
    struct __IOHIDServiceClient *_accelerometerService;
    struct __IOHIDEventSystemClient *_gyroSystemClient;
    struct __IOHIDServiceClient *_gyroService;
    NSObject<OS_dispatch_queue> *_imuDataQueue;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    id <ARSensorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;
- (void)stop;
- (void)start;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long powerUsage;
@property(readonly) Class superclass;

@end

