//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NRDeviceDiscoveryController : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *devices;
- (void)end;
- (void)begin;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (id)init;

@end

