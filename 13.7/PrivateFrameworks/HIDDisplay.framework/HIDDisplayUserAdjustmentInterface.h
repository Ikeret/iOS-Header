//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayUserAdjustmentInterface : HIDDisplayInterface
{
    NSDictionary *_usageElementMap;
}

- (void).cxx_destruct;
- (id)get:(id *)arg1;
- (_Bool)set:(id)arg1 error:(id *)arg2;
- (_Bool)invalidate:(id *)arg1;
@property(readonly) _Bool valid;
- (_Bool)setupInterface;
- (id)getHIDDevices;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;

@end

